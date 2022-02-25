#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,X,Y;
    cin >> T;
    while(T)
    {
        int c=0;
        cin >> X >> Y;
        for(int i=1;i<=Y;i++)
        {
           if((i*i) >= X && (i*i) <= Y)
                c++;
            else if(i*i > Y)
                break;
        }
        cout << c << endl;
        T--;
    }

    return 0;
}
