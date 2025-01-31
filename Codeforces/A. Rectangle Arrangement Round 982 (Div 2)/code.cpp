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
#include <vector>
#include <algorithm>



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
#define pb push_back
#define vi vector<int>
#define ln cout<<endl;
#define all(x) begin(x), end(x)
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "}"; }
template <typename T>
	void readv(vector<T>& v, int n) {
		while (n--) { T p; cin >> p; v.pb(p); }
	}
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
	int t; cin >> t;
	int x, n;
	while (t--)
	{
	    cin >> n;
		int an = 0, bn = 0;
		while (n--)
		{
			int c,d; 
			cin >> c >> d;
			an = max(c, an); 
			bn = max(d, bn);
		}
		C << 2 * an + (2 * bn) << E;
	}
}
