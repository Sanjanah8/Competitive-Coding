#include <iostream>
using namespace std;

int main() {
    int a,b,m;
    cin>>a>>b>>m;
    for(int i=a;i<=b;i++){
        if(i%m!=0){
            cout<<i<<" ";
        }
    }
}
