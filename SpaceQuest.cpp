#include<iostream>
using namespace std;

void broughtIntoShip();
void getHelmet();
void getSpacePony();

int main(){
    char repeat;
    do{
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
        cout<<"..."<<endl<<"..."<<endl<<"..."<<endl;
        int choice=0;
        cout<<"Okay, fine. I guess I'll help you."<<endl;
        cout<<"Which would you like?"<<endl;
        cout<<"1. For us to bring you into our ship."<<endl;
        cout<<"2. A helmet."<<endl;
        cout<<"3. A majestic, air-producing, space pony."<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                broughtIntoShip(); break;
            case 2:
                getHelmet(); break;
            case 3:
                getSpacePony(); break;
            default:
                cout<<"Alright, fine! You wanna play that way?! You can just stay out there. I tried! Good luck with the head exploding... Jerk..."<<endl;
        }
        cout<<"Would you like to play again? (y/n)"<<endl;
        cin>>repeat;
    }while(repeat=='y' || repeat=='Y');
	return 0;
}

void broughtIntoShip(){
    cout<<"You made it into the ship..."<<endl;
}

void getHelmet(){
    cout<<"You get a helmet...\n But you're still floating in space...\n Things don't look great for you..."<<endl;
}

void getSpacePony(){
    cout<<"You got a freakin' awesome, air-producing, moss-covered, three-handled, family space pony...\n Looks like you're set."<<endl;
}