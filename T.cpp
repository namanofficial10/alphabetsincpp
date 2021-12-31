#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of rows: ";
    cin>>n;
    int i,j;

    for(i=0;i<n;i++){
        if(i==0){
            for(j=0;j<n;j++){
                cout<<"*";
            }
        }
        else{

            for(j=0;j<n/2;j++){
                cout<<" ";
            }

            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}



