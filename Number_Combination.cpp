#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<char>v;
    vector<string>results;
    results.push_back("000");
    for(ll i=1; i<=9; i++)
    {
        v.push_back(i+48);
    }

    for(ll j=1; j<=9; j++)   /// How much numbers was Taken?
    {
        while(next_permutation(v.begin(), v.end()) )
        {
            string s;
            for(ll l=0; l<j; l++)
            {
                s+=v[l];
            }
                s+='|';
                s+='|';
            if(s!=results[results.size()-1])
            {
              results.push_back(s);
            }
        }
    }
    for(ll i=0; i<results.size(); i++)
    {
        cout<<results[i];
    }
}


