#include <iostream>
#include <cstring>
using namespace std;

/*
Trong đó; arr, row và col lần lượt là mảng 2 chiều, số hàng và số cột của mảng. 
Tìm tích của tất cả các phần tử trong đường chéo chính của mảng.
*/

int diagonalProduct(int arr[][1000], int row, int col);

int main(){
    int arr[][1000] = {{-45,18,-37},{-2,-31,24},{-48,-33,-48}};
    cout << diagonalProduct(arr,3,3);

    int arr[][1000] = {{-11,44,18,33},{-34,-9,-42,-42},{47,-26,4,-8},{-35,11,-34,-19}};
    cout << diagonalProduct(arr,4,4);
}

int diagonalProduct(int arr[][1000], int row, int col) {
    int ans = 1;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(j==i){
                ans = ans*arr[i][j];
            }
        }
    }
    return ans;
}