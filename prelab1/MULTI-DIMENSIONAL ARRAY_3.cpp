#include <iostream>
#include <cstring>
using namespace std;

/*
Trong đó; arr, row và col lần lượt là mảng 2 chiều, 
số hàng và số cột của mảng. Một ma trận được gọi là đối xứng nếu với mọi i, j; 
giá trị của phần tử ở hàng i, cột j luôn bằng giá trị của phần tử ở hàng j, cột i. 
Kiểm tra xem mảng này có phải là một ma trận đối xứng hay không; trả về true nếu mảng này là ma trận đối xứng; ngược lại, trả về false.
*/

bool isSymmetric(int arr[][1000], int row, int col);

int main(){
    int arr[][1000] = {{1,4,6}, {4,5,3}, {6,3,9}};
    cout << isSymmetric(arr,3,3);

    int arr[][1000] = {{1,9,6}, {4,5,3}, {6,3,9}};
    cout << isSymmetric(arr,3,3);
}

bool isSymmetric(int arr[][1000], int row, int col) {
    if(row!=col){
        return false;
    }
    for(int i=0; i<col-1; i++){
        for(int j=i+1; j<col; j++){
            if( arr[i][j] != arr[j][i] ){
                return false;
            }
        }
    }
    return true;
}