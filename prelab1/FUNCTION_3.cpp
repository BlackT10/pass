/*
Viết hàm sum2 để tính tổng giá trị các phần tử trong mảng số nguyên.

Tham số:
int* array: mảng số nguyên
int size: số phần tử trong mảng
int& result: tham số để lưu kết quả cuối cùng sau khi tính toán

*/

void sum2(int * array, int numEls, int &result)
{
    // TODO
     result=0;
    for(int i=0; i<numEls; i++){
        cin>>array[i];
    }
    for(int i=0; i<numEls; i++){
        result+=array[i];
    }
}