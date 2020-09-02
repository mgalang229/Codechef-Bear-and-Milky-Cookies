#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s[n];
		for(int i=0; i<n; ++i)
			cin >> s[i];
		bool ok=1;
		for(int i=0; i<n; ++i)
			if(s[i]=="cookie"&&s[i+1]!="milk")
				ok=0;
		if(n==1&&s[0]=="cookie") {
			cout << "NO\n";
			continue;
		}
		cout << (ok ? "YES" : "NO") << "\n";
	}
}

