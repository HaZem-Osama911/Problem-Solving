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
#define arr(n)						 int* arr=new int[n];	

//--------------------------------------( Const )-----------------------------------------------



//--------------------------------------( function )-----------------------------------------------

struct Friend
{
	string name;
	int a, m, s, e, t;
	Friend(string n, int a, int m, int s, int e)
	{
		name = n;
		this->a = a;
		this->m = m;
		this->s = s;
		this->e = e;
		t = a + m + s + e;
	}
};

void solve();
bool compare(const Friend& fr1, const Friend& fr2);
// int binarySearch(ll arr[], int low, int high, int val);
int main()
{
	HaZem;


	solve();

	return 0;
}

void solve()
{
	int n; cin >> n;
	vector<Friend>friends;
	string name;
	int a, m, s, e;
	Fp(n)
	{
		cin >> name >> a >> m >> s >> e;
		friends.emplace_back(name, a, m, s, e);
	}
	sort(friends.begin(), friends.end(), compare);
	for (const auto& f : friends) {
		cout << f.name << " " << f.t << " " << f.a << " "
			<< f.m << " " << f.s << " " << f.e << "\n";
	}
}

bool compare(const Friend& fr1, const Friend& fr2)
{
	if (abs(fr1.t - fr2.t) )
		return fr1.t > fr2.t;
	return fr1.name < fr2.name;
}
