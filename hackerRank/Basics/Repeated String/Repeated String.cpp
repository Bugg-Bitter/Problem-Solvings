#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >> s;

    long long int a,c=0,i=0;
    cin >> a;
    for(i=0;i<s.size();i++)
        if(s[i] == 'a') c++;
    long long int q = (a/s.size())*c;

    for(i=0;i<(a%s.size());i++)
        if(s[i] == 'a') q++;
    cout << q;
    c=0;
    return 0;
}
