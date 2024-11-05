#include <iostream>
using namespace std;

int calculator(int k){    
    if(k == 1){
        return 1;
    }

    cout << k <<endl;
    calculator(k-1);
}


int main(){
    int n; cin >> n;
    cout << calculator(n)<<endl;
}