#include <iostream>
using namespace std;
int main(){
    string  number;
    cout<<"Enter a input : ";
    cin>>number;    
    int num=1;
    for(int i=0;i<number.size();i++){
        if(number[i]=='+' || number[i]=='-' || number[i]=='*' || number[i]=='/' || number[i]=='%'){
           cout<<"operator"<<num<<":"<<number[i]<<endl;
           num++;
        }

    }
    return 0;
}