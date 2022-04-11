// Binary Expontiation standard template:

#include <iostream>
using namespace std;

// Using recursive Method:

int BinExponRec(int a, int b){

    if(b==0) return 1;
    long temp = BinExponRec(a,b/2);
    if(b&1){
        return a * temp * temp;
    }
    else{
        return temp * temp;
    }
}

// Using Iterative Method (faster than recursive method):

int BinExponIter(int a, int b){
    int ans = 1;
    while(b){
        if(b&1){ // if 
            ans = ans * a;
        }
        a = a*a;
        b = b>>1;
    }
    return ans;
}