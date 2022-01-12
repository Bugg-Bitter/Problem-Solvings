#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int p=1;
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++)
        if(s[i] >= 'A' && s[i] <= 'Z')
            p++;
    cout << p;
    return 0;
}
