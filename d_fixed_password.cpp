#include<iostream>
using namespace std;
int main(){
    int pass=1999;
    int p;
    while(cin>>p){   //we have used here while because we have to take multiple inputs at a time but the size is not mentioned.While loop can take infinite inputs until break.
    if(p!=pass){
        cout<<"Wrong"<<endl;
    }
    else{
        cout<<"Correct"<<endl;
        break;
    }
}
    return 0;

}