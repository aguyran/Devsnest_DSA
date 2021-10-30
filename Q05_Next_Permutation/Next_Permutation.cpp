#include <bits/stdc++.h>
using namespace std;
int main()
{
  ifstream infile;
  ofstream outfile;
  string s = "/home/wolfcreek/Devsnest_DSA/Q05_Next_Permutation/Q05Next_Permutation_";
  for (int i = 1; i < 11; i++)
  {
    string p = s + to_string(i);
    infile.open(p + "_hidden_in.txt");
    outfile.open(p + "_hidden_out.txt", ios::out | ios::trunc);
    // Array input from files
    int t;
    infile >> t;
    vector<int> v(t, 0);
    
    for (int i = 0; i < t; i++)
    {
      infile >> v[i];
    }

    // Write your code 
    next_permutation(v.begin(), v.end());

    // Output to the files
    for (int i = 0; i < t; i++)
    {
      outfile << v[i] << " ";
    }
    infile.close();
    outfile.close();
  }
}