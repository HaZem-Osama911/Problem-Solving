
//--------------------------------------( Problem Link )-----------------------------------------------

// https://codeforces.com/contest/1791/problem/D


/*
*
*
#									{	 I have no choice		}
#									{	 I only have a dream	}
									{	   * Remimber Me *		}
									=============================

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

#define ll						     long long
#define E						     '\n'
#define sp						     " "
#define C						     cout
#define Ci						     cin
#define br						     cout<<endl
#define pb							 push_back
#define asort(a,n)				     sort(a,a+n)
#define PYES					     cout<<"YES"<<E;
#define PNO						     cout<<"NO"<<E;
#define PYes					     cout<<"Yes"
#define PNo					   	     cout<<"No"
#define Pyes					     cout<<"yes"
#define Pno						     cout<<"no"
#define							     f1 cout<<"----- 1 -----"<<endl;
#define							     f2 cout<<"----- 2 -----"<<endl
#define Fp(e)					     for(int i=0;i<e;i++)
#define Fps(s,e)				     for(int i=s;i<e;i++)
#define Fpj(e)					     for(int j=0;j<e;j++)
#define Fm(e)						 for(int i=0;i<f;i--)
#define Fac(e)						 Fp(e){ res+=res*i;}cout<<res;
#define Rev(s,len)					 Fm(len) {ans+=s[i];}cout<<ans;
#define HaZem 						 ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ari(n)						 int*arr=new int[n];
#define arl(n)						 long long*arr=new long long[n];
#define whi                          int t;cin>>t;while(t--)


//--------------------------------------( Const )-----------------------------------------------


//--------------------------------------( function )-----------------------------------------------

void solve();


int main()
{
	HaZem;

	solve();

	return 0;
}

void solve()
{
	int t, n; cin >> t;
	string s;
	while (t--)
	{
		vector <int> alp[26];
		cin >> n >> s;

		for (auto& i : alp) i.resize(n, 0);

		for (int i = 0; i < n; i++)
		{
			alp[s[i] - 'a'][i]++;
			if (!i)	continue;
			for (int j = 0; j < 26; j++)
			{
				alp[j][i] += alp[j][i - 1];
			}
		}
		int ans = 0;
		for (int i = 0; i + 1 < n; i++)
		{
			int cn1 = 0, cn2 = 0;
			for (int j = 0; j < 26; j++)
			{
				cn1 += (alp[j][i] != 0);
				cn2 += (alp[j].back() - alp[j][i] != 0);
			}
			ans = max(ans, cn1 + cn2);

		}
		C << ans << E;

	}
}
