#include <iostream>
#include <cstring>
using namespace std;

/*
Trong đó; arr, row và col lần lượt là mảng 2 chiều, số hàng và số cột của mảng. 
Tìm chỉ số của cột có tổng tất cả các phần tử lớn nhất.
Lưu ý: Cột đầu tiên được đánh chỉ số 0. Nếu có nhiều hơn một cột có tổng lớn nhất, ta chọn cột có chỉ số lớn nhất.
*/

int findMaxColumn(int arr[][1000], int row, int col);

int main() {

	int arr[][1000] = {{-44,64,-6},{87,92,-19},{-92,53,-38},{-39,-92,21}};
	cout << findMaxColumn(arr, 4, 3);

	int arr[][1000] = {{-92,78,-2,-58,-37},{44,-4,30,-69,22}};
	cout << findMaxColumn(arr, 2,5);
}

int findMaxColumn(int arr[][1000], int row, int col){
    int max = 0;
    int position = 0;
    int tmp[col];
    for(int i=0; i<col; i++){
        int total = 0;
        for(int j=0; j<row; j++){
            total = total + arr[j][i];
        }
        tmp[i] = total;
    }
    for(int i=0; i<col; i++){
        cout<<tmp[i]<<endl;
        if(max < tmp[i]){
            max = tmp[i];
            position = i;
        }
    } 
    return position;
}
	