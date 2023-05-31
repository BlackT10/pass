/*
Một hàm tìm ước số chung lớn nhất của 2 số nguyên dương có thể viết thông qua đệ quy
và vòng lặp đơn giản. Bạn hãy viết hàm gcdRecursion để hiện thực tìm ước chung lớn 
nhất bằng đệ quy và hàm gcdIteration để tìm ước số chung lớn nhất bằng vòng lặp

Đầu vào:

Lần lượt 2 số nguyên p, q (1 ≤ p,q < 109 ).

Đầu ra:

Hàm gcdRecursion và gcdIteration lần lượt trả về giá trị là ước chung lớn nhất của 
p, q
*/

#include<iostream>
#include<string>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

/* END of library */


int gcdRecursion(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [1]
    // TODO
    if (q == 0) return p;
    if (p%q == 0) return q;
    return gcdRecursion(q,p%q);
    // END YOUR EMPLEMENTATION [1]
}

int gcdIteration(int p, int q)
{
    hiddenCheck();
    // BEGIN YOUR IMPLEMENTATION [2]
    // TODO
    p=abs(p);
    q=abs(q);
    while (p*q != 0){
        if(p>q){
            p %= q;
        }
        else{
            q %= p;
        }
    }
    return p+q;
    // END YOUR EMPLEMENTATION [2]
    return 0;
}

int main()
{
    hiddenCheck();
    int p,q;
    cin>>p>>q;
    cout<<gcdRecursion(p,q)<< " "<<gcdIteration(p,q);
    return 0;
}