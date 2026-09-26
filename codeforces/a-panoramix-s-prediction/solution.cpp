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
map<int, bool>primeMap;

//--------------------------------------( function )-----------------------------------------------



int solve();
bool isPrime(int n);
int secPrime(int n);
// int binarySearch(ll arr[], int low, int high, int val);
int main()
{
	HaZem;


	solve();

	return 0;
}

int solve()
{
	int n, m;
	cin >> n >> m;

	int next = secPrime(n);

	(m == next) ? C << "YES\n" : C << "NO\n";

	return 0;
}


bool isPrime(int n)
{
	if (n <= 1) return false;
	if (n == 2 || n == 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;

	for (int i = 5; i * i <= n; i += 2) {
		if (n % i == 0) return false;
	}
	return true;
}

int secPrime(int n)
{
	int num = n + 1;
	while (!isPrime(num)) {
		num++;
	}
	return num;
}
