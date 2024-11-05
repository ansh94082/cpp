#include <iostream>
using namespace std;

int main() {
    cout << "enter the no. of rows and column in order"<<endl;
    int n; 
    cin >> n;
    int m; 
    cin >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int k = 0;
    while (k < m) { 
        if (k % 2 == 0) {
            for (int i = 0; i < n; i++) {
                cout << arr[i][k];
            }           
            k++;
        } else {
            for (int i = n - 1; i >= 0; i--) {
                cout << arr[i][k];
            }
            k++;
        }
    }

    return 0;
}
