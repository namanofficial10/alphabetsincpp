#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of rows: ";
    cin>>n;
    int i,j;
    int front_space=n/3;

    for(i=0;i<n;i++){
        if(i==0){
            cout<<" ";
            for(j=1;j<n-1;j++){
                cout<<"*";
            }
        }
        else if(i==n-1){
            for(j=0;j<n-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        else if(i==n-2){
            cout<<" ";
            for(j=1;j<n-1;j++){
                cout<<"*";
            }
        }
        else if(i<2*n/3-1){
            cout<<"*";
            for(j=0;j<n-2;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        else{
            cout<<"*";
            for(j=0;j<front_space;j++){
                cout<<" ";
            }
            cout<<"*";
            for(j=0;j<n-front_space-3;j++){
                cout<<" ";
            }
            cout<<"*";
            front_space++;
        }
        cout<<"\n";
    }

    return 0;
}



