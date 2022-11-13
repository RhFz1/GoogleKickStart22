#include <bits/stdc++.h>
using namespace std;

int main(){

	int t = 1;
	cin >> t;
	for (int tc = 1; tc <= t ; tc++)
	{
		int n;
		cin >> n;
		vector <int > v(n);
		for(auto &i : v)
			cin >> i;
		vector <int > sorted = v;
		sort(sorted.begin() , sorted.end());
		vector <int > mentor;
		for (auto &i : v){
			auto it = upper_bound(sorted.begin() , sorted.end() , 2 * i);
			it--;
			if (*it != i){
				mentor.push_back(*it);
			}else if (it == sorted.begin()){
				mentor.push_back(-1);
			}else{
				it--;
				mentor.push_back(*it);
			}
		}
		cout << "Case #" << tc << ": ";
		for (int i = 0; i < n; ++i)
		{
			cout << mentor[i] << ' ';
		}
		cout << endl;
	}

	

}
