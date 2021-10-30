#include <bits/stdc++.h>
using namespace std;
int main()
{
  ifstream infile;
  ofstream outfile;
  string s = "/home/wolfcreek/Devsnest_DSA/Q53_Minimum_sequence_sum/Q53_Minimum_sequence_sum_";
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
 
    // let two numbers be a and b
    long long int a = 0, b = 0;
    for (int i = 0; i < t; i++)
    {
        // fill a atd b with every alternate digit
        // of input array
        if (i & 1)
            a = a*10 + v[i];
        else
            b = b*10 + v[i];
    }
 
    // return the sum
    outfile << a+b << " ";
  
    infile.close();
    outfile.close();
  }
}