#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    
    
 
    while (t--){
    cin>>n;
    long long int fact=1;
       for(int i=1;i<=n;i++){
          fact=fact*i;
       }
       cout<<fact<<endl;
          
       }
       return 0;
       
 
 
 
}