#include <iostream>
using namespace std;

int thispattern(int n){
    int num = 1;
    for (int i = 1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout <<num << " ";
            num++;
        }
        cout<<'\n';
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    thispattern(n);
    return 0;

}