#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int work(int X,int Y)
{
    return ((floor(sqrt(Y)) - ceil(sqrt(X)))+1);
}
int main()
{
    int T,X,Y;
    cin >> T;
    while(T!=0)
    {
        cin >> X >> Y;
        cout << work(X,Y) << endl;
        T--;
    }
    return 0;
}
