#include<iostream>
#include<vector>
using namespace std;
int calc(int n , string s)
{
    for(int i=0;i<n;i++)
    {
      if(i<n-2 && s[i] == '.'&&s[i+1] =='.' && s[i+2]=='.')
      {
        return 2;
      }
      
    }
    int count = 0 ;
    for(int i=0;i<n;i++)
    {
      if(s[i]=='.')
      {
        count++;
      }
    }

    return count;
}


int main()
{
int no_of_test_cases , no_of_cells;
cin>>no_of_test_cases;
vector<int>ans;
for(int i=0;i<no_of_test_cases;i++)
{
cin>>no_of_cells;
string s;
cin>>s;
int a = calc(no_of_cells , s);
ans.push_back(a);


}
for(int i =0;i<ans.size();i++)
{
    cout<<ans[i]<<"\n";
}


return 0;
}