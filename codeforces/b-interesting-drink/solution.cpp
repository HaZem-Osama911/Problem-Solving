//           problem link 
// https://codeforces.com/contest/706/problem/B


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



//--------------------------------------( Const )-----------------------------------------------


//--------------------------------------( function )-----------------------------------------------


void solve2();
void solve();
int main()
{
	HaZem;

	solve();

	return 0;
}

void solve2()
{
	ll n, x, q;
	cin >> n;
	ll* arr = new ll[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> x;
		int coun = 0;

		for (int j = 0; j < n; j++)
		{
			
			if(x>=arr[j])
			{
				coun++;
			}
		}
		C << coun << E;;
		/*auto itr = lower_bound(arr.begin(), arr.end(), x);
		auto index = distance(arr.begin(), itr);

		if (itr != arr.end()) {
			C << index+1 << E;
		}*/
		

	}
	

}

void solve()
{
	int n, ans, q,k;
	cin >> n;
	
	int* a = new int[n];
	
	Fp(n)	cin >> a[i];
	sort(a, a + n);
	cin >> q; 
	while (q--)
	{
		cin >> k;
		ans = upper_bound(a, a + n, k) - a;
		C << ans << E;
	}




}
