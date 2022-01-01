#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of rows: ";
    cin>>n;
    int i,j;
    int front_space = 0;
    int middle_space = n+2;

    for(i=0;i<n;i++){
        if(i!=n-1){
            for(j=0;j<front_space;j++){
                cout<<" ";
            }
            cout<<"*";

            for(j=0;j<middle_space;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        else{
            for(j=0;j<front_space;j++){
                cout<<" ";
            }
            cout<<"*";
        }

        front_space++;
        middle_space-=2;

        cout<<"\n";
    }


    return 0;
}
