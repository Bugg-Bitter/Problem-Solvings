#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int j,a[T],i,sub=0,take=0;
    string takes[T];
    for(i=0;i<T;i++)
    {
        for(j=0;j<3;j++)
           cin >> a[j];

           if(a[2] > a[1])
            sub = a[2]-a[1];
           else
            sub = a[1]-a[2];

           if(a[2] > a[0])
            take = a[2]-a[0];
           else
            take = a[0]-a[2];
            if(sub < take)
                cout << "Cat B" << endl;
            else if(sub > take)
                cout << "Cat A" << endl;
            else if(sub == take)
                cout << "Mouse C" << endl;
    }
    return 0;
}
