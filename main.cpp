#include <iostream>
#include <queue>
using namespace std;

void inp(int arr[],int length)
{
	for(int i=0;i<length;i++)
	{
		cin>>arr[i];
	}
}

void itoc(int arr[],char crr[],int length)
{
	int t;
	for(int i=0;i<length;)
	{
		t=arr[i]*arr[i+1]+arr[i+1+1];
		switch(t)
		{
			case 0:
				crr[i/3]='0';
				break;
			case 1:
				crr[i/3]='1';
				break;
			case 2:
				crr[i/3]='2';
				break;
			case 3:
				crr[i/3]='3';
				break;
			case 4:
				crr[i/3]='4';
				break;
			case 5:
				crr[i/3]='5';
				break;
			case 6:
				crr[i/3]='6';
				break;
			case 7:
				crr[i/3]='7';
				break;
			case 8:
				crr[i/3]='8';
				break;
			case 9:
				crr[i/3]='9';
				break;
			default:
				crr[i/3]=(char)(t);
				break;
		}
		i=i+3;
	}
	
}

int main()
{
	int l;
	cin>>l;
	const int len =l;
	int arr[len];
	int le=l/3;
	char crr[len/3];
	inp(arr,len);
	itoc(arr,crr,len);
	for(int i=0;i<le;i++)
	{
		cout<<crr[i];
	}
	cout<<endl;
	system("pause");
	return 0;
}
