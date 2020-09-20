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
//string num = to_string(n);
//int flag=0;
//for(int i=0;i<(int)num.size();i++){
	//deb(num[i]);
	//if(num[i]!='4' && num[i]!= '7')
	//flag=1;
	//}
//if(flag ==0){
//cout<<"YES\n";
//return;	
//}
//else if(n%7==0 || n%4 ==0){
	//cout<<"YES\n";
	//}
//else
//cout<<"NO\n";

cout<<n<<" last digits";
for(int i=1;i<=9;i++){
	int prod = n*i;
	cout<<prod%10<<" ";
	}
	cout<<"\n";
}

int main(){
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t = 1;
    cin >> t;
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
