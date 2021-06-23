#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fori(i,a,b) for(ll i=a;i<=(ll)b;i++)
using namespace std;
int main()
{
   init;   
    string s;
    int i=0;
	vector<char> a;
	cin >> s;
	int j = 0;
	for (i = 0;i < s.length();i+=2)
	{
			a.push_back(s[i]);
			j++;
	}
	sort(a.begin(), a.end());
	for (i = 0;i < a.size()-1;i++)
	{
	cout << a[i] << "+";
	}
    cout << a[i];

    return 0;
}