#include<iostream>
using namespace std;

int fibonacci(int);
int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int x){
    int sum = 0 ;
    if(x==0){ return 0; }
    if(x==1){ return 1; }
    else{
        sum = fibonacci(x-1) + fibonacci(x-2) ;
        return sum; }
    
}
