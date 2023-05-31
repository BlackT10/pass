#include <iostream>
#include <string>

using namespace std;

/*
Một hàng trong mảng được gọi là HN1 nếu trong hàng đó, mỗi phần tử đều có giá trị không lớn hơn các phần tử đứng sau nó. 
Tìm số hàng HN1 có trong mảng.
*/

int main(){
    int arr[][1000] = {{32,4,9},{-80,37,71},{-91,-79,-55}};
    cout << ascendingRows(arr,3, 3);

    int arr[][1000] = {{-28,-8,-60,18},{-100,44,-1,24},{-94,92,-70,75}};
    cout << ascendingRows(arr,3,4);
}

int ascendingRows(int arr[][1000], int row, int col) {
    int checkHN1 = 0;
    for(int i=0; i<row; i++){
        int j=0;
        int count = 0;
        for(int j=0; j<col-1; j++){
            if(arr[i][j] < arr[i][j+1]){
                count++;
            }
        }
        if(count == col-1){
            checkHN1++;
        }
    }
    return checkHN1;
}