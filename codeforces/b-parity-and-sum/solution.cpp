/*
 
██╗░░██╗░█████╗░███████╗███████╗███╗░░░███╗
██║░░██║██╔══██╗╚════██║██╔════╝████╗░████║
███████║███████║░░███╔═╝█████╗░░██╔████╔██║
██╔══██║██╔══██║██╔══╝░░██╔══╝░░██║╚██╔╝██║
██║░░██║██║░░██║███████╗███████╗██║░╚═╝░██║
╚═╝░░╚═╝╚═╝░░╚═╝╚══════╝╚══════╝╚═╝░░░░░╚═╝

*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>

using namespace std;




#define ll long long
#define E '\n'
#define C  cout
#define Ci  cin
#define br cout<<endl
#define PYES cout<<"YES"<<E;
#define PNO cout<<"NO"<<E;
#define PYes cout<<"Yes"
#define PNo cout<<"No"
#define Pyes cout<<"yes"
#define Pno cout<<"no"
#define f1 cout<<"----- 1 -----"<<endl;
#define f2 cout<<"----- 2 -----"<<endl
#define Fp(e) for(int i=0;i<e;i++)
#define Fps(s,e) for(int i=s;i<e;i++)
#define Fpj(e) for(int j=0;j<e;j++)
#define Fm(e) for(int i=0;i<f;i--)
#define Fac(e) Fp(e){ res+=res*i;}cout<<res;
#define Rev(s,len) Fm(len) {ans+=s[i];}cout<<ans;


void Fast();
void solve();


int main()
{
	Fast();
	int t; cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}

void Fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}


void solve()
{

	ll n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	ll lo = 0; // largest odd number in a
	ll le = 0; // largest even number in a

	// Find largest odd and even numbers
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1 && a[i] > lo)
			lo = a[i];
		if (a[i] % 2 == 0 && a[i] > le)
			le = a[i];
	}

	int c = 0;
	bool all_same_parity = true;
	for (int i = 1; i < n; i++) {
		if (a[i] % 2 != a[0] % 2) {
			all_same_parity = false;
			break;
		}
	}

	if (all_same_parity) {
		cout << 0 << "\n";
		return;
	}

	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0 && a[i] < lo) {
			c++;
			a[i] = a[i] + lo;
			lo = max(lo, a[i]);
		}
	}

	all_same_parity = true;
	for (int i = 1; i < n; i++) {
		if (a[i] % 2 != a[0] % 2) {
			all_same_parity = false;
			break;
		}
	}

	if (all_same_parity) {
		cout << c << "\n";
		return;
	}

	ll indx = 0; // index of largest odd
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1 && a[i] == lo) {
			indx = i;
			break;
		}
	}

	a[indx] = lo + le;
	c++;

	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			c++;
		}
	}

	cout << c << "\n";
}
