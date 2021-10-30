#include <bits/stdc++.h>
using namespace std;

ifstream infile;
ofstream outfile;

int findCrossOver(vector<int>  arr, int low, int high, int x)
{

if (arr[high] <= x) 
    return high;
if (arr[low] > x)
    return low;
 

int mid = (low + high)/2;
 

if (arr[mid] <= x && arr[mid+1] > x)
    return mid;
 
if(arr[mid] < x)
    return findCrossOver(arr, mid+1, high, x);
 
return findCrossOver(arr, low, mid - 1, x);
}
 
void printKclosest(vector<int> arr, int x, int k, int n)
{
    
    int l = findCrossOver(arr, 0, n-1, x);
    int r = l+1; 
    int count = 0;
 
    if (arr[l] == x) l--;
 
    while (l >= 0 && r < n && count < k)
    {
        if (x - arr[l] < arr[r] - x)
            outfile << arr[l--] << " ";
            
        else
            outfile << arr[r++] << " ";
            
        count++;
    }
 
    while (count < k && l >= 0)
        outfile << arr[l--] << " ", count++;
 
    while (count < k && r < n)
        outfile << arr[r++] << " ", count++;
}
 
int main()
{
  
  string s = "/home/wolfcreek/Devsnest_DSA/Q54_Find_k_closest_elements_to_a_given_value/Q54_Find_k_closest_elements_to_a_given_value_";
  for (int i = 1; i < 11; i++)
  {
    string p = s + to_string(i);
    infile.open(p+"_hidden_in.txt");
    outfile.open(p+"_hidden_out.txt",ios::out | ios::trunc);
    
    int t,k,x;
    infile >> t >> k>> x;
    vector<int> v(t, 0);

    for (int i = 0; i < t; i++)
    {
      infile >> v[i];
    }

    printKclosest(v, x, k, t);
    
    for (auto x:v)
    {
      outfile << x << " ";
    }
    infile.close();
    outfile.close();
  }
}