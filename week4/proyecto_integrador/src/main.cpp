#include <iostream>
#include <ctime>
#include <vector>
#include "Headers/Video.h"
#include "Headers/Video.cpp"
#include "Headers/Season.h"
#include "Headers/Season.cpp"
#include "Headers/Episode.h"
#include "Headers/Episode.cpp"
#include "Headers/Serie.h"
#include "Headers/Serie.cpp"
#include "Headers/Movie.h"
#include "Headers/Movie.cpp"
using namespace std;

void display();
void displayAll(vector<Serie> series, vector<Movie> movies);
void chooseSerie(vector<Serie> series);
void chooseMovie(vector<Movie> movies);
float randomNumber(float min, float max);

int main()
{
  srand(time(NULL));
  
  // Movie instances
  Movie johnWick(rand() % 99999, "John Wick", 102.0, "Action", 4.5, "Chad Stahleski");
  Movie gvk(rand() % 99999, "Godzilla vs. Kong", 113.0, "Sci-Fiction", 4.0, "Adam Wingard");

  // Creating vector for movies
  vector<Movie> movies = {johnWick, gvk};

  // Serie instances
  Serie got(rand() % 99999, "Game of Thrones", 750.0, "Fantasy", 4.8);
  Serie breakingBad(rand() % 99999, "Breaking Bad", 744.0, "Drama", 4.7);

  // Episode instances
  Episode gotS1E1("Winter is Coming", randomNumber(60, 80) , randomNumber(3, 5));
  Episode gotS1E2("The Kingsroad", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS1E3("Lord Snow", randomNumber(60, 80), randomNumber(4, 5));
  Episode gotS1E4("Cripples, Bastards, and Broken Things", randomNumber(60, 80), randomNumber(4, 5));
  Episode gotS1E5("The Wolf and the Lion", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS1E6("A Golden Crown", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS1E7("You Win or You Die", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS1E8("The Pointy End", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS1E9("Bealor", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS1E10("Fire and Blood", randomNumber(60, 80), randomNumber(3, 5));

  Episode gotS2E1("The North Remembers", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS2E2("The Night Lands", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS2E3("What is Dead May Never Die", randomNumber(60, 80), 4.2);
  Episode gotS2E4("Garden of Bones", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS2E5("The Ghost of Harrenhai", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS2E6("A Golden Crown", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS2E7("You Win or You Die", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS2E8("The Pointy End", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS2E9("Bealor", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS2E10("Fire and Blood", randomNumber(60, 80), randomNumber(3, 5));
  
  Episode gotS3E1("Valor Dohaeris", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS3E2("Dark Wings, Dark Woods", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS3E3("Walk of Punishment", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS3E4("And Now His Watch is Ended", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS3E5("Kissed by Fire", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS3E6("The Climb", randomNumber(60, 80), 3.9);
  Episode gotS3E7("The Bear and the Maiden Fair", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS3E8("Second Sons", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS3E9("The Rains of Castamere", randomNumber(60, 80), randomNumber(3, 5));
  Episode gotS3E10("Mhysa", randomNumber(60, 80), randomNumber(3, 5));

  Episode breakingBadS1E1("Pilot", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS1E2("Cat's in the Bag...", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS1E3("...And the Bag's in the River", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS1E4("Cancer Man", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS1E5("Gray Matter", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS1E6("Crazy Handful of Nothin", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS1E7("A No-Rough-Stuff-Type Deal", randomNumber(60,80), randomNumber(3,5));

  Episode breakingBadS2E1("Seven Thirty-Seven", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS2E2("Grilled", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS2E3("Bit by a Dead Bee", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS2E4("Down", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS2E5("Breakeage", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS2E6("Peekaboo", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS2E7("Negro y Azul", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS2E8("Better Call Saul", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS2E9("4 Days Out", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS2E10("Over", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS2E11("Mandala", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS2E12("Phoenix", randomNumber(60,80), randomNumber(3,5));
  Episode breakingBadS2E13("ABQ", randomNumber(60,80), randomNumber(3,5));

  // Season instances
  Season gotS1(1);
  gotS1.addEpisode(gotS1E1);
  gotS1.addEpisode(gotS1E2);
  gotS1.addEpisode(gotS1E3);
  gotS1.addEpisode(gotS1E4);
  gotS1.addEpisode(gotS1E5);
  gotS1.addEpisode(gotS1E6);
  gotS1.addEpisode(gotS1E7);
  gotS1.addEpisode(gotS1E8);
  gotS1.addEpisode(gotS1E9);
  gotS1.addEpisode(gotS1E10);

  Season gotS2(2);
  gotS2.addEpisode(gotS2E1);
  gotS2.addEpisode(gotS2E2);
  gotS2.addEpisode(gotS2E3);
  gotS2.addEpisode(gotS2E4);
  gotS2.addEpisode(gotS2E5);
  gotS2.addEpisode(gotS2E6);
  gotS2.addEpisode(gotS2E7);
  gotS2.addEpisode(gotS2E8);
  gotS2.addEpisode(gotS2E9);
  gotS2.addEpisode(gotS2E10);

  Season gotS3(3);
  gotS3.addEpisode(gotS3E1);
  gotS3.addEpisode(gotS3E2);
  gotS3.addEpisode(gotS3E3);
  gotS3.addEpisode(gotS3E4);
  gotS3.addEpisode(gotS3E5);
  gotS3.addEpisode(gotS3E6);
  gotS3.addEpisode(gotS3E7);
  gotS3.addEpisode(gotS3E8);
  gotS3.addEpisode(gotS3E9);
  gotS3.addEpisode(gotS3E10);

  Season breakingBadS1(1);
  breakingBadS1.addEpisode(breakingBadS1E1);
  breakingBadS1.addEpisode(breakingBadS1E2);
  breakingBadS1.addEpisode(breakingBadS1E3);
  breakingBadS1.addEpisode(breakingBadS1E4);
  breakingBadS1.addEpisode(breakingBadS1E5);
  breakingBadS1.addEpisode(breakingBadS1E6);
  breakingBadS1.addEpisode(breakingBadS1E7);

  Season breakingBadS2(2);
  breakingBadS2.addEpisode(breakingBadS2E1);
  breakingBadS2.addEpisode(breakingBadS2E2);
  breakingBadS2.addEpisode(breakingBadS2E3);
  breakingBadS2.addEpisode(breakingBadS2E4);
  breakingBadS2.addEpisode(breakingBadS2E5);
  breakingBadS2.addEpisode(breakingBadS2E6);
  breakingBadS2.addEpisode(breakingBadS2E7);
  breakingBadS2.addEpisode(breakingBadS2E8);
  breakingBadS2.addEpisode(breakingBadS2E9);
  breakingBadS2.addEpisode(breakingBadS2E10);
  breakingBadS2.addEpisode(breakingBadS2E11);
  breakingBadS2.addEpisode(breakingBadS2E12);
  breakingBadS2.addEpisode(breakingBadS2E13);

  // Adding to series
  breakingBad.addSeason(breakingBadS1);
  breakingBad.addSeason(breakingBadS2);

  got.addSeason(gotS1);
  got.addSeason(gotS2);
  got.addSeason(gotS3);

  // Creating vector for series
  vector<Serie> series = {breakingBad, got};

  int choice = -1;

  while (choice != 0)
  {
    cout << "NetFilm" << endl;
    display();
    cin >> choice;

    if (choice == 1)
    {
      displayAll(series, movies);
    }

    if (choice == 2)
    {
      chooseSerie(series);
    }

    if (choice == 3)
    {
      chooseMovie(movies);
    }
  }
  
  return 0;
}

void display()
{
  cout << "1. Show all videos" << endl;
  cout << "2. Show all series" << endl;
  cout << "3. Show all movies" << endl;
  cout << "0. Quit" << endl;
  cout << "Enter choice: ";
  return;
}

void displayAll(vector<Serie> series, vector<Movie> movies)
{
  cout << "----------------------" << endl;
  cout << "Series: " << endl;
  for (int i=0; i<series.size(); i++)
  {
    cout << i+1 << ". " << series.at(i).getName() << " Rating: " << series.at(i).getRating() << endl;
  }
  cout << "----------------------" << endl;

  cout << "----------------------" << endl;
  cout << "Movies: " << endl;
  for (int i=0; i<movies.size(); i++)
  {
    movies.at(i).print();
  }
  cout << "----------------------" << endl;

  return;
}

void chooseSerie(vector<Serie> series)
{
  cout << "----------------------" << endl;
  cout << "Series: " << endl;
  for (int i=0; i<series.size(); i++)
  {
    cout << i+1 << ". " << series.at(i).getName() << "Rating: " << series.at(i).getRating() << endl;
  }
  cout << "----------------------" << endl;


  int serieChoice = -1;
  cout << "Which serie do you want to view?" << endl;
  cout << "To return to menu choose 3" << endl;

  while (serieChoice != 3)
  {
    cout << "Enter choice: ";
    cin >> serieChoice;
    if (serieChoice == 1)
    {
      series.at(0).print();
    }
    if (serieChoice == 2)
    {
      series.at(1).print();
    }
  }

  return;
}

void chooseMovie(vector<Movie>movies)
{
  cout << "----------------------" << endl;
  cout << "Movies: " << endl;
  for (int i=0; i<movies.size(); i++)
  {
    movies.at(i).print();
  }
  cout << "----------------------" << endl;
  return;
}

float randomNumber(float min, float max)
{
  return (min + 1) + (((float) rand()) / (float) RAND_MAX) * (max - (min + 1));
}
