#include <iostream>
#include <cstring>
#include  <cctype>
using namespace std;

/*
Viết hàm void printFirstRepeatedWord(const char str[]) in ra từ đầu tiên trong 
chuỗi bị lặp lại. 

- Đầu vào:
Mảng kí tự chứa chuỗi

- Đầu ra:
In ra từ đầu tiên trong chuỗi có lặp lại. Nếu không có từ nào lặp lại thì in ra 
"No Repetition"
*/

void printFirstRepeatedWord(char str[]);

int main(){
    char str[] = "car taxi bike bike car taxi" ;
    printFirstRepeatedWord(str);
    char str1[] = "football voleyball badminton football";
    printFirstRepeatedWord(str1);
    char str2[] = "football voleyball badminton footballl";
    printFirstRepeatedWord(str2);
    char str3[] = "football voleyball badmintonfootball";
    printFirstRepeatedWord(str3);
    char str4[] = "football voleyball badminton footballl tennis";
    printFirstRepeatedWord(str4);
    char str5[] = "she is is she";
    printFirstRepeatedWord(str5);
    char str6[] = "Robert had said that he had be upset";
    printFirstRepeatedWord(str6);
    char str7[] = "O here u are O";
    printFirstRepeatedWord(str7);
    char str8[] = "run ran ron rap ra";
    printFirstRepeatedWord(str8);
    char str9[] = "ho oh jnnn oh jnnn";
    printFirstRepeatedWord(str9);
    char str10[] = "Ha Noi Ha Tinh";
    printFirstRepeatedWord(str10);
}

void printFirstRepeatedWord(char str[]) {
    // TODO
        char tmp[100][100];
        int n = 0;
        char *token = strtok(str," ");
        while (token != NULL){
            strcpy(tmp[n++], token);
            token = strtok(NULL, " ");
        }
        int res = 0;
        for(int i=0;i<n;i++){
            int ok=0;
            for(int j=i+1;j<n;j++){
                //cout<<"tmp["<<i<<"] là "<<tmp[i]<<" ,tmp["<<j<<"] là "<<tmp[j]<<endl;
                if(strcmp(tmp[i], tmp[j]) == 0){
                    ok = 1;
                    break;
                }
            }
            if(ok){
                cout<<tmp[i]<<endl;
                res = 1;
                break;
            }
        }
        if(!res){
            cout<<"No Repetition"<<endl;
        }
}    