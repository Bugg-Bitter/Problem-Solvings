#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Test,T,sum=0,O,i=0,j=0,OO;
    cin >> Test;
    for(i=0; i<Test; i++)
    {
        cin >> T;
        O = T;
        OO = T;
        int S = to_string(O).length();
        for(j=0; j<S; j++)
        {
            T = OO%10;
            if(T == 0)
            {
                OO/=10;;
                continue;
            }
            else if((O%T) == 0)
                sum++;
            OO/=10;
        }
        cout << sum << endl;
        sum=0;
    }
    return 0;
}
