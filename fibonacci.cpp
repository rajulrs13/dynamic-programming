// Rajul Saxena
// rajulrs13@gmail.com
#include<iostream>
using namespace std;

// Space optimised, not using an entire array to store n numbers (only using prev & supPrev)
int getNthFibonacci(int n){
    int supPrev = 0;
    if(n == 0) return supPrev;

    int prev = 1;
    for(int i = 2; i <= n; i++){
        int temp = prev + supPrev;
        supPrev = prev;
        prev = temp;
    }

    return prev;
}

int main(){
    int n;
    cin >> n;
    cout << getNthFibonacci(n);
    return 0;
}