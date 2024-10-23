#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int m; cin >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    int count = 0;
    int total = n*m;

    int startRow = 0;
    int startCol = 0;
    int endingCol = m-1;
    int endingRow = n-1;

    while(count <total){

        for(int i = startCol; count <total && i < endingCol; i++){
            cout << arr[startRow][i]<<" ";
            count++;

        }
        cout << endl;
        startRow++;
        for(int i = startRow; count <total && i < endingRow; i++){
            cout << arr[i][endingCol]<< " ";
            count++;

        }
        cout << endl;
        endingCol--; 
        for(int i = endingCol; count <total && i >=startCol; i--){ 
            cout << arr[endingRow][i] << " ";
            count++;

        }
        cout << endl;
        endingRow--;
        for(int i = endingRow; count <total && i>=startRow; i--){
            cout << arr[i][startCol] << " ";
            count++;
 
        }
        cout << endl;
        startCol++;

    }

return 0;

}