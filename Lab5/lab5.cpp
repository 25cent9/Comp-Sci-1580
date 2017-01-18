/*
  Programmer:  Innocent Niyibizi
  Instructor:  Sannihitha Muppidi 
  Section:     D
  Date:        9/20/16
  Description: Count and display the number of votes each actor received
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Declaring the integer constants
const int AUDIENCE = 1000;  //Audience member number
const int HERO_COUNT = 4;   //Count for the amount of actors

//Declaring constants for each actor's name
const string ACTOR_ONE = "Leonardo DiCaprio";
const string ACTOR_TWO = "Christian Bale";
const string ACTOR_THREE = "Matthew McConaughey";
const string ACTOR_FOUR = "Will Smith";
int main()
{
  //Declaring counters
  int leo_count = 0;  //Count for Leonardo DiCaprio
  int bale_count = 0; //Count for Christian Bale
  int matt_count = 0; //Count for Matthew McConaughey
  int will_count = 0; //Cout for Will Smith
  int vote = 0;       //Int for the value of the vote
  srand(time(0));     //Initializing srand
  
  //For loop to run for the amount of people in the audience
  for (int i=0; i<AUDIENCE; i++)
  {
    //Creating a random number for the vote
    vote = rand()%(HERO_COUNT)+1;
    
    //Using a switch statement to see which actor gets the vote
    switch(vote)
    {
      case 1:
        leo_count++;
        break;
      case 2:
        bale_count++;
        break;
      case 3: 
        matt_count++;
        break;
      case 4:
        will_count++;
        break;
    }
  }
  
  //Displaying the tallies
  cout<<"Hero: \t\t\tVotes:"<<endl;
  cout<<ACTOR_ONE<<" \t"<<leo_count<<endl;
  cout<<ACTOR_TWO<<" \t\t"<<bale_count<<endl;
  cout<<ACTOR_THREE<<" \t"<<matt_count<<endl;
  cout<<ACTOR_FOUR<<" \t\t"<<will_count<<endl;
  
  //Termination message
  cout<<"Have a wonderful evening!"<<endl;
  
  return 0;
}
