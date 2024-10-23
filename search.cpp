#include <iostream>
using namespace std;

bool search(int arr[] , int size , int target){

    if(size == 0){
        return false;
    }


    if(arr[0] == target)
        return true;
    else{ 
        bool remaining = search(arr + 1 , size - 1 , target );
        return remaining;
    }

}


int main(){
    int arr[5] = { 2,3,4,7,8 };
    int size = 5;
    int target = 9;
    bool ans = search(arr , size , target);
    if(ans){
        cout << "number found" << endl;
    }
    else{
        cout << "number not found" << endl;
    }
}