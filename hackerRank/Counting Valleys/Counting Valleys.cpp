#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int co=0,cal=0,p;
    string s;
    cin >> p;
    cin >> s;
    int arr[s.length()];
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'U')
            arr[i] = ++co;
        else
            arr[i] = --co;
    }
    for(int i=0;i<s.length();i++)
            if((arr[i] == 0)&&(arr[i-1] == -1))
                cal++;
    cout << cal;
    return 0;
}
