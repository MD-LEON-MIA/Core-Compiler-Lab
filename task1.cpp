#include <iostream>
using namespace std;
    int flag=1;
    bool isNumericConstant(string number){
        bool flag=1;
        for(int i=0;i<number.size();i++){
        if(number[i]<'0' || number[i]>'9'){
            flag=0;
            break;
        }
     }
      return flag;
}

void checkNumericConstant(string number){
    bool numer=1;
    int c=1;
    for(int i=0;i<number.size();i++){
        if(number[i]=='+' || number[i]=='-' || number[i]=='*' || number[i]=='/' || number[i]=='%' || number[i]=='='){
            numer=0;
            cout<<"operator "<<c<<" : "<<number[i]<<endl;
            c++;
        }
    }
}
bool iscomment(string number){
    bool flag=0;
    for(int i=0;i<number.size();i++){
        if(number[i]=='/' || number[i+1]=='/' || number[i]=='/' || number[i]=='*' || number.size()-2 =='*' || number.size()-1 =='/'){
            flag=1;
            break;
        }
    }
    return flag;
}

void identifier(string number){
    bool flag=1;
    for(int i=0;i<number.size();i++){
        if(number[i]<'a' || number[i]>'z' || number[i]<'A' || number[i]>'Z' || number[i]=='_'){
            flag=0;
            break;
        }
     }
      if(flag==1){
        cout<<" this input is Identifier"<<endl;
    }
    else{
        cout<<"this input is not Identifier"<<endl;
    }   
}
   

/*
    if(flag==1){
        cout<<" this input is Numeric Constant"<<endl;
    }
    else{
        cout<<"this input is not Numeric Constant"<<endl;
    }   


    return 0;
}
    */


int main(){
    if(isNumericConstant("1234")){
        cout<<"this input is Numeric Constant"<<endl;
    }
    else{
        cout<<"this input is not Numeric Constant"<<endl;
    }
    checkNumericConstant("1234+5678-90*12/34%5=6");

    if(iscomment("/*this is a comment */")){
        cout<<"this is a comment"<<endl;
    }
    else{
        cout<<"this is not a comment"<<endl;            
    }
    return 0;
}