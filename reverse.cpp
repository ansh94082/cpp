#include <iostream>
using namespace std;

void reverse( string &m , int i , int j){

    if(i > j){
        return;
    }
    swap(m[i], m[j] );
    reverse(m , i+1 , j-1);
}


int main(){

    string m = "poop";
    string ans = "poop";
    int size = 3;
    reverse(m, 0 , size);
    cout << "Answer is : " << m <<endl;

    if(ans == m){
        cout << "palindrome" << endl;
    }else{
        cout << "not palindrome" << endl; 
    }
    return 0;
}