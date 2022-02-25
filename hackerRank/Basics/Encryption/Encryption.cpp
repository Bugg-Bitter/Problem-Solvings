#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int i=0,j=0,c=0,k;
    while(i<s.size())
    {
        if(s[i] != ' ')
            s[j++] = s[i];
        i++;
    }
    s[j] = '\0';
    int lb = floor(sqrt(j));
    int ub = ceil(sqrt(j));

    if(lb == ub)
    {
        i=0;
        while(c<=j)
        {
            for(k=i; k<=j; k+=(lb))
            {
                if(s[k] != '\0')
                cout << s[k];
                c++;
            }
            cout << " ";
            i++;

        }
    }
    else
    {
        i=0;
    while(c<=j)
    {
        for(k=i;k<=j;k+=(lb+1))
        {
            if(s[k] != '\0')
            cout << s[k];
            c++;
        }
            cout << " ";
        i++;
    }
    }
}
