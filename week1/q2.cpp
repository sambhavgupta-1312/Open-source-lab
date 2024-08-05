#include<bits/stdc++.h>
using namespace std;

//comment for q4

int main()
{   string s;
    getline(cin,s);

    string reverseString="";

    for(int i=s.length()-1;i>=0;i--)
        reverseString+=s[i];

    cout<<reverseString<<endl;

    return 0;
}