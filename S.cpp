#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of rows: ";
    cin>>n;
    int i,j;

    for(i=0;i<n;i++){
        if(i==0 || i==n/2 || i==n-1){
            for(j=0;j<n-1;j++){
                cout<<"*";
            }
        }
        else{
            if(i<n/2){
                cout<<"*";
            }
            for(j=0;j<n-2;j++){
                cout<<" ";
            }
            if(i>n/2){
                cout<<"*";
            }
        }
        cout<<"\n";
    }

    return 0;
}



