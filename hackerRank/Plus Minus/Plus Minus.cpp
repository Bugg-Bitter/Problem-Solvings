#include<bits/stdc++.h>
using namespace std;
int main()
{
    int lim,i,arr[100],pos=0,neg=0,zer=0;
    cin >> lim;
    for(i=0;i<lim;i++)
    {
        cin >> arr[i];
        if(arr[i] > 0)
            pos++;

        else if((arr[i] < 0))
            neg++;

        else if((arr[i] == 0))
            zer++;
    }
    printf("%6f\n",(pos/(double)lim));
    printf("%6f\n",(neg/(double)lim));
    printf("%6f\n",(zer/(double)lim));
    return 0;
}
