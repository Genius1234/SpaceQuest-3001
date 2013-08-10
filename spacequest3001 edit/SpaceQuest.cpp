#include<iostream>
using namespace std;

void broughtIntoShip();
void getnothing();
void sacrificethyself();

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
        cout<<"2. Get nothing."<<endl;
        cout<<"3. Ask for helmet"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                broughtIntoShip(); break;
            case 2:
                getnothing(); break;
            case 3:
                sacrificethyself(); break;
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
    cout<<"Oh no Gerald is being attacked by aliens."<<endl;
    cout<<"1.Risk your life and save Gerald"<<endl<<"2.Stay and look at what the alien does"<<endl<<"You remember when Gerald hurt you by reading your diary aloud"<<endl;
    
    int decision=0;
    
    if(decision==1){
        cout<<"You save Gerald, but you get killed by the alien.\n"<<endl;
    }else if(decision==2){
        cout<<"The Alien kills Gerald, and everyone is scared to death of the alien"<<endl;
    }else if(decision==3){
        cout<<"You enchorage the alien to hurt Gerald, and the alien takes you on his side"<<endl;
    }else{
        cout<<"Gerald is killed and the alien looks at you"<<endl;
    }

void getnothing(){
    cout<<"You die and your head explodes\n You suck at this game idiot."<<endl;
}

void sacrificethyself(){
    cout<<"You get the helmet, but an alien starts beating you with a stick, and sense the alien dies when he breathes oxygen you put it on him and you die\n your a hero."<<endl;
}

