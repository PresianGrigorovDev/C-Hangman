// Hangman made my Presian Grigorov
#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstring>
#include <fstream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int playGame(string word)
{
	// Следи за грешки
	int miss=0, guessed=0;
	char response;
	string display=word;
	
	for (int i=0; i < display.length(); i++)
		display[i] = ' *';
	
	// Върти се докато думата не е позната
	while (guessed < word.length() )
	{
		system ("cls");
		char noHR;
		ifstream noH("visuals/NoHangs.txt");
		for (int i=0; !noH.eof(); i++){
			noH.get(noHR);
			cout<<noHR; 
		}
		cout<<endl;
		noH.close();
	if(miss == 1){
		char headR;
		system ("cls");
		ifstream head("visuals/Head.txt");
		for (int i=0; !head.eof();i++){
			head.get(headR);
			cout<<headR;
		}
		cout<<endl;
		head.close();
	}else 	
	if(miss == 2){
		char rHandR;
		system ("cls");
		ifstream rHand("visuals/RightHand.txt");
		for (int i=0; !rHand.eof(); i++){
			rHand.get(rHandR);
			cout<<rHandR; 
		}
		cout<<endl;
		rHand.close();
	}	
	if(miss == 3){
		char handsR;
		system ("cls");
		ifstream hands("visuals/Hands.txt");
		for (int i=0; !hands.eof(); i++){
			hands.get(handsR);
			cout<<handsR; 
		}
		cout<<endl;
		hands.close();
	}
	if(miss == 4){
		char bodyR;
		system ("cls");
		ifstream body("visuals/Body.txt");
		for(int i=0; !body.eof(); i++){
			body.get(bodyR);
			cout<<bodyR; 
		}
		cout<<endl;
		body.close();
	}
	if(miss == 5){
		char bodyR2;
		system ("cls");
		ifstream body2("visuals/Body2.txt");
		for(int i=0; !body2.eof(); i++){
			body2.get(bodyR2);
			cout<<bodyR2; 
		}
		cout<<endl;
		body2.close();
	}
	if(miss == 6){
		char rLegR;
		system ("cls");
		ifstream rLeg("visuals/RightLeg.txt");
		for (int i=0; !rLeg.eof(); i++){
			rLeg.get(rLegR);
			cout<<rLegR; 
		}
		cout<<endl;
		rLeg.close();
	}
	if(miss ==7){
		char deadR;
		system ("cls");
		ifstream dead("visuals/DEAD.txt");
		for (int i=0; !dead.eof(); i++){
			dead.get(deadR);
			cout<<deadR; 
		}
		cout<<endl;
		dead.close();
		cout<<"\nThe word was '"<<word<<"'.";
		getch();
		exit(0);
	}
	
		cout<<display<<" : ";	
			cin>>response;
		
		bool rightGuess = false;
		for (int i=0; i < word.length(); i++)
			if (response == word[i])
				if (display[i] == word[i])
				{
					cout<<response<<" is in the word \n";
					continue;
				}else
			{
				display[i] = word[i];
				guessed++;
				rightGuess = true;
			}
	if (!rightGuess)
		miss++;	
	}
	system ("cls");
	char winR; int lives=0;
	ifstream win("visuals/WIN.txt");
	for (int i=0; !win.eof();i++){
		win.get(winR);
		cout<<winR; 
	}
	cout<<endl;
	win.close();
		cout<<"\nYou win with "<<miss<<" misses \n";
	lives=7-miss;
	if (lives == 1)
		cout<<"and "<<lives<<" live to spare!";
	else
		cout<<"and "<<lives<<" lives to spare!";
		getch();
		exit(0);
}

//------------------------------------------------------------------------------

int main (){
	system("color B");
	system("MODE CON COLS=35 LINES=19");
	
		
	char logoR;
	int randW; 
	ifstream logo("visuals/logo.txt");
	for (int i=0; !logo.eof(); i++){
		logo.get(logoR);
		cout<<logoR; 
	}
	cout<<endl;
	logo.close();
	cout<<"\n|Click 'ENTER' to start the game|\n";

		cin.get();
		
	srand(time(0));
	randW = (rand () % 126 ) + 1;
	switch (randW)
	{
		case 1: playGame("programming"); break;
		case 2: playGame("shot"); break;
		case 3: playGame("football"); break;
		case 4: playGame("doctor"); break;
		case 5: playGame("iphone"); break;
		case 6: playGame("tea"); break;
		case 7: playGame("milk"); break;
		case 8: playGame("chocolate"); break;
		case 9: playGame("water"); break;
		case 10:playGame("presian"); break;
		case 11:playGame("generator"); break;
		case 12:playGame("electronics"); break;
		case 13:playGame("guitar"); break;
		case 14:playGame("pizza"); break;
		case 15:playGame("food"); break;
		case 16:playGame("samsung"); break;
		case 17:playGame("power"); break;
		case 18:playGame("balloon"); break;
		case 19:playGame("battery"); break;
		case 20:playGame("knife"); break;
		case 21:playGame("car"); break;
		case 22:playGame("truck"); break;
		case 23:playGame("television"); break;
		case 24:playGame("fridge"); break;
		case 25:playGame("socks"); break;
		case 26:playGame("computer"); break;
		case 27:playGame("tablet"); break;
		case 28:playGame("zombie"); break;
		case 29:playGame("book"); break;
		case 30:playGame("facebook"); break;
		case 31:playGame("youtube"); break;
		case 32:playGame("bell"); break;
		case 33:playGame("claws"); break;
		case 34:playGame("skateboard"); break;
		case 35:playGame("longboard"); break;
		case 36:playGame("box"); break;
		case 37:playGame("windows"); break;
		case 38:playGame("pencil"); break;
		case 39:playGame("pen"); break;
		case 40:playGame("ball"); break;
		case 41:playGame("soccer"); break;
		case 42:playGame("work"); break;
		case 43:playGame("dog"); break;
		case 44:playGame("cat"); break;
		case 45:playGame("lion"); break;
		case 46:playGame("bear"); break;
		case 47:playGame("remotecontrol"); break;
		case 48:playGame("paradise"); break;
		case 49:playGame("mug"); break;
		case 50:playGame("rain");  break;
		case 51:playGame("sun"); break;
		case 52:playGame("screwdriver"); break;
		case 53:playGame("pennyboard");break;
		case 54:playGame("poster"); break;
		case 55:playGame("door"); break;
		case 56:playGame("creditcard"); break;
		case 57:playGame("card"); break;
		case 58:playGame("pocket"); break;
		case 59:playGame("pocketknife"); break;
		case 60:playGame("wifi"); break;
		case 61:playGame("bluetooth"); break;
		case 62:playGame("castle"); break;
		case 63:playGame("taxi"); break;
		case 64:playGame("bulgaria"); break;
		case 65:playGame("horse"); break;
		case 66:playGame("donkey"); break;
		case 67:playGame("case"); break;
		case 68:playGame("stone"); break;
		case 69:playGame("notebook"); break;
		case 70:playGame("bank"); break;
		case 71:playGame("powerbank"); break;
		case 72:playGame("coat"); break;
		case 73:playGame("unicorn"); break;
		case 74:playGame("black"); break;
		case 75:playGame("yellow"); break;
		case 76:playGame("whip"); break;
		case 77:playGame("twek"); break;
		case 78:playGame("icecream");break;
		case 79:playGame("king"); break;
		case 80:playGame("jack"); break;
		case 81:playGame("ace"); break;
		case 82:playGame("dance"); break;
		case 83:playGame("stars"); break;
		case 84:playGame("club"); break;
		case 85:playGame("geography"); break;
		case 86:playGame("cinema"); break;
		case 87:playGame("cowboy"); break;
		case 88:playGame("usb"); break;
		case 89:playGame("charge"); break;
		case 90:playGame("dubstep"); break;
		case 91:playGame("rock"); break;
		case 92:playGame("jazz"); break;
		case 93:playGame("hiphop"); break;
		case 94:playGame("jacket");break;
		case 95:playGame("cow"); break;
		case 96:playGame("land"); break;
		case 97:playGame("magic"); break;
		case 98:playGame("wrestling"); break;
		case 99:playGame("hunting"); break;
		case 100:playGame("weed"); break;
		case 101:playGame("tank"); break;
		case 102:playGame("live"); break;
		case 103:playGame("life"); break;
		case 104:playGame("laser"); break;
		case 105:playGame("light"); break;
		case 106:playGame("lightsaber"); break;
		case 107:playGame("lemon"); break;
		case 108:playGame("hitman"); break;
		case 109:playGame("son"); break;
		case 110:playGame("daughter"); break;
		case 111:playGame("cousin"); break;
		case 112:playGame("grandmother"); break;
		case 113:playGame("grandfather"); break;
		case 114:playGame("torch"); break;
		case 115:playGame("spaceship"); break;
		case 116:playGame("muscle"); break;
		case 117:playGame("dishwasher"); break;
		case 118:playGame("lightning"); break;
		case 119:playGame("sex"); break;
		case 120:playGame("meme"); break;
		case 121:playGame("legend"); break;
		case 123:playGame("league"); break;
		case 124:playGame("snow"); break;
		case 125:playGame("rain"); break;
		case 126:playGame("hail"); break;
		case 127:playGame("job"); break;
		default: exit (1); break;
	}
}
