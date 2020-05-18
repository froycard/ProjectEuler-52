#include<iostream>
#include<string>
#include<algorithm>

using namespace std; 

string sorted(string x)
{
	sort(x.begin(),x.end());
	return x;
}

int main()
{
	unsigned i = 100000;
	while(++i)
	{
		string tmp = to_string(i);
		tmp=sorted(tmp);
		if(tmp != sorted(to_string(2*i))) continue;
		if(tmp != sorted(to_string(3*i))) continue;
		if(tmp != sorted(to_string(4*i))) continue;
		if(tmp != sorted(to_string(5*i))) continue;
		if(tmp != sorted(to_string(6*i))) continue;
		cout << "Solution: " << i << endl;
		break;
	}
	return 0;
}
