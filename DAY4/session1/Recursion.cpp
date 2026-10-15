#include<iostream>
using namespace std;

long long fact(long long acc, long long n){
    if(n==0)
        return acc;
    return fact(acc*n, n-1);
}

long long factorial(long long n){
    return fact(1, n);
}

int main(){
    cout << factorial(20) << endl;
    return 0;
}