#include <iostream>
using namespace std;
typedef long long int ll;
#define nl "\n"

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;

    ll sum1 = 0;
    while(n--){
        ll a;
        cin >> a;
        sum1 += a;
    }

    ll sum2 = 0;
    while(m--){
        ll a;
        cin >> a;
        sum2 += a;
    }

    sum1 = sum1 * 1.1;

    cout << (sum2 >= sum1 ? "YES" : "NO") << nl;
    return 0;
}
// By - Mafuyu <3
