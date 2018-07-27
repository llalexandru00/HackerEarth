#include <iostream>

using namespace std;

long long t, st, dr, a, b, n;

long long check(long long x)
{
    return a*x*x + b*(n-x)*(n-x);
}

int main()
{
    cin>>t;
    while (t--)
    {
        cin>>n>>a>>b;
        st = 0; dr = n;
        while (st<=dr)
        {
            long long mijl1 = st+(dr-st)/3;
            long long mijl2 = dr-(dr-st)/3;
            if (check(mijl1) < check(mijl2))
                dr=mijl2-1;
            else
                st=mijl1+1;
        }
        if (check(st)<check(dr))
            cout<<check(st);
        else
            cout<<check(dr);
        cout<<'\n';
    }
    return 0;
}
