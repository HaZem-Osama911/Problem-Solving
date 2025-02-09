#include <iostream>
#include <map>
#include <vector>
#include <string>
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
#define br						     cout<<string(50,'-')<<endl;		
#define							     f1 cout<<"----- 1 -----"<<endl;
#define							     f2 cout<<"----- 2 -----"<<endl
#define Fp(e)					     for(int i=0;i<e;i++)
#define Fps(s,e)				     for(int i=s;i<e;i++)
#define Fpj(e)					     for(int j=0;j<e;j++)
#define Fm(e)						 for(int i=0;i<f;i--)
#define Fac(e)						 Fp(e){ res+=res*i;}cout<<res;
#define Rev(s,len)					 Fm(len) {ans+=s[i];}cout<<ans;
#define HaZem 						 ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
// #define arr(n)						 int* arr=new int[n];	

//--------------------------------------( Const )-----------------------------------------------
int arrN[2000005], arrP[2000005];


//--------------------------------------( function )-----------------------------------------------



void solve();



// int binarySearch(ll arr[], int low, int high, int val);
int main()
{
	HaZem;


	solve();

	return 0;
}

void solve()
{
	int n, q, l, r;
	string s;
	vector<pair<int, int>>vec;

	cin >> n >> q;
	for (int i = 0; i < n; i++)
	{
		cin >> l >> r;
		vec.emplace_back(l, r);
	}
	sort(vec.begin(), vec.end());
	while (q--)
	{
		cin >> s >> l >> r;
		pair<int, int>p = { l,r };
		if (s == "lower")
		{
			auto it = lower_bound(vec.begin(), vec.end(), p);
			if (it == vec.begin())
			{
				C << "-1" << E;
			}
			else
			{
				it--;
				C << (it - vec.begin()) << E;
			}
		}
		else if (s == "upper")
		{
			auto it = upper_bound(vec.begin(), vec.end(), p);
			if (it == vec.end())
			{
				C << "-1" << E;
			}
			else
			{
				C << (it - vec.begin()) << E;
			}
		}
		else if (s == "find")
		{
			auto it = lower_bound(vec.begin(), vec.end(), p);
			if (it != vec.end() && *it == p)
			{
				C << "found" << E;
			}
			else
			{
				C << "not found" << E;
			}
		}
	}
}

