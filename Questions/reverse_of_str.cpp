#include<iostream>
using namespace std;
int main(){
    char s[5]="aman";
    cout<<sizeof(s)<<endl;
    char arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i]=s[4-i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<"";
    }
    
    

return 0;
}