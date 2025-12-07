#include<iostream>
using namespace std;
int main()
{
 char ch;
 cin>>ch;
 int num=(int)(ch);//process of getting ASCII value

 if(num>47 && num<58){
    cout<<"IS DIGIT";
 }
 else{
    cout<<"ALPHA"<<endl;
    if(num>=65 && num<=90){
        cout<<"IS CAPITAL";
    }
    else{
        cout<<"IS SMALL";
    }
 }
 return 0;
}