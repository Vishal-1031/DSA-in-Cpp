#include<iostream>
using namespace std;
int fib(int n){
    // base case 
    if(n == 1)
    return 0;
    if (n == 2)
    return 1;
    int fibonacii = fib(n-1) + fib(n-2);
    return fibonacii ;
}
int main (){
    cout<< "Enter the nth term you want to print " << endl;
    int n;
    cin >> n;
    int ans = fib(n);
    cout << endl;
    cout << ans << endl; ;
} 