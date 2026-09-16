#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nl "\n"

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n; cin >> n;

    ll mx = -1, mn = 1e18;
    while(n--){
        ll x; cin >> x;

        mx = max(mx, x);
        mn = min(mn, x);
    }

    cout << mx - mn << nl;
    return 0;
}
// By - Mafuyu <3