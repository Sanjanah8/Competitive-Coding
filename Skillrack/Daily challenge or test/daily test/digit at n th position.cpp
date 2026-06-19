#include <iostream>
#include<string>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    string s="";
    for(int i=1;i<=m;i++){
        s+=to_string(i);
    }
    cout<<s[n-1];
    return 0;
}
