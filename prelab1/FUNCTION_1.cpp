#include <iostream>

using namespace std;

/*
Hiện thực hàm tính giai thừa của số N, sau đó gọi hàm vừa hiện thực trong hàm main để gán kết quả tính được vào biến result.
*/

// implement calculate factorial function in here
int recursive(int n){
    if (n == 1)
        return 1;
    return n * recursive(n - 1);
}

int main(int narg, char** argv)
{
    int N;
    cin >> N;
    long result;
    // call function calculateFactorial in here and assign value to the variable result
    result = recursive(N); 

    cout << result << endl;
    return 0;
}