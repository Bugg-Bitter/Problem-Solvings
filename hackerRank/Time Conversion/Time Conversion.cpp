#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    stringstream in(str);
    int num,i;
    in >> num;

    if((str[8] == 'A'))
    {
        if((num == 12))
        cout << "00";
        else if(num <10)
        cout << "0"<<num;
        else if(num>=10)
        cout << num;
    }
    else if((num == 12))
        cout<<num;
    else if((str[8] == 'P') && (num < 12))
    {
        num+=12;
        cout << num;
    }
    for(i=2;i<8;i++)
        cout << str[i];

    return 0;
}
