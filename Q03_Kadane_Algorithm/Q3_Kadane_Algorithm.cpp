#include <bits/stdc++.h>
using namespace std;
int main()
{
  ifstream infile;
  ofstream outfile;
  string s = "/media/adhikram/Arka/Devsnest_DSA/Q03_Kadane_Algorithm/Q03_Kadane_Algorithm_";
  for (int i = 1; i < 11; i++)
  {
    string p = s + to_string(i);
    infile.open(p + "_hidden_in.txt");
    outfile.open(p + "_hidden_out.txt", ios::out | ios::trunc);
    int t;
    infile >> t;

    vector<int> v(t, 0);

    for (int i = 0; i < t; i++)
    {
      infile >> v[i];
    }
    int sum_ending = 0;
    int sum_so_far = -10000000;
    for (int i = 0; i < t; i++)
    {
      sum_ending += v[i];
      if (sum_ending > sum_so_far)
      {
        sum_so_far = sum_ending;
      }
      if (sum_ending < 0)
      {
        sum_ending = 0;
      }
    }
    outfile<<sum_so_far;
    infile.close();
    outfile.close();
  }
}