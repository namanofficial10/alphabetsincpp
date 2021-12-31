#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of rows: ";
    cin>>n;
    int i,j;
    int middle_space = -1;
    int all;
    if(n%2==0){
        all = n+1;
    }
    else{
        all = n;
    }
    for(i=0;i<n;i++){
        for(j=n-i;j>0;j--){
            cout<<" ";
        }
        if(i==n/2){
            for(j=0;j<all;j++){
                cout<<"*";
            }
        }
        else{

            cout<<"*";
            if(i!=0){

                for(j=0;j<middle_space;j++){
                    cout<<" ";

                }


                cout<<"*";
            }

        }
        middle_space +=2;
        cout<<"\n";
    }
    return 0;
}
