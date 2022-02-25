#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,one=0,most=0,two=0,three=0,four=0,five=0,a,b,c,d,e,small=0;
    cin >> T;
    int arr[T],ke[T]= {};

    for(i=0; i<T; i++)
    {
        cin >> arr[i];
        if(arr[i] == 1)
        {
            a=arr[i];
            one++;
            if(one > most)
                most = one;
        }
        else if(arr[i] == 2)
        {
            b=arr[i];
            two++;
            if(two > most)
                most = two;
        }
        else if(arr[i] == 3)
        {
            c=arr[i];
            three++;
            if(three > most)
                most = three;
        }
        else if(arr[i] == 4)
        {
            d=arr[i];
            four++;
            if(four > most)
                most = four;
        }
        else if(arr[i] == 5)
        {
            e=arr[i];
            five++;
            if(five > most)
                most = five;
        }
    }
    if (one == most)
    {
        cout << "1\n";
    }
    else if (two == most)
    {
        cout << "2\n";
    }
    else if (three == most)
    {
        cout << "3\n";
    }
    else if (four == most)
    {
        cout << "4\n";
    }
    else
    {
        cout << "5\n";
    }

    return 0;
}
