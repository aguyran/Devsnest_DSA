
#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);


#define testcases int asdf; cin>>asdf; while(asdf--)

#define space cout<<endl

#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vll vector<long long int>
#define vp vector<pair<int,int>> 
#define sc set<char>
#define si set<int>
#define pqq priority_queue
#define up unordered_map


void  single(){
  int n ;
  cin>>n;

    vector<int>arr(n,0) ;
    for(int i = 0; i < n; i++){ cin>>arr[i] ; }
    int start =0,end=n-1;
    int index =0;
    while(index<=end){
      if(arr[index]==0){
        swap(arr[start++],arr[index++]);
      }else if(arr[index]==2){
        swap(arr[end--],arr[index]);
      }else{
        index++;
      }
    }
    for(auto x:arr) cout<<x<<" ";
    cout<<endl;


  // cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
}


void multiple(){
  mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
  testcases{single();}
  }
int main()
{
IOS;
#ifndef ONLINE_JUDGE
freopen("sort012_hidden_sample.txt","r",stdin);
freopen("sort012_hidden_sample_out.txt","w",stdout);
#endif
// multiple();
single();

}