#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of rows: ";
    cin>>n;
    int i,j;
    int front_space=n/3, mid_space=n/2+2;

    for(i=0;i<n;i++){
        if(i==0){
            for(j=0;j<front_space;j++){
                cout<<" ";
            }
            for(j=front_space;j<mid_space;j++){
                cout<<"*";
            }
            mid_space-=2;
            front_space--;
        }
        else if(i<n/3){

            for(j=0;j<front_space;j++){
                cout<<" ";
            }
            cout<<"*";
            for(j=0;j<mid_space;j++){
                cout<<" ";
            }
            cout<<"*";
            mid_space-=2;
            front_space--;

        }
        else if(i==n/3){
            cout<<"*";
            for(j=0;j<n-2;j++){
                cout<<" ";
            }
            cout<<"*";
            mid_space=n/2+3;
        }
        else if(i>=n/3 && i<2*n/3){
            cout<<"*";
        }
        else if(i==2*n/3){
            for(j=0;j<front_space;j++){
                cout<<" ";
            }
            cout<<"*";
            for(j=0;j<n/2;j++){
                cout<<" ";
            }
            for(j=2*n/3;j<n;j++){
                cout<<"*";
            }

            front_space++;
            mid_space-=2;

        }
        else if(i>2*n/3 && i!=n-1){
            for(j=0;j<front_space;j++){
                cout<<" ";
            }
            cout<<"*";
            for(j=0;j<mid_space;j++){
                cout<<" ";
            }
            cout<<"*";

            front_space++;
            mid_space-=2;

        }
        else if(i==n-1){
            for(j=0;j<front_space;j++){
                cout<<" ";
            }
            for(j=front_space;j<n/2+2;j++){
                cout<<"*";
            }
            front_space++;
            mid_space-=2;

        }
        cout<<endl;

    }

    return 0;
}
