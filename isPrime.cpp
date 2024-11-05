#include <iostream>
using namespace std;

bool isPrime(int k){
    int p = 2; 
    while(p<k){
        if(k%p==0){
            return false;
        }
        else
        p++;
    }
    return true;
}

int main(){
    int n; cin >> n;
    int arr[n+1];
    for(int i = 0; i < n+1; i++){
        arr[i] = 0;
    }
    for(int i = 2; i < n+1; i++){

        if(isPrime(i)==1){
        arr[i] = 1;
        }
    }
    for(int i = 2; i < n+1; i++){

        if(arr[i]==1){
        cout << i << endl;
        }

    }

    return 0;
}