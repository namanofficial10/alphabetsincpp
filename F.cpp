#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of rows: ";
    cin>>n;
    int i,j;

    for(i=0;i<n;i++){
        if(i==0){
            for(j=0;j<n-1;j++){
                cout<<"*";
            }
        }
        else if(i==n/2){
            for(j=0;j<(n/2)+1;j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(j=0;j<n-2;j++){
                cout<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}

