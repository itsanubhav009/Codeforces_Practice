#include<iostream>
#include<vector>
using namespace std;
void swap(int i  , vector<int>&p)
{
   int a;
   a = p[i];
   p[i] = p[i+1];
   p[i+1] = a; 
}


bool calc(int n , vector<int> p)
{
  if(n==0 || n==1)
  {
    return true;
  }

  for(int i = 0 ;i <n;i++)
  {
    if(i>0&&i<n-1 && p[i-1]<p[i] && p[i]>p[i+1])
    {
      swap(i , p);
    }
  }

  for(int i=0;i<n;i++)
  {
    if(p[i]!=i+1)
    {
        return false;
    }
    
  }
  return true;
  


}






int main()
{
int no_of_test_cases , no_of_cells;
cin>>no_of_test_cases;
vector<bool>ans;

for(int i=0;i<no_of_test_cases;i++)
{
int no_of_p;
cin>>no_of_p;

vector<int>p;
for(int j=0;j<no_of_p;j++)
{int val;
cin>>val;
p.push_back(val);
}

bool a = calc(no_of_p ,p);
ans.push_back(a);

}
for(int i =0;i<ans.size();i++)
{   if(ans[i]==true)
    {cout<<"YES"<<"\n";}
    else
    {
        cout<<"NO"<<"\n";
    }
}


return 0;
}