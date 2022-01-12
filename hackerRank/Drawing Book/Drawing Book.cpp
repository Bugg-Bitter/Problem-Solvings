#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,page,finds,co=0,bac=0;
    cin >> page >> finds;
    if(page == finds)
    {
        cout << "0";
        return 0;
    }

    for(i=1; i<page; i+=2)
    {
        if((finds < i) || (finds == i))
            break;
        else
            co++;
    }
    if(page % 2 == 0)
    {
        page++;
        for(i=page; i>=1; i-=2)
        {
            if((finds > i) || (finds == i) || i-1 == finds)
                break;
            else
                bac++;
        }
    }
    else if(page % 2 != 0)
    {
        for(i=page; i>=1; i-=2)
        {
            if((finds > i) || (finds == i) || i-1 == finds)
                break;
            else
                bac++;
        }
    }
    if(co > bac)
        cout << bac;
    else
        cout << co;
    return 0;
}
