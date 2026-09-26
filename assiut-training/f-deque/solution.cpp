#include <iostream>
#include <string>
#include <deque>
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
	deque<int>dque;
	while (t--)
	{
		cin >> s;
		if (s == "push_back") {
			cin >> n;
			dque.push_back(n);
		}
		else if (s == "push_front") {
			cin >> n;
			dque.push_front(n);
		}
		else if (s == "pop_back") {
			dque.pop_back();
		}
		else if (s == "pop_front") {
			dque.pop_front();
		}
		else if (s == "front") {
			C << dque.front() << E;
		}
		else if (s == "back") {
			C << dque.back() << E;
		}
		else{
			cin >> n;
			C << dque[n-1] << E;
		}
		
	}
}
