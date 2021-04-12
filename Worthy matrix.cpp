#include<iostream>
using namespace std;
typedef long long int ll;
ll min (ll a,ll b)
{
    if (a<b)
    {
        return a;
    }
    return b;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t;
    cin>>t;
    while(t--!=0)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        double mat[n+1][m+1];
        for(ll i=0;i<=n;i++)
        {
            for(ll j=0;j<=m;j++)
            {
                if(i==0 || j==0)
                {
                    mat[i][j]=0;
                }
                else
                {
                    cin>>mat[i][j];
                }
            }
        }
        for(ll i=0;i<=n;i++)
        {
            double pre=0;
            for(ll j=0;j<=m;j++)
            {
                mat[i][j]+=pre;
                pre=mat[i][j];
            }
        }
        for(ll j=0;j<=m;j++)
        {
            double pre=0;
            for(ll i=0; i<=n;i++)
            {
                mat[i][j] +=pre;
                pre=mat[i][j];
            }
        }
        ll zz=min(n,m);
        ll ans=0;
        for(ll len=1;len<=zz;len++)
        {
            for(ll i=len;i<=n;i++)
            {
                for(ll j=len;j<=m;j++)
                {
                    if((mat[i][j]+mat[i-len][j-len]-mat[i][j-len]-mat[i-len][j])/(len*len)>=k)
                    {
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
