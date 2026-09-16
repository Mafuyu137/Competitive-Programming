#include <iostream>
using namespace std;
typedef long long int ll;
#define nl "\n"

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n; cin >> n;

    while(n--){
        ll x, y; cin >> x >> y;

        if (y > 0) x -= (2 * y);
        if (y < 0) x -= (4 * abs(y));

        if (x >= 0 && !(x % 3)) cout << "SI" << nl;
        else cout << "NO" << nl;
    }
    return 0;
}
// By - Mafuyu <3
