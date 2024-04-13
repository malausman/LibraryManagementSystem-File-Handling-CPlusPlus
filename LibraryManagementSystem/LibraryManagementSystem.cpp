// LibraryManagementSystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<windows.h> //For SetConsoleCursorPosition()
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<dos.h>
#include<time.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include<string>
#include <sstream>
#include <algorithm>
using namespace std;

struct Book{   //use to store almost all the information of the book
	int BookId;
    char *name;
    char *author;
	float price;
	int quantiy;
    int bookCategory;
    int ShelfNo;


};

struct UserLogin 
{
	char name[100];
	char Password[20];

};
// Function declrations
void returnfunc(void);
void mainmenu(void);
void addbooks(void);
bool addbooks_(void);
void deleteBook(void);
bool deleteBook_(char);
void EditBook(void);
void SearchBooks(void);
void ExpensiveBook(void);
void ViewBook(void);
void closeapplication(void);
int  getdata();
int  checkid(int);
void Password();
void loaderanim();
struct Book ExpensiveBook(double);


void mainmenu() //screen which appears after entering the correct user name and password
{
	cout<<"\n\n\t\t\t**************************************************"<<endl;
  cout<<"\t\t\t*     Welcome to Library Management System       *"<<endl;  
  cout<<"\t\t\t*           Date: March 25, 2020                 *"<<endl;
  cout<<"\t\t\t*           Final project                        *"<<endl;
  cout<<"\t\t\t*           by : Maria Zulfiqar                  *"<<endl;
  cout<<"\t\t\t*                                                *"<<endl;
  cout<<"\t\t\t*     This program manages books record          *"<<endl;
  cout<<"\t\t\t*     in a library. it has 5 main modules        *"<<endl; 
  cout<<"\t\t\t*     described below.                           *"<<endl; 
  cout<<"\t\t\t**************************************************"<<endl;
  
  cout<<endl;
    cout<<"\tMAIN MODULES :"<<endl;
	
	cout<<"\n\n\t\t\t1)  Add Book(s).\n";
	cout<<"\t\t\t2)  Edit Book(s).\n";
	cout<<"\t\t\t3)  Delete Book(s).\n";
    cout<<"\t\t\t4)  Search Book(s).\n";
    cout<<"\t\t\t5)  View Book(s).\n";
    cout<<"\t\t\t6)  Expensive Book(s).";
    cout<<"\n\t\t\t7)  Close The Program";

    cout<<"\n\n\n\tEnter The Choice:  ";
    int a;
    cin >> a;
     while(a>7 ||a<1)
     {
     	cout<<"\n\t\t\tYou Enter The Wrong Choice  ";
     	 cout<<"\n\t\t\tEnter The Choice:  ";

    scanf("%d",&a);
	 }
	 switch(a)
	 {
	 	case 1:
		 addbooks();
	 		break;
	 		case 2:
	 		EditBook();
	 			break;
	 				case 3:
	 			deleteBook();
				 		break;
	 					case 4:
	 				SearchBooks();

							 break;
	 				    case 5:
	 				    	ViewBook();
	 				    	break;
	 				    	
	 				    case 6:
	 				    	ExpensiveBook();
	 				    	break;
	 				    	case 7:
	 				    		//CloseTheApplication();
	 				    		break;

	 }
}

int main()
{
	
   mainmenu();

}

int Books_Category()
{

system("cls");
  cout<<"\n\n\n\t\t\tChoose The Department Of Book\n";
  cout<<"\t\t\t1)Computer Science(CS)\n";
cout<<"\t\t\t2)Electrical Engineering(EE)\n";
cout<<"\t\t\t3)Electronic(ELE)\n";
cout<<"\t\t\t4)Mechanical(ME)\n";
cout<<"\t\t\t5)Civil(CE)\n";
cout<<"\t\t\t6)Architecture(AR)\n";
cout<<"\n\t\t\tChoose The Department:";
int a;
scanf("%d",&a);
if(a<=6 && a>=1)
{
	return a;
}else{
	cout<<"\n\n\n\t\t\tChoose The Department:";

scanf("%d",&a);
}

}


#pragma region Addbooks


void addbooks()
{
	 ofstream file;
	  char BookID [500];
	 char Name [500];
	  char Price [500];
	   char Quantity [500];
	    char Shelf [500];
	    char Author [500];
  file.open ("LMS_Data.txt", fstream::app);

   cout<<"\n\t\t\tPlease write Book ID : "<< setw(5);
  cin  >> BookID;

  cout<<"\n\t\t\tPlease write Book Name:   " << setw(5);
  cin >> Name;

   cout<<"\n\t\t\tPlease write Author:  ";
  cin >> Author;

   cout<<"\n\t\t\tPlease write Price: ";
  cin >> Price;

    cout<<"\n\t\t\tPlease write Quantity: ";
  cin >> Quantity;

    cout<<"\n\t\t\tPlease write Shelf: ";
  cin >> Shelf;

  file <<"\n";
 // file << BookID <<endl << file << Name <<endl <<file << Author<<endl << file << Price <<endl<<file << Quantity<<endl <<Shelf;
  file << BookID ;
 file<<"\t";

  file << Name;
 file<<"\t";

  file << Author;
  file<<"\t";

   file << Price;
  file<<"\t";

   file << Quantity;
  file<<"\t";

   file << Shelf;
  file<<"\t";

  cout << "Book is added sucessfully !!!";
  //file << "Please writr this text to a file.\n this text is written using C++\n";
 
 file.close();
   cout<<"\n\n\n\t\t\tAdd More Book(y/n):";
     char c2;
     fflush(stdin);
     scanf("%c",&c2);
     	if(c2=='Y' || c2=='y')
     	{
     		addbooks();
		 }else{
		 	cout<<"\n\n\n\t\t\tPress Enter To Continue...";
		 	getch();
		 	
		 }
		
	
}

bool addbooks_()
{
	 ofstream file;
	  char BookID [500];
	 char Name [500];
	  char Price [500];
	   char Quantity [500];
	    char Shelf [500];
	    char Author [500];
  file.open ("LMS_Data.txt", fstream::app);

   cout<<"\n\t\t\tPlease write Book ID : "<< setw(5);
  cin  >> BookID;

  cout<<"\n\t\t\tPlease write Book Name:   " << setw(5);
  cin >> Name;

   cout<<"\n\t\t\tPlease write Author:  ";
  cin >> Author;

   cout<<"\n\t\t\tPlease write Price: ";
  cin >> Price;

    cout<<"\n\t\t\tPlease write Quantity: ";
  cin >> Quantity;

    cout<<"\n\t\t\tPlease write Shelf: ";
  cin >> Shelf;

  file <<"\n";
 // file << BookID <<endl << file << Name <<endl <<file << Author<<endl << file << Price <<endl<<file << Quantity<<endl <<Shelf;
  file << BookID ;
 file<<"\t";

  file << Name;
 file<<"\t";

  file << Author;
  file<<"\t";

   file << Price;
  file<<"\t";

   file << Quantity;
  file<<"\t";

   file << Shelf;
  file<<"\t";

  cout << "Book is updated sucessfully !!!";
  //file << "Please writr this text to a file.\n this text is written using C++\n";
 
 file.close();
   
	return true;	
	
}
#pragma endregion

#pragma region View_Books


void ViewBook()
{
	FILE *fptr; 
  
    char filename[100], c; 
  char text[200];
   
  
    // Open file 
    fptr = fopen("LMS_Data.txt", "r"); 
    if (fptr == NULL) 
    { 
		cout << "Cannot open file \n";
       // printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(fptr);
	cout<<"BookId\t\tName\t\t\tAuthor\t\tPrice\t\tQuantity\t\tShelfNumber\n\n";
    while (c != EOF) 
    { 
		
     // fptr >> text;
        printf ("%c", c); 
		//cout<<"\t"<< c;
        c = fgetc(fptr); 
		
    } 
  
	//cout<<"%d\t\t%s\t\t\t%s\t\t%f\t\t%d\t\t%s-%d\n\n",c;
    fclose(fptr); 
	getch();
    
}
#pragma endregion

#pragma region Search Books

void SearchBooks()
{

	char Name;
    

	 cout <<"\t\t\tPlease Write Book Name : ";
	 cin >> Name;

	 if(Name != NULL) 
	 {
	 }

	ifstream input;
	size_t pos;
       string line;

		input.open("LMS_Data.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{

			 pos = line.find(Name);
			  if(pos!=string::npos) // string::npos is returned if string is not found
        {
            cout <<"\n\t\t\t"<<line <<endl;
            break;
        }

			}
		}

system("pause");
}

char GetBookDetails_ByName()
{

	char Name;
    

	 cout <<"\t\t\tPlease Write Book Name : ";
	 cin >> Name;

	 if(Name != NULL) 
	 {
	 }

	ifstream input;
	size_t pos;
       string line;

		input.open("LMS_Data.txt");
		if(input.is_open())
		{
			while(getline(input,line))
			{

			 pos = line.find(Name);
			  if(pos!=string::npos) // string::npos is returned if string is not found
        {
            cout <<"\n\t\t\t"<<line <<endl;
            break;
        }

			}
		}

//system("pause");
return Name;
}



#pragma endregion

#pragma region Delete Books


void deleteBook()
{
	 string id, name;

	string deletebook;
	 cout<<"Book to delete: Book Title : ";
           cin>>deletebook;
	string line;
  std::fstream myfile;
  std::fstream temp;
  temp.open("temp.txt",ios::out);
  myfile.open("LMS_Data.txt");
  if (!myfile.is_open()){
    //cout << "\n\nCould not open file: "<<file<<endl;
    exit;
  }
  while (myfile.good()){
    getline (myfile,line);

	 istringstream ss(line);
     ss >> id ;
	 ss >> name;
	if (name != deletebook)
	{
      temp << line << endl;
    }
	else
	{
		//delete
	}
  }
  myfile.close();
  temp.close();
  remove("LMS_Data.txt");
  rename("temp.txt","LMS_Data.txt");


}
	



#pragma endregion

#pragma region  editBooks

void EditBook()
{
	// ofstream file;
	// string line;

	//  string id, name;

	////string deletebook;
	// char book_name = GetBookDetails_ByName();


	 string id, name;

	string deletebook;
	 cout<<"Book to update: Book Title : ";
           cin>>deletebook;
	string line;
  std::fstream myfile;
  std::fstream temp;
  temp.open("temp.txt",ios::out);
  // std::ifstream is("LMS_Data.txt");
  myfile.open("LMS_Data.txt");
  if (!myfile.is_open()){
    //cout << "\n\nCould not open file: "<<file<<endl;
    exit;
  }
  while (myfile.good()){
    getline (myfile,line);

	 istringstream ss(line);
     ss >> id ;
	 ss >> name;
	if (name != deletebook)
	{
		//if(!myfile.eof())
			temp <<line<< '\n';
     // temp << line << (is.eof() ? "" : "\n");

	
    }
	else
	{
		//delete
	}
  }
  myfile.close();
  temp.close();
  remove("LMS_Data.txt");
  rename("temp.txt","LMS_Data.txt");


  addbooks_();
	getche();
}


#pragma endregion

  

void ExpensiveBook()
{
	ifstream inputFile("LMS_Data.txt");
    string line;
	 double min = 0;
    double max = 0;
    int next;
	string name;
	int price1=0;
        string var1, var2, price;

    while (getline(inputFile, line))
    {
        istringstream ss(line);
       ss >> name >> var1 >> var2 >> price;
		 
			stringstream geek(price); 
    int x = 0; 
    geek >> x; 
		 price1 = x;
			
		if (price1 > max)
        {
            max = price1;
        }
        if (price1 < min)
        {
            min = price1;
        }
		 
      
    }
	ifstream input;
	size_t pos;
     //  string line;

		input.open("LMS_Data.txt");
		if(input.is_open())
		{
			getline(input,line);
		 pos = line.find(max);
		//if(pos!=string::npos) // string::npos is returned if string is not found
        //{
            cout <<"\n\t Most Expensive Book in Library is : "<<line <<endl;
			getch();
           // exit(0);
       // }

			
		}
	/*cout << " " << var1 << " " << var2 << " " << price1<< " "  << max << "\n";*/
        getch();
  // return book1;    
}