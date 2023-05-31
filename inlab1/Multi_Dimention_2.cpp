// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
#include  <cctype>
using namespace std;

/*
Một cột của mảng được gọi là HN2 nếu tổng tất cả các phần tử trong cột đó là số nguyên tố. Tìm số cột HN2 có trong mảng.
*/

int primeColumns(int arr[][1000], int row, int col);

int main() {
    int arr[][1000] = {{-64,-28,-3,64},{-56,90,57,-31}};
    cout << primeColumns(arr,2,4);

    int arr[][1000] = {{34,-15,11,-70,-23,24},{-39,-90,63,-45,-52,48},{-42,92,55,92,82,81}};
    cout << primeColumns(arr,3,6);
}

int primeColumns(int arr[][1000], int row, int col) {
    int checkHN2 = 0;
    
    //tinh tong tung cot
    for(int cot=0; cot < col; cot++){
        int total = 0;
        for(int hang=0; hang < row; hang++){
            total = total + arr[hang][cot];
        }
        cout<<total<<endl;
        
        //kiem tra so nguyen to
        if(total>0){
            int i=1,demuoc=0;  
            do
            {
                if(total%i==0)  demuoc++; i++;
             }
            while (i<=total);
            if (demuoc==2){
                cout<<total<<" là số nguyên tố"<<endl;
                checkHN2++;
            }
            else{
                cout<<total<<" không là số nguyên tố"<<endl;
            }
        }
        
    }
    return checkHN2;
}