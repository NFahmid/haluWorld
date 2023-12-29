#include <bits/stdc++.h>

#define pb push_back
#define INF 0x3f3f3f3f
#define FASt ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N=2e5+9;
using namespace std;

int a[N];

int main(){
    FASt;

    int n;
    cin>>n;
    for (int i=1; i<n; i++) cin>>a[i];

    sort (a+1, a+1+n);

    long long x = 0;
    long long y = 0;

    for (int i=1; i<n; i++){
        if(i<=n/2)
            x+=a[i];
        else
            y+=a[i];
    }

    long long ans = x*x+y*y;

    cout<<ans<<endl;

    return 0;

}
