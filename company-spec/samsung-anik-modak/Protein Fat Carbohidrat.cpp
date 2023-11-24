#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
#define MX 1000
#define pii pair<int, int>
using namespace std;

vector<pii> v;
vector<int> min_ingredients;
int  p[MX], f[MX], c[MX];

void solve(int total, int pt, int ft, int ct)
{
    int mn = 999999;
    for(int i=0; i<v.size(); i++)
    {
        //cout<<v[i].first<<" "<<v[i].second<<endl;
        int sum = 0;
        vector<int> ans;

        for(int k=i; k<v.size(); k++)
        {
            sum += v[k].first;

            if(sum > total)
                sum -= v[k].first;
            else if(sum < total)
                ans.push_back(v[k].second);
            else
            {
                ans.push_back(v[k].second);
                int ck = 0, ppt = 0, fft = 0, cct = 0;

                for(int j=0; j<ans.size(); j++)
                {
                    //cout<<ans[j]<<endl;
                    ppt += p[ans[j]-1];
                    fft += f[ans[j]-1];
                    cct += c[ans[j]-1];
                }

                if(ppt==pt && fft==ft && cct==ct)
                    ck = 1;

                if(ck && mn > ans.size())
                {
                    mn = ans.size();
                    min_ingredients = ans;
                    //cout<<mn<<endl;
                }
            }
        }
    }
    return;
}

bool cmp(pii a, pii b)
{
    if(a.first==b.first)
        return a.second < b.second;
    return a.first > b.first;
}

int main()
{
    freopen("input.txt","r",stdin);
    int t;
    cin>>t;

    while(t--)
    {
        int ingredients;
        cin>>ingredients ;

        for(int i=0; i<ingredients; i++)
        {
            cin>>p[i]>>f[i]>>c[i];

            int sum = p[i]+f[i]+c[i];
            v.push_back({sum, i+1});
        }

        sort(v.begin(), v.end(), cmp);

        for(int i=0; i<3; i++)
        {
            int pt, ft, ct;
            cin>>pt>>ft>>ct;

            int total = pt+ft+ct;
            solve(total, pt, ft, ct);

            if(min_ingredients.size())
            {
                sort(min_ingredients.begin(), min_ingredients.end());
                for(int i=0; i<min_ingredients.size(); i++)
                {
                    cout<<min_ingredients[i]<<" ";
                }
                cout<<"\n";
                min_ingredients.clear();
            }
            else
                cout<<"-1\n";
        }
    }
    return 0;
}
