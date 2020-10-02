//sort the strings in dictionary order
// ["scalar", "ruby" , "c" , "java"]

#include<bits/stdc++.h>
using namespace std;

// takes strings of equal length and sorts them

vector<string> func2(vector<string>& s)
{
    sort(s.begin(),s.end());
    return s;
}


vector<string> func(vector<string>& s)
{
    // compare using the 1st char
    
    vector<pair<int,int>> vec;

    for(int i=0;i<s.size();i++)
    {
        string str = s[i];
        vec.push_back({str.length(),i});
    }

    //sort this vector vec based on 1st value in the pair

    sort(vec.begin(),vec.end());

    // ["c","ruby","java","scalar"]

    // partition into parts with same length


    // [[1,2], [4,1], [4,3] , [6,0]]
    // cout<<"check";
    // for(auto p:vec)
    // cout<<p.first<<" "<<p.second<<endl;

    vector<string> ans;
   
    for(int i=0;i<vec.size();i++)
    {
        vector<string> a;
        int len = vec[i].first;
        int counter = 1;
        a.push_back(s[vec[i].second]);
        for(int j=i+1;j<vec.size();j++)
        {
           if(vec[j].first == len)
           {
               a.push_back(s[vec[j].second]);
            //    cout<<s[vec[j].second]<<endl;
               counter++;
           }
           
        }
        if(counter == 1)
        ans.push_back(s[vec[i].second]);
        else
        {
            vector<string> temp = func2(a);
            for(string x:temp)
            ans.push_back(x);
            i += counter-1;
        }

    }
    
    return ans;
}

int main()
{
    vector<string> s;
    s = {"scalar", "ruby" , "c" , "java"};
    vector<string> ans = func(s);
    for(string str:ans)
    cout<<str<<endl;
    return 0;
}