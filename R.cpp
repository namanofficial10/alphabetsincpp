#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of rows: ";
    cin>>n;
    int i,j;
    int middle_space=0;

    for(i=0;i<n;i++){
        if(i==0 || i==n/2){
            for(j=0;j<n-2;j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            if(i<n/2){
                for(j=0;j<n-3;j++){
                    cout<<" ";
                }
            }
            else{
                for(j=0;j<middle_space;j++){
                    cout<<" ";
                }
                middle_space++;
            }
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}


