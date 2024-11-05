#include <iostream>
using namespace std;

int main(){
    int n;
    int k;
    int l;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    for(int i = 0 ; i < n; i++){
            if(arr[i]>=arr[0]){
                arr[i]=k;

            }else{
                arr[0]=k;
            }
    }
       for(int i = 0 ; i < n; i++){
            if(arr[i]<=arr[0]){
                arr[i]=l;

            }else{
                arr[0]=l;
            }
    }
    cout << k-l ;

}

