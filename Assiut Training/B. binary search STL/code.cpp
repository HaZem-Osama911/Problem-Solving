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
	int n, q, x;
	string s;
	cin >> n >> q;
	vector<int> arr(n);

	Fp(n)cin >> arr[i];
	sort(arr.begin(), arr.end());


	while (q--)
	{
		
		cin >> s >> x;
		if (s == "lower_bound") {
			auto it = lower_bound(arr.begin(), arr.end(), x);
			(it != arr.end()) ? cout << *it << endl : cout << "-1" << E;
		}
		else if (s == "upper_bound") {
			auto it = upper_bound(arr.begin(), arr.end(), x);
			(it != arr.end()) ? cout << *it << endl : cout << "-1" << E;
		}
		else if (s == "binary_search") {
			(binary_search(arr.begin(), arr.end(), x)) ? cout << "found\n" : cout << "not found\n";
		}
	}
}
