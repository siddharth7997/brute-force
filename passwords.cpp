#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
int main()
{
	queue <string>q;string t="";string l;
	cout<<"READY SIDDHARTH LETS ROCK!"<<endl;
	string c="123456789abcdefghijklmnopqrstuvwxyz !@#$%^&*()_+-=~`/.,ABCDEFGHIKJLMNOPQRSTUVWXYZ";
	cout<<"no of total possible chars are"<<c.size()<<endl;
	cin>>l;
	for(int i=0;c[i]!='\0';i++)
	{
	q.push(t+c[i]);
	}
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		cout<<t<<endl;
		for(int j=0;j<c.size();j++)
		{q.push(t+c[j]);
		}
	}
	return 0;
}
