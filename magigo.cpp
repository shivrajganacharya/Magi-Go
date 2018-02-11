#include <iostream>
#include <stdlib.h>

using namespace std;

void dispalyNo();
void dispalyNo1();
void rules();
void fun1();

int main() 
{
	char ch;
	int temp;

	do
	{
		system("cls");
		cout << "###### MagiGo ######" << endl;
		cout << "1. Rules" << endl;
		cout << "2. Play" << endl;
		cin >> temp;
		if(temp == 1)
		{
			rules();
			fun1();
		}
		else
		{
			fun1();
		}
		cout << endl << "Do you want to play agian? (y/n): ";
		cin >> ch;
	}while(ch == 'y' || ch=='Y');
	return 0;
	
}

void rules()
{
	system("cls");
	cout << "###### MagiGo ######" << endl;
	cout << endl << endl;
	cout << "Rule : 1) Ask your friend to select one number out of displayed numbers and keep it mind." << endl;
	cout << "       2) Then, ask him/her in which column the number is and enter the column number." << endl;
	cout << "       3) Repeat this for three times, and see what happens...!" << endl;
	cout << endl << "Do you want to start? (y/n): ";
	char ch;
	cin >> ch;
	if(ch == 'y' || ch=='Y')
	{
		return;
	}
}

void fun1()
{
	system("cls");
	int s1[21];
	int x=0,column,b,c,d;
	system("color a");
	cout << " \t\t O_O MagiGo O_O" << endl << endl;
	for(int a=0;a<21;a++)
	{
		s1[a]=a+1;
		cout << "\t" << s1[a] << "\t";
		x++;
		if(x==3)
		{
			cout << endl;
			x=0;
		}
	}
	x=0;
	cout << endl << "Enter the no of column : ";
	cin >> column;
	// column 1
	if(column==1)
	{
		system("cls");
		cout << " \t\t O_O MagiGo O_O" << endl << endl;
		b=-2;
		c=-3;
		d=-1;
		for(int a=0;a<7;a++)
		{
			s1[a]=(b=b+3)+1;
			cout << "\t" << s1[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
        for(int a=7;a<14;a++)
		{
			s1[a]=(c=c+3)+1;
			cout << "\t" << s1[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
		for(int a=14;a<21;a++)
		{
			s1[a]=(d=d+3)+1;
			cout << "\t" << s1[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
	}
	// column 2
	if(column==2)
	{
		system("cls");
		cout << " \t\t O_O MagiGo O_O" << endl << endl;
		b=-3;
		c=-2;
		d=-1;
		for(int a=0;a<7;a++)
		{
			s1[a]=(b+=3)+1;
			cout << "\t" << s1[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
        for(int a=7;a<14;a++)
		{
			s1[a]=(c+=3)+1;
			cout << "\t" << s1[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
		for(int a=14;a<21;a++)
		{
			s1[a]=(d+=3)+1;
			cout << "\t" << s1[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
	}
	// column 3
	if(column==3)
	{
		system("cls");
		cout << " \t\t O_O MagiGo O_O" << endl << endl;
		b=-3;
		c=-1;
		d=-2;
		for(int a=0;a<7;a++)
		{
			s1[a]=(b+=3)+1;
			cout << "\t" << s1[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
        for(int a=7;a<14;a++)
		{
			s1[a]=(c+=3)+1;
			cout << "\t" << s1[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
		for(int a=14;a<21;a++)
		{
			s1[a]=(d+=3)+1;
			cout << "\t" << s1[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
	}	
	// step 2 column 1
	cout << endl << "Enter the no of column : ";
	cin >> column;
	int s2[21];
	if(column==1)
	{
		system("cls");
		cout << " \t\t O_O MagiGo O_O" << endl << endl;
		b=-2;
		c=-3;
		d=-1;
		for(int a=0;a<7;a++)
		{
			b=b+3;
			s2[a]=s1[b];
			cout << "\t" << s2[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
        for(int a=7;a<14;a++)
		{
			c=c+3;
			s2[a]=s1[c];
			cout << "\t" << s2[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
		for(int a=14;a<21;a++)
		{
			d=d+3;
			s2[a]=s1[d];
			cout << "\t" << s2[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
	}
	// step 2 column 2
	if(column==2)
	{
		system("cls");
		cout << " \t\t O_O MagiGo O_O" << endl << endl;
		b=-3;
		c=-2;
		d=-1;
		for(int a=0;a<7;a++)
		{
			b=b+3;
			s2[a]=s1[b];
			cout << "\t" << s2[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
        for(int a=7;a<14;a++)
		{
			c=c+3;
			s2[a]=s1[c];
			cout << "\t" << s2[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
		for(int a=14;a<21;a++)
		{
			d=d+3;
			s2[a]=s1[d];
			cout << "\t" << s2[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
	}
	// step 2 column 3
	if(column==3)
	{
		system("cls");
		cout << " \t\t O_O MagiGo O_O" << endl << endl;
		b=-3;
		c=-1;
		d=-2;
		for(int a=0;a<7;a++)
		{
			b=b+3;
			s2[a]=s1[b];
			cout << "\t" << s2[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
        for(int a=7;a<14;a++)
		{
			c=c+3;
			s2[a]=s1[c];
			cout << "\t" << s2[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
		for(int a=14;a<21;a++)
		{
			d=d+3;
			s2[a]=s1[d];
			cout << "\t" << s2[a] << "\t"; 
			x++;
			if(x==3)
			{
				cout << endl;
				x=0;
			}
		}
	}
	cout << endl << "Enter the no of column : ";
	cin >> column;
	system("cls");
	for(int a=1;a<=10;a++)
	{
		system("color 47");
		system("color 74");
	}
	if(column==1)
	{
		cout << endl <<endl <<endl <<endl <<endl << "\t\t\t"<<s2[9] << endl <<endl <<endl <<endl <<endl;
	}
	if(column==2)
	{
		cout << endl <<endl <<endl <<endl <<endl << "\t\t\t"<<s2[10] << endl <<endl <<endl <<endl <<endl;
    }
	if(column==3)
	{
		cout << endl <<endl <<endl <<endl <<endl << "\t\t\t"<<s2[11] << endl <<endl <<endl <<endl <<endl;
	}
}

