#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nl "\n"

const ll mod = 998244353;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;

        vector<int> pi(n); //funcion pi
        for (int i = 1; i < n; i++){
            int j = pi[i - 1];

            while(j && s[j] != s[i]) j = pi[j - 1];
            if (s[j] == s[i]) j++;

            pi[i] = j;
        }

        vector<int> valido;
        for (int i = 0; i < n; i++) if (!pi[i]) valido.push_back(i + 1);

        vector<ll> dp(k + 1); dp[0] = 1;
        for (int i = 1; i <= k; i++){
            for (auto j: valido){
                if (i - j >= 0) dp[i] = (dp[i] + dp[i - j]) % mod; 
            }
        }

        cout << dp[k] << nl;
    }
    return 0;
}
// By - Mafuyu <3