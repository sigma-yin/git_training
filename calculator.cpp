#include <iostream>
using namespace std;

int main(){
    double a,b;
    char op;
    cout<<"请输入四则运算表达式"<<endl;
    cin>>a>>op>>b;
    double result;
    bool ch=true;
    switch(op){
        case '*': result=a*b;
            break;
        case '/':
            if(b==0){
                cout<<"错误，除数不能为0"<<endl;
                ch=false;
            }else{
                result=a/b;
            }
            break;
        default: 
            cout<<"运算符不存在"<<endl;
            ch=false;
            break;
    }
    if(ch == true){
        cout<<"结果为"<<result<<endl;
    }
    return 0;
}

