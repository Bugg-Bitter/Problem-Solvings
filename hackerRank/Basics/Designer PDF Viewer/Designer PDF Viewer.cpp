#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    char letter[27];
    int p,arr[30],i,j=0,pick=0,z=0;
    for(i=0;i<26;i++)
        cin >> arr[i];
    cin >> s;
    for(char i='a';i<='z';i++,z++)
        letter[z]=i;
        z--;

    for(j=0;j<s.length();j++)
    {
        for(p=0;p<26;p++)
            if((letter[p] == s[j])&&(pick<arr[p]))
                    pick = arr[p];
    }
    cout << pick*(s.length());
    return 0;
}
//*(s.length());
