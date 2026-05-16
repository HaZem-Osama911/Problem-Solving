#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <map>





using namespace std;


#define ll						     long long
#define E						     '\n'
#define sp						     " "
#define C						     cout
#define br						     cout<<endl
#define pb							 push_back
#define pf							 push_front
#define pob	    					 pop_back
#define asort(a,n)				     sort(a,a+n)
#define PYES					     cout<<"YES"<<endl
#define PNO						     cout<<"NO"<<endl
#define PYes					     cout<<"Yes"
#define PNo					   	     cout<<"No"
#define Pyes					     cout<<"yes"
#define Pno						     cout<<"no"
#define brs						     cout<<string(50,'-')<<endl;		
#define							     f1f cout<<"----- 1 -----"<<endl;
#define							     f2f cout<<"----- 2 -----"<<endl
#define Fp(e)					     for(int i=0;i<e;i++)
#define Fps(s,e)				     for(int i=s;i<e;i++)
#define Fpj(e)					     for(int j=0;j<e;j++)
#define Fm(e)						 for(int i=0;i<f;i--)
#define Fac(e)						 Fp(e){ res+=res*i;}cout<<res;
#define Rev(s,len)					 Fm(len) {ans+=s[i];}cout<<ans;
#define HaZem 						 ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
// #define arr(n)						 int* arr=new int[n];	

//----------------------------------------( Const )------------------------------------------------



//--------------------------------------( Example Fun )-----------------------------------------------

// int binarySearch(ll arr[], int low, int high, int val);
// 
// int mx = *max_element(arr, arr + 7);
// 
// how to get upper bound index of a and target value (if i need to find number of elements <= target)
//				int ind = upper_bound(a.begin(), a.end(), target) - a.begin();

// int mi = INT_MAX;
//
// remove val from all vector
// nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
// sort(vec.begin(), vec.end(), greater<int>());

//--------------------------------------( function )-----------------------------------------------


void solve();
pair<int,string> Comp_Max(string s);
int Comp_Min(string s);


int main()
{
	HaZem; 
	
	int t; cin >> t;
	while (t--)
		solve();

	return 0;
}

void solve()
{
	int n; cin >> n;
	string s; cin >> s;

	int first = -1, last = -1;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '1')
		{
			if (first == -1)
				first = i;
			last = i;
		}
	}


	if (first == -1)
	{
		C << "0 0" << E;
		return;
	}

	int seg_Length = last - first + 1;
	pair<int, string> res = Comp_Max(s);
	int min_ones = Comp_Min(res.second);
	C << min_ones << sp << res.first << E;

}

pair<int,string> Comp_Max(string s)
{
	bool changed = true;

	while (changed)
	{
		changed = false;
		for (int i = 1; i < s.size() - 1; i++)
		{
			if (s[i] == '0' && s[i - 1] == '1' && s[i + 1] == '1')
			{
				s[i] = '1';
				changed = true;
			}
		}

	}

	int count = 0;
	for (char c : s)
		if (c == '1')
			count++;

	return {count, s};
}

int Comp_Min(string s)
{
	bool changed = true;

	while (changed)
	{
		changed = false;
		for (int i = 1; i < s.size() - 1; i++)
		{
			if(s[i]=='1'&&s[i-1]=='1'&&s[i+1]=='1')
			{
				s[i]='0';
				changed=true;
			}
		}
	}

	int count = 0;
	for (char c : s)
		if (c == '1')
			count++;
	return count;
}
