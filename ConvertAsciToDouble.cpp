//This program takes a string of floating point number and converts the string to equivalent floating point number

#include <iostream>

using namespace std;
double toDouble(string str)
{
int sign = 1; double x;
int count =0; double result = 0;;
for(int i=0; i<str.length();i++)
 {
	if(str[i]=='-')
		{
			sign =-1;
		}
	else
		{
			if(str[i]=='.') count = 1;
			else
			{
				if(count !=0)
			     count*=10;
			    result = result * 10+(str[i]-'0');
			}
		}
 }

if(count!=0) x = (result*sign)/(count);
else
x = (result*sign);
 return x;
}

int main()
{
cout<<toDouble("-0.456")<<endl;
cout<<toDouble("-45.456")<<endl;
cout<<toDouble("1.99")<<endl;
cout<<toDouble("124")<<endl;
cout<<toDouble("34.567")<<endl;
return 0;
}
