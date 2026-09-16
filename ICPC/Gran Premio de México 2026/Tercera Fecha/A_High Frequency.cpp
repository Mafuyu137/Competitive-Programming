#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nl "\n"
#define all(x) begin(x), end(x)

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n; cin >> n;

    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }

    partial_sum(all(a), begin(a));
    partial_sum(all(b), begin(b));

    cin >> n;
    while(n--){
        int q; cin >> q;

        ll res = a[--q] - b[q];

        if (res > 0) cout << "COMPRA" << nl;
        else if (res < 0) cout << "VENDA" << nl;
        else cout << "NEUTRO" << nl;
    }
    return 0;
}
// By - Mafuyu <3