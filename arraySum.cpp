#include <iostream>
using namespace std;

int theSum(int *arr , int size){

    int m = arr[0];
    if(size == 0 || size == 1){
        return arr[0];
    }
    int ans = m + theSum(arr+1 , size-1);
    return ans;
}



int main(){
    int arr[8]={2,3,12,6,9,1,2,3};
    int size = 8;
    cout << theSum(arr , size) << endl;

}