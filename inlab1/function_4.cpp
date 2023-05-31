#include <iostream>
#include <cstring>
#include  <cctype>
using namespace std;

/*
Viết hàm kiểm tra các phần tử trong mảng có duy nhất hay không

Đầu vào:
int* arr: mảng số tự nhiên
int n: số lượng phần tử trong mảng

Đầu ra:
bool: trả về true nếu các phần tử trong mảng là duy nhất, ngược lại trả về false
*/

int main(){
  int n;
  cin >> n;
  int* arr = new int[n];
  for(int i = 0; i < n; i++) {
      cin >> arr[i];
  }
  cout << checkElementsUniqueness(arr, n);
  delete[] arr;

/*  int n;
  cin >> n;
  int* arr = new int[n];
  for(int i = 0; i < n; i++) {
      cin >> arr[i];
  }
  cout << checkElementsUniqueness(arr, n);
  delete[] arr;
*/
}

bool checkElementsUniqueness(int* arr, int n) {
    // Write your code 
      // Write your code 
    int temp[n];
    int x=1;
    for (int i=0; i<n; i++){
      temp[i]=arr[i];
    }
    int i,j;
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(temp[j]==arr[i] && i!=j){
          x = 0;
          break;
        }
      }
    }
    if(x == 1) return true;
    else return false;
}