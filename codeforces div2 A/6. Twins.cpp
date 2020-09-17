#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << " = " << x << endl
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define PI 3.1415926535897932384626
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
typedef vector<int>		vi;
typedef vector<ll>		vl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int mpow(int base, int exp);

//======================================================================

void solve() {
int n;
cin>>n;
int total=0;
int curr_at=0;
int current=0;
int coin_in_bag = 0;
vector<int> coins(n);
for(int i=0;i<n;i++){
	 cin>>coins[i];
	 total += coins[i];
 }
int required = ceil(total/2);
sort(coins.begin(),coins.end(),greater<int>());
while(current<=required){
	current += coins[curr_at];
	curr_at++;
	coin_in_bag++;
	}
cout<<coin_in_bag;
}

int main(){
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}

//======================================================================

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}
