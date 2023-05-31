/*
Viết hàm findMax để tìm giá trị lớn nhất trong mảng số nguyên.

INPUT
int* vals: mảng số nguyên 
int numEls: số phần tử trong mảng vals

OUTPUT
int: giá trị lớn nhất có trong mảng vals
*/

int findMax(int *vals, int numEls) {
    // TODO
     int max=-1000;
     for(int i=0; i<numEls; i++){
        cin>>vals[i];
    }
    for(int i=0; i<numEls;i++){
        if (max < vals[i]) max=vals[i]; 
    }
    return max;
}