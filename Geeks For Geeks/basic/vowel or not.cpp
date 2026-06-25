//best
#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    if (string("aeiouAEIOU").find(ch) != string::npos) {
        cout << "true";
    } else {
        cout << "false";
    }
    
    return 0;
}
//other
#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    
    char low_ch = tolower(ch);
    if (low_ch == 'a' || low_ch == 'e' || low_ch == 'i' || low_ch == 'o' || low_ch == 'u') {
        cout << "true";
    } else {
        cout << "false";
    }
    
    return 0;
}

//my code
#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        cout<<"true";
    }else{
        cout<<"false";
}
    return 0;
}
