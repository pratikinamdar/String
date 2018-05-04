//This program converts a string of integers to its equivalent integer value. Mimics atoi()

int toInteger(string str)
{
int sign =1; int result = 0;

for(int i=0; i<str.length(); i++)
	{
	  if(str[i] == '-')
	  {
	    sign =-1;
	  }
	  else
	  {
	    result = result *10 + (str[i]-'0');
	  }
	}
	
	return (sign * result);
}

int main()
{
cout<<toInteger("456")<<endl;
cout<<toInteger("-093")<<endl;
cout<<toInteger("9")<<endl;
cout<<toInteger("-0")<<endl;
cout<<toInteger("-9")<<endl;
return 0;
}
