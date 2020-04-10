#include <iostream>
#include <fstream>
#include <string>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
//#include<bits/stdc++.h>
using namespace std;
int hangman();
int faults=0;
char as;
int main();
void program_for_1_player()
{	char up;
	cout<<"\n\t\t\t\t\t\t*******************"
		<<"\n\t\t\t\t\t\t*******************"
		<<"\n\t\t\t\t\t\t*  PLAYER vs CPU  *"
		<<"\n\t\t\t\t\t\t*******************"
		<<"\n\t\t\t\t\t\t*******************"<<endl;
	cout<<"               "<<"Press-'H': Guess HOLLYWOOD Movie Name"<<"               "<<"Press-'B': Guess BOLLYWOOD Movie Name"<<endl;
	cin>>up;
	if(up=='h'||up=='H')
	{	
		cout<<"RULE-1: PLAYER 1 Will Enter Name of Any Movie and PLAYER 2 Will Guess The Name"<<endl<<"RULE 2-Vowels Will Be Visible And PLAYER 2 Have To Guess The Consonants "<<endl<<"RULE 3-ONLY CAPITAL LETTERS ARE ALLOWED"<<"RULE 4- PUT LETER BY LETER";
		cout<<" \n\t\t\tPress Any Key To Proceed";
		getch();	
		system("cls");
		system("color 6F");
		string line;
 		string a[100],a1[100];
  		int i=0,j=0,k=0,count=0;
  		ifstream myfile ("hollywood.txt");
  		if (myfile.is_open())
  		{
    		while ( getline (myfile,line) )
    		{	a1[k++]=line;
    			for(int i=0;i<line.length();i++)
				{	if(line[i]!='a'&& line[i]!='e'&&line[i]!='i'&&line[i]!='o'&&line[i]!='u'&&line[i]!='A'&&line[i]!='E'&&line[i]!='I'&&line[i]!='O'&&line[i]!='U'&&line[i]!=' ')
					{
						line[i]='*';
					}
				}
				a[j++]=line;
    		}
    		myfile.close();
  		}
		else
		{
			cout << "Unable to open file";
		}
		int n=0;
		while(true)
		{
			count=0;
			system("color 6F");
			int index=rand()%20;
			char c;
			cout<<"\n\n\n\n\n\t\t\t\t\t\t"<<a[index]<<endl;
			int size=a[index].length()+1;
			int arr[size];
			string s=a[index],s1=a1[index];
			for(i=0;i<size;i++)
			{
				if(s[i]=='*')
				{
					count++;
				}
			}
			for(i=0;i<7 && count>0;i)
			{
				bool flag=false;
				cin>>c;
				for(j=0;j<size;j++)
				{
					if(s[j]=='*' && s1[j]==c)
					{			
						s[j]=c;
						count--;
						flag=true;
						system("cls");
						cout<<"\n\n\n\n\n\t\t\t\t\t\t"<<s<<endl;
					}
				}
				if(!flag)
				{   
					faults++;
					i++;
					hangman();
					getch();
				}
		}
		if(count<=0)
		{
			cout<<"**********YOU WON************CONGRATULATIONS***********"<<endl;
			getch();
		}
		cout<<"Do you want to continue playing press "<<endl<<"press 'Y' for yes or 'N' for no";
		cin>>as;
		if(as=='Y'||as=='y')
		{
			system("cls");
			system("color 6F");
			main();
		}
		else
		{
			cout<<"\n\t\t\t\tHOPE YOU ENJOYED PLAYING HANGMAN";
			break;
		}
	}
  
}
	else if(up=='b'||up=='B')
	{
		cout<<"RULE-1: PLAYER 1 Will Enter Name of Any Movie and PLAYER 2 Will Guess The Name"<<endl<<"RULE 2-Vowels Will Be Visible And PLAYER 2 Have To Guess The Consonants "<<endl<<"RULE 3-ONLY CAPITAL LETTERS ARE ALLOWED"<<"RULE 4- PUT LETER BY LETER";
		cout<<" \n\t\t\tPress Any Key To Proceed";
		getch();	
		system("cls");
		system("color 6F");
		string line;
 		string a[100],a1[100];
  		int i=0,j=0,k=0,count=0;
  		ifstream myfile ("bollywood.txt");
  		if (myfile.is_open())
  		{
    		while ( getline (myfile,line) )
    		{
    			a1[k++]=line;
    			for(int i=0;i<line.length();i++)
				{
					if(line[i]!='a'&& line[i]!='e'&&line[i]!='i'&&line[i]!='o'&&line[i]!='u'&&line[i]!='A'&&line[i]!='E'&&line[i]!='I'&&line[i]!='O'&&line[i]!='U'&&line[i]!=' ')
					{
						line[i]='*';
					}
				}
				a[j++]=line;
    		}
    		myfile.close();
  		}
	else
	{
		cout << "Unable to open file";
	}
	int n=0;
	while(true)
	{
		count=0;
		system("color 6F");
		int index=rand()%22;
		char c;
		cout<<"\n\n\n\n\n\t\t\t\t\t\t"<<a[index]<<endl;
		int size=a[index].length()+1;
		int arr[size];
		string s=a[index],s1=a1[index];
		for(i=0;i<size;i++)
		{
			if(s[i]=='*')
			{
				count++;
			}
		}
		for(i=0;i<7 && count>0;i)
		{
			bool flag=false;
			cin>>c;
			for(j=0;j<size;j++)
			{
				if(s[j]=='*' && s1[j]==c)
				{
					s[j]=c;
					count--;
					flag=true;
					system("cls");
					cout<<"\n\n\n\n\n\t\t\t\t\t\t"<<s<<endl;
				}
			}
			if(!flag)
			{	faults++;
				i++;
				hangman();
				getch();
			}
		}
		if(count<=0)
		{
			cout<<"**********YOU WON************CONGRATULATIONS***********"<<endl;
			getch();
		}
		cout<<"Do you want to continue playing press "<<endl<<"press 'Y' for yes or 'N' for no";
		cin>>as;
		if(as=='Y'||as=='y')
		{
			system("cls");
			system("color 6F");
			main();
		}
		else
		{
			cout<<"\n\t\t\t\tHOPE YOU ENJOYED PLAYING HANGMAN";
			break;
		}
	}
}
	else 
	main();
}
void program_for_2_player()
{
	cout<<"\n\t\t\t\t\t\t**************************"
		<<"\n\t\t\t\t\t\t**************************"
		<<"\n\t\t\t\t\t\t** PLAYER 1 vs PLAYER 2 **"
		<<"\n\t\t\t\t\t\t**************************"
		<<"\n\t\t\t\t\t\t**************************"<<endl;
		
	cout<<"RULE-1: PLAYER 1 Will Enter Name of Any Movie and PLAYER 2 Will Guess The Name"<<endl<<"RULE 2-Vowels Will Be Visible And PLAYER 2 Have To Guess The Consonants "<<endl;
	cout<<" Press Any Key To Proceed";
	getch();
	while(true)
	{
		string p;
    	string f;
		ofstream outfile("two_player.txt");
		if(outfile.fail())
		{
			cout<<"error while opening file";
		}
		cout<<"\nPlayer 1-enter the movie name--"<<endl;
		cin>>p;
		getline(cin,f);
		outfile<<p<<f;
		outfile.close();
		system("cls");
		system("color 6F");
		string line;
	 	string a,a1;
	  	int i=0,j=0,k=0,count=0;
	  	ifstream myfile ("two_player.txt");
	  	if (myfile.is_open())
	  	{
	    	while ( getline (myfile,line) )
	    	{
	    		a1=line;
	    		for(int i=0;i<line.length();i++)
				{
					if(line[i]!='a'&& line[i]!='e'&&line[i]!='i'&&line[i]!='o'&&line[i]!='u'&&line[i]!='A'&&line[i]!='E'&&line[i]!='I'&&line[i]!='O'&&line[i]!='U'&&line[i]!=' ')
					{
						line[i]='*';
					}
				}
	    	}
	   		myfile.close();
	  	}
		else
		{
			cout << "Unable to open file"<<endl;
		}
		int n=0;
		count=0;
		system("color 6F");
		char c;
		cout<<"\n\n\n\n\n\t\t\t\t\t\t"<<line<<endl;
		int size=line.length()+1;
		int arr[size];
		string s=line,s1=a1;
		for(i=0;i<size;i++)
		{
			if(s[i]=='*')
			{
				count++;
			}
		}
		for(i=0;i<7 && count>0;i)
		{
			bool flag=false;
			cin>>c;
			for(j=0;j<size;j++)
			{
				if(s[j]=='*' && s1[j]==c)
				{
		    		s[j]=c;
					count--;
					flag=true;
					system("cls");
					cout<<"\n\n\n\n\n\t\t\t\t\t\t"<<s<<endl;
				}
			}
			if(!flag)
			{
				faults++;
				i++;
				hangman();
				getch();
			}
		}
		if(count<=0)
		{
			cout<<"**********YOU WON************CONGRATULATIONS***********"<<endl;
		}
		cout<<"Do you want to continue playing press "<<endl<<"press 'Y' for yes or 'N' for no";
		cin>>as;
		if(as=='Y'||as=='y')
		{
			system("cls");
			system("color 6F");
			main();
		}
		else
		{
			cout<<"\n\t\t\t\tHOPE YOU ENJOYED PLAYING HANGMAN";
			break;
		}
	}
}
	int hangman()
	{
    	if (faults == 0)
		{
   			cout << "|----------------------" <<endl;
    		cout << "|                      " <<endl;
    		cout << "|" <<endl;
    		cout << "|" <<endl;
    		cout << "|" <<endl;
    		return 1;
    	}
    	else if (faults == 1)
		{
    		cout << "|----------------------" <<endl;
    		cout << "|                      |" <<endl;
        	cout << "|" <<endl;
    	    cout << "|" <<endl;
        	cout<<  "|" <<endl;
     	   return 1;
    	}
    	else if (faults == 2)
		{
        	cout << "|----------------------" <<endl;
        	cout << "|                      |"<<endl;
        	cout << "|                      O" <<endl;
        	cout << "|" <<endl;
        	cout << "|" <<endl;
        	return 1;
    	}

    	else if (faults == 3)
		{
        	cout << "|----------------------" <<endl;
        	cout << "|                      |" <<endl;
    		cout << "|                      O" <<endl;
        	cout << "|                     ~ " <<endl;
        	cout << "|                       " <<endl;
	        return 1;
    	}
    	else if (faults == 4)
		{
    	    cout << "|----------------------" <<endl;
    	    cout << "|                      |" <<endl;
    	    cout << "|                      O" <<endl;
    	    cout << "|                     ~ ~" <<endl;
    	    cout << "|                      " <<endl;
    	    return 1;
    	}
    	else if (faults == 5)
		{
    	    cout << "|----------------------" <<endl;
    	    cout << "|                      |" <<endl;
    		cout << "|                      O" <<endl;
    		cout << "|                     ~ ~" <<endl;
			cout << "|                      |" <<endl;
    		cout << "|                       " <<endl;
    	    cout << "                       -" <<endl;
    	    return 1;
    	}
    	else if (faults == 6)
		{
    	    cout << "|----------------------" <<endl;
        	cout << "|                      |" <<endl;
    	    cout << "|                      O" <<endl;
    	    cout << "|                     ~ ~" <<endl;
    	    cout << "|                      |" <<endl;
    	    cout << "|                     / " <<endl;
    	    cout << "                      - -" <<endl;
    	    return 1;
    	}
    	else if (faults == 7)
		{
    	    cout << "|----------------------" <<endl;
    		cout << "|                      |" <<endl;
    	    cout << "|                      O" <<endl;
    	    cout << "|                     ~ ~" <<endl;
    	    cout << "|                      |" <<endl;
			cout << "|                     / \ "<<endl;
    	    cout << "                      - -" <<endl;
    	    cout << "Dead.Dead.The hangman is dead!You lose!" <<endl;
    	    return 0;
    	}
 }
int main()
{	
	int a;
	system("color 6F");
	cout<<"\n\t\t\t\t\t\t***************"
		<<"\n\t\t\t\t\t\t***************"
		<<"\n\t\t\t\t\t\t**  HANGMAN  **"
		<<"\n\t\t\t\t\t\t***************"
		<<"\n\t\t\t\t\t\t***************"<<endl
		<<"\t\t\t\t\t\tGuess Right or Die"<<endl
		<<"\t\tPRESS:'1'TO PLAY GAME ALONE\t\t\t\tPRESS:'2'IF YOU HAVE PARTNER TO PLAY WITH"<<endl;
	cin>>a;
	system("cls");
	system("color 6F");
	if(a==1)
	{	
		program_for_1_player();
	}
	else 
	if(a==2)  
	{	
		program_for_2_player();
	}
	else
	{
		cout<<"*******We Are Trying To Improve Game To Be Played By More Player Sorry For Inconvenience********";
	}

}
