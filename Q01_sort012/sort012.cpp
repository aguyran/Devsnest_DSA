#include <bits/stdc++.h>
using namespace std;
int main()
{
  ifstream infile;
  ofstream outfile;
  string s = "/media/adhikram/Arka/Devsnest_DSA/Q01_sort012/Q01_sort012_";
  for (int i = 1; i < 11; i++)
  {
    string p = s + to_string(i);
    infile.open(p+"_hidden_in.txt");
    outfile.open(p+"_hidden_out.txt",ios::out | ios::trunc);
    int t;
    infile >> t;
    vector<int> v(t, 0);

    for (int i = 0; i < t; i++)
    {
      infile >> v[i];
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < t; i++)
    {
      outfile << v[i] << " ";
    }
    infile.close();
    outfile.close();
  }
}