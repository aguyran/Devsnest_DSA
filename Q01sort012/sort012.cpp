#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  vector<int> v(t, 0);

  for (int i = 0; i < t; i++)
  {
    cin >> v[i];
  }

  sort(v.begin(), v.end());
  for (int i = 0; i < t; i++)
  {
    cout << v[i] << " ";
  }
}