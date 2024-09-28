#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

bool calc(int size, vector<int> p)
{
    if(size <= 0 || size == 2 || size == 1)
    {
        return true;
    }

    // Find the maximum element in p to resize t accordingly
    int max_val = *max_element(p.begin(), p.end());
    
    vector<int> t(max_val + 1, 0); // Make sure the size of t is at least max_val + 1

    for(int i = 0; i < size; i++)
    {
        t[p[i]]++;
    }

    int count = 0;
    for(int i = 0; i <= max_val; i++)
    {
        if(t[i] >= 1)
        { 
            count++;
        }
    }

    if(count > 2)
    {
        return false;
    }
    else
    {
        if(count == 1)
        {
            return true;
        }
        if(count == 2)
        {
            vector<int> a;
            for(int i = 0; i <= max_val; i++)
            {
                if(t[i] >= 1)
                {
                    a.push_back(t[i]);
                }
            }
            if(a[0] == a[1] + 1 || a[1] == a[0] + 1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

    return false;
}

int main()
{
    int no_of_test_cases;
    cin >> no_of_test_cases;
    vector<bool> ans;

    for(int i = 0; i < no_of_test_cases; i++)
    {
        int size;
        cin >> size;

        vector<int> p(size);
        for(int j = 0; j < size; j++)
        {
            cin >> p[j];
        }

        bool a = calc(size, p);
        ans.push_back(a);
    }

    for(int i = 0; i < ans.size(); i++)
    {
        if(ans[i])
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
