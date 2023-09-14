#include<iostream>
#include<conio.h>

using namespace std;

//class declaration

class Movie
{
private:
   string movieTitle ;
   string movieYear;
   string directorName;
public:
   void setTitle(string title);
   void setYear(string year);
   void setDirector(string director);
   void displayInfo();

};

//class Implementation
void Movie::setTitle(string title)
{
   movieTitle = title;
   cout<<"What is the title of themovie? "<<endl;
}

void Movie::setYear(string year)
{
   movieYear = year;
   cout<<"What year did the movie comeout? "<<endl;
}

void Movie::setDirector(string director)
{
   directorName = director;
   cout<<"Who directed themovie?"<<endl;
}

void Movie::displayInfo()
{
   cout<<"Movie Title :"<<movieTitle<<endl;
   cout<<"Year          : "<<movieYear<<endl;
   cout<<"Director      :"<<directorName<<endl;
}

//main function
int main ()
{
   Movie myFavoriteMovie;
   string temp; //temporary stringvariable

   cout<<"Enter movie title"<<endl;
   cin>>temp;

   myFavoriteMovie.setTitle(temp);


   cout<<"Enter movie Year"<<endl;
   cin>>temp;

   myFavoriteMovie.setYear(temp);

   cout<<"Enter director'sname"<<endl;
   cin>>temp;

   myFavoriteMovie.setDirector(temp);


   //display all the data
   myFavoriteMovie.displayInfo();

   system("PAUSE");
   return 0;
}