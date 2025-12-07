#include <iostream>
using namespace std;
int main(){
    
    int count;//to count number of words
    cin>>count;//taking input the number of words
    string word[count];//array to store words
    for(int i=0;i<count;i++){ //loop to take input words
        cin>>word[i];}
    

    for(int i=0;i<count;i++){
        
        
            if(word[i].length()>10){
                cout<<word[i][0]<<word[i].length()-2<<word[i][word[i].length()-1];
                cout<<endl;
            }
            else{
                cout<<word[i];
                cout<<endl;
            }
            
            
        }


    return 0;
}
    