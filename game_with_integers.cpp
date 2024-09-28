#include<iostream>
#include<vector>
using namespace std;

bool calc(int input)
{
    if(((input+1)%3)==0 || ((input-1)%3)==0)
    {
        return true;
    }
    else{
        return false;
    }


}


int main()
{
int no_of_test_cases , no_of_cells;
cin>>no_of_test_cases;
vector<bool>ans;
for(int i=0;i<no_of_test_cases;i++)
{
int input;
cin>>input;
bool a = calc(input);
ans.push_back(a);
}
for(int i =0;i<ans.size();i++)
{   if(ans[i]==true)
    {cout<<"First"<<"\n";}
    else
    {
        cout<<"Second"<<"\n";
    }
}


return 0;
}