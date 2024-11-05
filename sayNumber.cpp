#include <iostream>
using namespace std;

void sayIt(int m){

    if(m == 0)
        cout << "zero";
        return;
    if(m ==1 )
        cout << "one";
        return;
    if(m ==2)
        cout << "two";
        return;
    if(m ==3)
        cout << "three";
        return;

    if(m ==4)
        cout << "four";
        return;

    if(m ==5)
        cout << "five";
        return;

    if(m ==6)
        cout << "six";
        return;

    if(m ==7)
        cout << "seven";
        return;

    if(m ==8)
        cout << "eight";
        return;

    if(m ==9)
        cout << "nine";
        return;


    int k = m%10;
    m /= 10;
    sayIt(k);

}


int main(){

    int n;
    cin >> n;

    sayIt(n);

}