#include <iostream>
using namespace std;

int main(){
    cout << "This program rotates your array by 90 degrees"<<endl;
    cout << "Enter the index of square matrix :" << endl;
    int n; cin >> n;
    int arr[n][n];
    cout <<"Enter the no. and press enter after every element (note : elements will be stored row wise)" << endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        cin >> arr[i][j];

        }
    }
    cout << "Your array is :"<<endl;


     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        cout << arr[i][j] << "   ";

        }
        cout << endl << endl;
    }

    for(int i=0; i < n ; i++){
        for(int j = i; j < n; j++){
            swap(arr[i][j],arr[j][i]);

        }

    }
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n/2; j++){
            swap(arr[i][j] , arr[i][n-j-1]);
        }
    }
    cout << "The rotated array is :" <<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j]<<"   ";
        }
        cout << endl << endl;
    }

     return 0;
}


