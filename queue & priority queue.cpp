#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    //declearation
    queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);
      q.push(4);

    cout<<q.front()<<endl;

    cout<<q.size()<<endl;
    while(!q.empty())
    {
       cout<<q.front()<<endl;
       q.pop();
    }
    */


    // prio
    // declaration

    priority_queue<char>pq;

    pq.push('a');
    pq.push('d');
    pq.push('r');
    pq.push('b');

    cout<<pq.top()<<endl;

    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }

    return 0;
}
