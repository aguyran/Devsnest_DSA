#include <bits/stdc++.h>
using namespace std;
ifstream infile;
ofstream outfile;

int findCrossOver(int arr[], int low, int high, int x)
{
// Base cases
if (arr[high] <= x) // x is greater than all
    return high;
if (arr[low] > x) // x is smaller than all
    return low;
 
// Find the middle point
int mid = (low + high)/2; /* low + (high - low)/2 */
 
/* If x is same as middle element, then return mid */
if (arr[mid] <= x && arr[mid+1] > x)
    return mid;
 
/* If x is greater than arr[mid], then either arr[mid + 1]
    is ceiling of x or ceiling lies in arr[mid+1...high] */
if(arr[mid] < x)
    return findCrossOver(arr, mid+1, high, x);
 
return findCrossOver(arr, low, mid - 1, x);
}
 
// This function prints k closest elements to x in arr[].
// n is the number of elements in arr[]
void printKclosest(int arr[], int x, int k, int n)
{
    // Find the crossover point
    int l = findCrossOver(arr, 0, n-1, x);
    int r = l+1; // Right index to search
    int count = 0; // To keep track of count of elements already printed
 
    // If x is present in arr[], then reduce left index
    // Assumption: all elements in arr[] are distinct
    if (arr[l] == x) l--;
 
    // Compare elements on left and right of crossover
    // point to find the k closest elements
    while (l >= 0 && r < n && count < k)
    {
        if (x - arr[l] < arr[r] - x)
            outfile << arr[l--]<<" ";
            
        else
            outfile << arr[r++]<<" ";
            
        count++;
    }
 
    // If there are no more elements on right side, then
    // print left elements
    while (count < k && l >= 0)
        outfile << arr[l--]<<" ", count++;
 
    // If there are no more elements on left side, then
    // print right elements
    while (count < k && r < n)
        outfile << arr[r++]<<" ", count++;
}
int main()
{
  ifstream infile;
  ofstream outfile;
  string s = "/home/wolfcreek/Devsnest_DSA/Q05_Next_Permutation/Q05Next_Permutation_";
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