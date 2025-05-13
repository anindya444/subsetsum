# subsetsum
subset sum
#include <iostream>
#include <vector>
using namespace std;
int subsetsum(vector<int>&v,int n,int sum){
if(sum==0)
return true;

if(n==1)
return false;
if(v[n-1]>sum)
return subsetsum(v,n-1,sum);
return (subsetsum(v,n-1,sum) || subsetsum(v,n-1,sum-v[n-1]));

}
bool issubset(vector<int>&v,int sum){
  return subsetsum(v,v.size(),sum);
}
int main()
{
  vector<int> v = {2,1,3,7,8,4};
  int sum=27;
  int n=v.size();
  if( issubset(v,sum))
    cout<<"true";
    else
    cout<<"false";

}
