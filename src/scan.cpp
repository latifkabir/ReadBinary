//This script can scan through binary data for specific channel.
//Latiful Kabir
// Date:05/05/2014


#include<iostream>
#include"ReadBinary.h"


using namespace std;

void scan(int ch=0,int start=0,int n=10)
{
   
  ReadBinary fa("data/000");
                
    cout<<"Printing "<<n<<" entries starting from "<<start<<"for channel-"<<ch<<endl;

    for(int i=start;i<(start+n);i++)
    {
	cout<<i<<"   "<<fa.GetValue(ch,i)<<endl;
    }
   
}

int main(void)
{
    int x,y,z;
    cout<<"Enter Channel number:"<<endl;
    cin>>x;
    cout<<"Enter the first entry number:"<<endl;
    cin>>y;
    cout<<"Enter how many entries to be printed:"<<endl;
    cin>>z;
    scan(x,y,z);

    return(0);
}
