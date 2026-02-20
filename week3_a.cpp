#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> v; 
int n,e,i,p;
cout << "Enter number of elements:";
cin >> n;
for (i=0; i<n; i++)
{
cout << "Enter the element " << i+1 << endl;
cin >> e;
v.push_back(e);
}
cout << " Enter position:";
cin >> p;
v.insert(v.begin()+p,10);
cout << "Vector elements are:" << endl;
for(i=0;i<v.size();i++)
{
cout << v[i] << " ";
}
v.erase(v.begin());
cout << "Vector elements are:" << endl;
for(auto x:v)
{
cout << x << " ";
}

return 0;
}