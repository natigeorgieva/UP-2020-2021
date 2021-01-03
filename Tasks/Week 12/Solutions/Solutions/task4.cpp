#include <iostream>
#include <cmath>
using namespace std;

int F(int n);
int M(int n);

int main(){
    cout<<"F(5) = "<<F(5)<<endl;
    cout<<"M(10) = "<<M(10)<<endl;
}

int F(int n){
    if(n == 0) return 1;

    return n - M(F(n-1));
}

int M(int n){
    if( n == 0) return 0;

    return n - F(M(n-1));
}
