#include<bits/stdc++.h>
using namespace std;
int main()
{
    int H,mini;
    cin >> H >> mini;
    vector<string> v = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine" };
    if(mini <= 30)
    {
        if(mini == 0)
            cout << v[H] << " o' clock";
        else if(mini == 1)
            cout << v[mini] << " minute past " << v[H];
        else if(mini == 15)
            cout << "quarter past " << v[H];
        else if(mini == 30)
            cout << "half past " << v[H];
        else
            cout << v[mini] << " minutes past " << v[H];
    }
    else
    {
        if(mini == 45)
            cout << "quarter to " << v[H+1];
        else
            cout << v[60-mini] << " minutes to " << v[H+1];
    }
    return 0;
}
