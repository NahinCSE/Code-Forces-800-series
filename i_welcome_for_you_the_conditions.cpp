#include<iostream>
using namespace std;
int main()
{
    int A[2];
    0<=A[0],A[1]<=100;
    for(int i=0;i<2;i++){
        cin>>A[i];
         
    }
    if(A[0]>=A[1]){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;

}