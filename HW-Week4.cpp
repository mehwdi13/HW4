#include <iostream>

using namespace std;

 main() {
	int x,y,z;
	
	float d,k;
	
	cout<<"please enter a number for x :";
	cin>>x;
	cout<<"please enter a number for y :";
	cin>>y;
	cout<<"please enter a number for z :";
	cin>>z;
	
    d=(x-y)*(x+z);
    
    k=((x+y+z)*(x+y+z))+1;
    
    cout<<d/k;
	
}
