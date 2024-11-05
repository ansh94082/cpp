#include <iostream>
using namespace std;

bool binary(int *arr , int s , int e , int k ){

    int m = s + (e-s)/2;
    if(s>e){
        return false;
    }
    if(arr[m] > k){
        return binary(arr, s , m-1 ,k);
    }else if(arr[m] == k){
        return m;
    }else{
        return binary(arr,m+1 , e ,k);
    }
}



int main(){
    int arr[6] = {2,3,4,5,6,7};
    int k = 8;
    int ans = binary(arr , 0 , 5 ,k);
    if(ans){
        cout << "number found" << endl;

    }else{
        cout << "number not found" << endl;
    }

}