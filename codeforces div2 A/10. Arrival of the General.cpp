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
vector<int> army(n);
int min_val = INT_MAX,min_pos=0;
int max_val = INT_MIN,max_pos=n-1;
for(int i=0;i<n;i++){
	cin>>army[i];
	if(army[i]>= max_val){
		max_val = army[i];
		max_pos = i;
		}
	if(army[i] <= min_val){
		min_val = army[i];
		min_pos = i;		
		}
	}
for(int i=0;i<n;i++){
	if(army[i] == max_val && i<max_pos){
		max_pos = i;
		}
	if(army[i] == min_val && i>min_pos){
		min_pos = i;		
		}
	}	
	
	
int steps=0;	
if(max_pos<min_pos)	{
	steps += max_pos + (n-1-min_pos);
	}
else
steps += max_pos + (n-1-min_pos) - 1;
cout<<steps<<"\n";
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
