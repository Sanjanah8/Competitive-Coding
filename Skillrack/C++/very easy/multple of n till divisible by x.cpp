#include <iostream>
using namespace std;

int main() {
    int n,x;
    cin>>n>>x;
    int multiple=n;
    while(true){
        cout<<multiple<<" ";
        if(multiple%x==0){
            break;
        }multiple+=n;
    }
}
