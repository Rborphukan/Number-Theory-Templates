// Method of finding "gcd" using euclidean algorithm:

#include <iostream>
using namespace std;
//for instance a >= b or b <= a

// Using recursive method:

int gcd(int a, int b){

    if(b==0) return a;
    
    return gcd(b,a%b);
}