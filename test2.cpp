#include<iostream>
using namespace std;
int main(){
    int n;


    int p[n][3];
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>p[i][j];

        }
    }
    int sum=o;
    sum+=p[i][j];
    if(sum>=2){
        count++;
    }
    cout<<count;
    return 0;

}

