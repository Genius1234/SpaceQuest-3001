#include<iostream>
using namespace std;

int main(){
  system("clear");
	cout<<"SpaceQuest 3001™"<<endl;
	cout<<"2013-FLPL Programming Club"<<endl;

	cout<<"Press enter to continue..."<<endl;
	cin.get();
	system("clear");

	int feeling=0;

	cout<<"Your are in space."<<endl;
	cout<<"You're taking a trip to the Andromeda Galaxy."<<endl;
	cout<<"How are you feeling today?"<<endl;
	cout<<"1. Alright..."<<endl<<"2. Not so hot..."<<endl;
	cin>>feeling;

	if(feeling==1){
		cout<<"Nah... You're not feeling so hot..."<<endl<<"In fact, you're suffocating. You got no helmet... And you in space..."<<endl<<endl<<"Good luck with that!"<<endl;
	}else if(feeling==2){
		cout<<"Sorry, bro. That's kind of lame."<<endl<<"Might have something to do with the lack of helmet and the surplus of space that you're in..."<<endl;
	}else{
		cout<<"You stupid or somethin'?! That is definitely not an answer..."<<endl<<"You know what?! You're done. Game over..."<<endl<<endl<<"..."<<endl<<"...Jerk......."<<endl;
	}

	return 0;
}
