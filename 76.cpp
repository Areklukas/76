#include <iostream>
#include <fstream>
using namespace std;

string szyfr(string s, int w[], int l) 
{
  	char temp;
  	int k=0;
  	for (int i=0; i<s.length(); i++) 
	{
    	temp=s[i];
    	s[i]=s[w[k]-1];
    	s[w[k]-1]=temp;
    	k++;
    	if(k==l) k=0;
  	}
  	return s;
}

void zadanie1() 
{
  	cout<<"76.1:"<<endl;
  	ifstream in("szyfr1.txt");
  	string t[6];
  	int w[50];
 	for (int i=0; i<6; i++) in>>t[i];
  	for (int i=0; i<50; i++) in>>w[i];
  	for (int i=0; i<6; i++) cout<<szyfr(t[i], w, 50)<<endl;
  	cout<<endl;
}

void zadanie2() 
{
  	cout<<"76.2:"<<endl;
  	ifstream in ("szyfr2.txt");
  	string s;
  	in>>s;
  	int key[15];
  	for (int i=0; i<15; i++) in>>key[i];
  	cout<<szyfr(s, key, 15)<<endl<<endl;
}
int main() 
{
  	zadanie1();
  	zadanie2();
}
