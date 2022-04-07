#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    char A[11];
    scanf("%s",A);
    printf("%c",A[4]);
    */
    /*
    string s;
    getline(cin,s);
    cout<<s[5]<<endl;
    //sort(s.begin(),s.end());
    //cout<<s<<endl;

    string a="rafi";
    string b="bye bye";
    cout<<a+" "+b<<endl;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a' || s[i]=='e')
        {
           cnt=cnt+1;
        }
    }
    cout<<cnt<<endl;
    */


    /*
    map<int,char>my_map;

    char ch='a';
    for(int i=0;i<10;i++)
    {
        my_map[i]=ch;
        ch=ch+1;
    }

    for(auto i=my_map.begin();i!= my_map.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

    */

    map<char,int>my_map;
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        my_map[s[i]]=my_map[s[i]]+1;
    }

    for(char i='a';i<='z';i++)
    {
        cout<<i<<" "<<my_map[i]<<endl;
    }

    return 0;
}
