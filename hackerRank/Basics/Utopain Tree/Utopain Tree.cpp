#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,p,s;
    long long int a;
    cin >> T;
    for(i=0;i<T;i++)
    {
        cin >> p;
        if(p == 0)cout << "1\n";
        else if(p != 0)
        {
            if(p%2 == 0)
            {
                s = p/2;
                s++;
                a = (pow(2,s)-1);
                cout << a << endl;
            }
            else if(p%2 != 0)
            {
                p++;
                s = p/2;
                s++;
                a = (pow(2,s)-2);
                cout << a << endl;
            }
        }
    }
    return 0;
}
