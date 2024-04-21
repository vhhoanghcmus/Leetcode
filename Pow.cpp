#include <bits/stdc++.h>

using namespace std;
int main(){
    double x = 1.0000000000001, ans = 1;
    floorf(x * 100);
    cout << x;

    if( x == 1 ) cout << " Thuat toan ngu vl";
    if( x > 1 ) cout << " ngu vl";
    // if( n == 0) return 1;
    // if( x == 1) return 1;
    // if( x == -1) {
    //     if( n %2 == 0) cout << " function loi";
    //     else return 1;
    // }

    // if ( n < 1000) {
    // tryAgain:
    //     if(n > 0){
    //     for( int i = 0; i < n; i++){
    //         ans = ans * x;
    //     }
    // } else {
    //     ans = x;
    //     n = abs(n);
    //     for( int i = 0; i < n+1; i++){
    //         ans /= x;
    //     }
    // }

    // } else {
    //     if( x < 2 && x > -2){
    //         if( x == 1 || x == -1 ) return x;
    //         goto tryAgain;
    //     }    
    //     else return 0;
    // }
    // return ans;

    
    // cout << ans;
}

class Solution {
public:

double f1(double x,int n){
            if(n==0){
                return 1;
            }

            double A=f1(x,n-1);

            return x*A;
}

double f2(double x,int n){
            if(n==0){
                return 1;
            }
            double B=f2(x,n+1);

            return (1/x)*B;
}




    double myPow(double x, int n) {

        if(n==0) return 1;
        if(n==1) return x;
        if(n==-1) return 1/x;
        if(n%2) return x*myPow(x,n-1);
        return myPow(x*x,n/2);
    }
};