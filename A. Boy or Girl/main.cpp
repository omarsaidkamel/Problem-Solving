#include <iostream>
#include <algorithm>
using namespace std;
string s;
int c;
int main() {
    cin >> s;
    int n=s.length();
	sort(s.begin(), s.end());
	for (int i = 0; i < n; i++)
	{
		if (s[i]!=s[i+1]) c++;
	}
	if (c%2==1) printf("IGNORE HIM!");
	else printf("CHAT WITH HER!");
	return 0;
}
