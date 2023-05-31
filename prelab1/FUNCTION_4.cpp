/*
Viết hàm bool completeNum(int N) để kiểm tra xem số nguyên dương N có phải là một số hoàn thiện hay không. N là một số hoàn thiện nếu N bằng tổng tất cả ước số nguyên dương (không bao gồm chính nó) của nó.

Đầu vào: 
int N: số nguyên dương N cần kiểm tra

Đầu ra:
bool: trả về true nếu N là số hoàn thiện, ngược lại trả về false

*/

bool completeNum(int N)
{
    // TODO
    int sum;
    cin>>N;
    sum = 1;
  
    for (int i=2; i*i<=N; i++)
    {
        if (N%i==0)
        {
            if(i*i!=N)
                sum = sum + i + N/i;
            else
                sum=sum+i;
        }
    }
     if (sum == N && N != 1)
          return true;
  
     return false;
}