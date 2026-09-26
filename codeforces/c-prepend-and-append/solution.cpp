//--------------------------------------( Problem Link )-----------------------------------------------

// https://codeforces.com/contest/1791/problem/C

/*
# I Do My Best To Bacome Better Than Yesterday
# I Will Never Stop



░█████╗░██╗░░░██╗███████╗██████╗░        ██████╗░░█████╗░░██╗░░░░░░░██╗███████╗██████╗░
██╔══██╗██║░░░██║██╔════╝██╔══██╗        ██╔══██╗██╔══██╗░██║░░██╗░░██║██╔════╝██╔══██╗
██║░░██║╚██╗░██╔╝█████╗░░██████╔╝        ██████╔╝██║░░██║░╚██╗████╗██╔╝█████╗░░██████╔╝
██║░░██║░╚████╔╝░██╔══╝░░██╔══██╗        ██╔═══╝░██║░░██║░░████╔═████║░██╔══╝░░██╔══██╗
╚█████╔╝░░╚██╔╝░░███████╗██║░░██║        ██║░░░░░╚█████╔╝░░╚██╔╝░╚██╔╝░███████╗██║░░██║
░╚════╝░░░░╚═╝░░░╚══════╝╚═╝░░╚═╝        ╚═╝░░░░░░╚════╝░░░░╚═╝░░░╚═╝░░╚══════╝╚═╝░░╚═╝


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
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}

void Fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
}

void solve()
{
	int l, r,len;

	cin >> len;
	string s;
	cin >> s;
	l = 0; r = len - 1;

	while (l < r && s[l] ^ s[r])
	{
		r--; l++;
	}
	cout << r - l + 1 << E;
}
