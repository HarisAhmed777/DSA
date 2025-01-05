#include <iostream>
using namespace std;

int printsquarepattern(int n){
    for(int i=0;i<n;i++){

        for (int j=0;j<n;j++){
            char ch = 'A';
            ch = j + int(ch);

            cout<< ch<< " ";
            // cout<<"This is the count of " << j << " ";
        }
        cout<<endl;
    }
    return 0 ;
}
int main(){
    int n ;
    cin>>n;
    printsquarepattern(n);
    return 0 ;
}