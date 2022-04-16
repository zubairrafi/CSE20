#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>my_set;
    my_set.insert(3);
    my_set.insert(4);
    my_set.insert(2);
    my_set.insert(1);
    cout<<"After intersion ";
    for(auto it=my_set.begin();it!=my_set.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    my_set.erase(3);
    cout<<"After deletering ";
    for(auto it=my_set.begin();it!=my_set.end();it++)
    {
        cout<<*it<<" ";
    }
    my_set.insert(6);
    cout<<endl;
    if(my_set.count(3))
    {
        cout<<"Yes the element is found"<<endl;
    }
    else
    {
        cout<<"this element does not exist "<<endl;
    }
     for(auto it=my_set.begin();it!=my_set.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<*my_set.upper_bound(3)<<endl;
    cout<<*my_set.lower_bound(3)<<endl;
    return 0;
}
