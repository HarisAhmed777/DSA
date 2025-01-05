#include <iostream>
using namespace std;

int trianglepattern(int n){
    for(int i=0;i<n;i++){
        for (int j=0 ;j<=i;j++){
            cout << "* ";
        }
        cout<<endl;
    }
    return 0;
}

int reversetrianglepattern (int n){
    for(int i=0;i<=n;i++){
        for(int j=i+1;j>0;j--){
            cout<< j << " ";
        }
        cout << '\n';
    }
    return 0;
}
int invertedtriangle(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int k =0;k<=n-i;k++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}
int main(){
    int n ;
    cin>> n;
    // trianglepattern(n);
    // reversetrianglepattern(n);
    invertedtriangle(n);
    return 0;

}