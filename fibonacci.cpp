#include <iostream>
using namespace std;

int generator(int k){

    if(k == 1 ){
        return 0;
    }else if(k == 2){
        return 1;
    }else if(k == 3){
        return 1;
    }
    int m = generator(k-1)+generator(k-2);
    return m;
}


int main(){
    
    int n; cin >> n;

    cout << generator(n);
}