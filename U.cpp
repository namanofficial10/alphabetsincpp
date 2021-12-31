#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of rows: ";
    cin>>n;
    int i,j;

    for(i=0;i<n;i++){
        if(i==n-1){
            cout<<" ";
            for(j=1;j<n-1;j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(j=0;j<n-2;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}
