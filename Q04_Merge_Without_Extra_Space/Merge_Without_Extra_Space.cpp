#include <bits/stdc++.h>
using namespace std;
int main()
{
  ifstream infile;
  ofstream outfile;
  string s = "/media/adhikram/Arka/Devsnest_DSA/Q04_Merge_Without_Extra_Space/Q04_Merge_Without_Extra_Space_";
  for (int i = 1; i < 11; i++)
  {
    string p = s + to_string(i);
    infile.open(p+"_hidden_in.txt");
    outfile.open(p+"_hidden_out.txt",ios::out | ios::trunc);
    int t;
    int n;
    infile >> t>>n;
    
    vector<int> v(t+n, 0);

    for (int i = 0; i < t; i++)
    {
      infile >> v[i];
    }
    for (int i = t; i < t+n; i++)
    {
      infile >> v[i];
    }

    sort(v.begin(), v.end());
    outfile<< t<<" "<<n<<endl;
    for (int i = 0; i < t; i++)
    {
      outfile << v[i] << " ";
    }
    outfile <<endl;
    for (int i = t; i < t+n; i++)
    {
      outfile << v[i] << " ";
    }
    infile.close();
    outfile.close();
  }
}