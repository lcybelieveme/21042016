///
///@date   2016-04-21 14:30:08
///
 
 
 
#include <iostream>
#include <sstream>
#include <string>
using std::istringstream;
using std::ostringstream;
using std::stringstream;
using std::cin;
using std::cout;
using std::endl;
using std::string;

using namespace std;

int main()
{
	ostringstream ost;
	ost << "hello world how are you?\n" <<1000<< endl;
	string s=ost.str();
	cout<< s <<endl;

	cout<<"==================================="<<endl;
	istringstream ist(s);
	string s1;
	
	while(ist>>s1)
	{
		cout<<s1<<endl;
	}
	
	cout<<"=================================="<<endl;
#if 0	
	ss<<"fuck you"<<endl;

	string s3;

	getline(ss,s3);

	cout<<s3<<endl;
#endif
	stringstream ss;
	string s3;
	ss<<s1;
	getline(ss,s3);
	cout<<s3<<endl;
}
