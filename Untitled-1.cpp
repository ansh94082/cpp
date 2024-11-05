#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if(n <= 1){
        return 0;  
    }

    for(int i = 2; i < n; i++) {
        bool isPrime = true; 

        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) { 
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            cout << i << " "<< endl; 
        }
    }

    return 0;
}
