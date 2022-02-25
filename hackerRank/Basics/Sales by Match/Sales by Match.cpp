#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,num,co=0,T,j,store=0,ck=0,an=0,n;
    cin >> T;
    int arr[T],cop[T];
    for(i=0; i<T; i++)
    {
        cin >> arr[i];
        cop[i] = arr[i];
    }
    n = sizeof(cop) / sizeof(cop[0]);
    sort(cop, cop + n);
    for(i=0; i<T; i++)
    {
        num =0;
        if(an < cop[i])
        {
            an=cop[i];
            for(j=0; j<T; j++)
            {
                if(cop[i] == arr[j])
                    num++;
            }
            if(num % 2 == 0)
                store += num/2;
            else if(num % 2 != 0)
            {
                num--;
                store += num/2;
            }
        }
    }
    cout << store;
    return 0;
}
