// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int diagonalDiff(int arr[][1000], int row, int col, int x, int y);

int main() {
    /*int arr[][1000] = {{55,85,47,58},{31,4,60,67},{94,69,71,73},{51,62,64,90}};
    cout << diagonalDiff(arr,4,4,1,2)<<endl;
    cout<<"khi x=1 và y=2"<<endl;
    cout<<"đường chéo thứ 1: "<<85+60+73<<endl;
    cout<<"đường chéo thứ 2: "<<58+60+69+51<<endl;
    cout<<"khi x=2 và y=3"<<endl;
    cout<<"đường chéo thứ 1: "<<85+60+73<<endl;
    cout<<"đường chéo thứ 2: "<<73+64<<endl;*/
    
    int arr[][1000] = {{88,72,65,37},{82,84,34,12},{74,46,88,44}};
    for(int x=0;x<3;x++){
        for(int y=0;y<4;y++){
            cout << diagonalDiff(arr,3,4,x,y);
        }
    }
}

int diagonalDiff(int arr[][1000], int row, int col, int x, int y){
    // đường chéo thứ 1
    int ans1 = 0;
    int i1, j1;
    if(x<=y){
        cout<<endl;
        cout<<"chạy code x<=y"<<endl;
        i1 = 0;
        j1 = y-x;
        /*for( i1; i1 < row; i1++){
            cout<<"ans1 + arr["<<i1<<"]["<<j1<<"] = "<<ans1<<" + "<<arr[i1][j1]<<" = "<<ans1+arr[i1][j1]<<endl;
            ans1 = ans1 + arr[i1][j1];
            j1++;
        }*/
    }
    else{
        cout<<endl;
        cout<<"chạy code x>y"<<endl;
        i1 = x-y;
        j1 = 0;
        /*for( i1; i1 < row; i1++){
            cout<<"ans1 + arr["<<i1<<"]["<<j1<<"] = "<<ans1<<" + "<<arr[i1][j1]<<" = "<<ans1+arr[i1][j1]<<endl;
            ans1 = ans1 + arr[i1][j1];
            j1++;
        }*/
    }
    for( i1; i1 < row; i1++){
            cout<<"ans1 + arr["<<i1<<"]["<<j1<<"] = "<<ans1<<" + "<<arr[i1][j1]<<" = "<<ans1+arr[i1][j1]<<endl;
            ans1 = ans1 + arr[i1][j1];
            j1++;
    }
    //đường chéo thứ 2
    //if(x+y <= col){
    //   i2 = 0;
    //    j2 = x+y;
    //    for( i2; i2 < row; i2++){
            
    //    }
    //}
    
    return abs(ans1);
}