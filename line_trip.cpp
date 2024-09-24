#include<iostream>
#include<vector>
using namespace std;

int trip(int no_of_fuel_station , int distance ,vector<int> location)
{
    for(int i=0;i<distance;i++)
    {

    }
    
}


int main()
{
int no_of_test_case , no_of_fuel_station , distance;

cin>>no_of_test_case;
vector<int>ans;
for(int i=0;i<no_of_test_case;i++)
{
cin>>no_of_fuel_station;
cin>>distance;
vector<int>location ;
for(int j=0;j<no_of_fuel_station;j++)
{ int b;
  cin>>b;
  location.push_back(b);
}
ans.push_back(trip(no_of_fuel_station , distance , location));


}
for(int i =0;i<ans.size();i++)
{
    cout<<ans[i]<<"\n";
}


return 0;
}