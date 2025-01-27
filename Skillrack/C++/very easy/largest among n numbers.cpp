#include <iostream>
using namespace std;

int main() {
   int n,num,largest;
   cin>>n;
   cin>>largest;
   for(int i=1;i<n;i++){
       cin>>num;
       if(num>largest){
           largest=num;
       }
   }cout<<largest;
}
