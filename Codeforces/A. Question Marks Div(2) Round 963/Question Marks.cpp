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
	solve();

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

	int t; cin >> t;
	string s; int n, counta = 0, countb = 0, countc = 0, countd = 0, countq = 0;
	while (t--)
	{
		counta = 0, countb = 0, countc = 0, countd = 0, countq = 0;
		cin >> n;
		cin >> s;

		for (char c : s)
		{
			if (c == 'A')counta++;
			else if (c == 'B')countb++;
			else if (c == 'C')countc++;
			else if (c == 'D')countd++;
			else if (c == '?')countq++;
		}
		
		int maxa = min(counta, n);
		int maxb = min(countb, n);
		int maxc = min(countc, n);
		int maxd = min(countd, n);

		int maxscore = maxa + maxb + maxc + maxd;
		cout << maxscore << E;
	}
}
