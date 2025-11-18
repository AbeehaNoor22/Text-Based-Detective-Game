#include<iostream>
#include<string>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<chrono>
#include<thread>
using namespace std;

void DetectiveSeries();
void MurderCase(int);
void MissingChild(float);
void waitSeconds(int sec);

int main() {
	srand(time(0));
	DetectiveSeries();

	system("pause");
	return 0;
}
//added delay helper function
void waitSeconds(int sec) {
	std::this_thread::sleep_for(std::chrono::seconds(sec));
}
//main game with sub divisions on the basis of case-type
void DetectiveSeries() {
	int num, lives = 3;
	float chances = 3.0;
	cout << "=============================\n";
	cout << "Welcome to Detective Series\n";
	cout << "=============================\n";
	waitSeconds(1);
	cout << "\nChoose a case to play: \n";

	cout << "1.Murder case\n2.Missing child's case\nEnter your choice: ";
	cin >> num;
	switch (num) {
	case 1:
		MurderCase(lives);
		break;
	case 2:
		MissingChild(chances);
		break;
	default:
		cout << "Invalid Number entered\n";
		break;
	}
}
//mystery murder case
void MurderCase(int s) {
	int random, v1, v2, v3, v4, v5;
	char restarter;
	string name, decoded;
	random = rand() % 3 + 1;
	while (true) {
		switch (random) {
		case 1:
			name = " Jack ";
			break;
		case 2:
			name = " Liam ";
			break;
		case 3:
			name = " Bob ";
			break;
		}

		// text intro to the case 
		waitSeconds(1);
		cout << "\n------------------\n";
		cout << "THE MURDER CASE";
		cout << "\n------------------\n\n";
		waitSeconds(1);
		cout << "The small coastal town of Westbridge was the kind of place where everyone knew everyone and nothing\n"; waitSeconds(3);
		cout << "ever happened - until the night young" << name << "Harper was found dead near the old lighthouse cliffs.\n\n"; waitSeconds(3);
		cout << "The town froze in shock." << name << "was kind,quiet,always sketching in his notebook.He had no enemies.\n\n"; waitSeconds(3);
		cout << "Or so it seemed.\n\n"; waitSeconds(1);
		cout << "You are called in as the detective.\n"; waitSeconds(1);
		cout << "You initially have 3 chances; every incorrect choice decreases the number of chances\n\n"; waitSeconds(1);
		cout << "Following are your key suspects:\n"; waitSeconds(1);
		cout << "1.Mr. Hawthorne - The Lighthouse Keeper\n"; waitSeconds(1);
		cout << "2.Aaron Blake - The School Bully\n"; waitSeconds(1);
		cout << "3.Clara Harper -" << name << "Older Sister\n"; waitSeconds(1);
		cout << "4.Daniel Reed - The Family Friend\n\n"; waitSeconds(1);

		//ROUND 1
		waitSeconds(1);
		cout << "\n----------------------------------------\n";
		cout << "ROUND 1 -- Investigate the Crime Scene";
		cout << "\n----------------------------------------\n"; waitSeconds(1);
		cout << "Choose one:\n";
		cout << "1.Inspect footprints\n"; waitSeconds(1);
		cout << "2.Inspect sketchbook\n"; waitSeconds(1);
		cout << "3.Inspect cliff edge\n"; waitSeconds(1);
		cout << "4.Inspect bushes far from the scene\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "\nYou found two sets of male footprints.\n"; waitSeconds(1);
			cout << "Useful clue!\nLets proceed forward!\n"; waitSeconds(1);
		}
		else if (v1 == 2) {
			cout << "\nHis last drawing shows a man near the lighthouse wearing a silver watch.\n"; waitSeconds(1);
			cout << "Useful clue!\nLets proceed forward!\n"; waitSeconds(1);

		}
		else if (v1 == 3) {
			cout << "\nCliff edge gives nothing new.\n"; waitSeconds(1);
			cout << "No useful observation made.\n Your chances decreased by one !\n"; waitSeconds(1);
			--s;
		}
		else if (v1 == 4) {
			cout << "\nBushes contain only seaweed.\n"; waitSeconds(1);
			cout << "No useful observation made.\n Your chances decreased by one!\n"; waitSeconds(1);
			--s;
		}
		else {
			cout << "Invalid choice\n";
		}
		cout << "\n\nYour current chances are " << s << endl; waitSeconds(1);

		//ROUND 2
		waitSeconds(1);
		cout << "\n----------------------------------------\n";
		cout << "ROUND 2 -- First Suspect";
		cout << "\n----------------------------------------\n"; waitSeconds(1);
		cout << "Choose who to question\n";
		cout << "1.Clara Harper\n"; waitSeconds(1);
		cout << "2.Aaron Blake\n"; waitSeconds(1);
		cout << "3.Mr.Hawthorne\n"; waitSeconds(1);
		cout << "4.Daniel Reed\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v2;

		if (v2 == 1) {
			cout << "\nClara breaks down,saying" << name << "was her whole world.\n";
			cout << "She says he was scared of something recently but never told her what.\n"; waitSeconds(1);
			cout << "No useful clue found.\nYour chances decreased by one!\n\n";
			--s;
		}
		else if (v2 == 2) {
			cout << "\nAaron looks guilty, but admits" << name << "once stood up to him.\n";
			cout << "He says he would never actually hurt him… and seems genuinely shaken.\n"; waitSeconds(1);
			cout << "No useful clue found.\nYour chances decreased by one!\n";
			--s;
		}
		else if (v2 == 3) {
			if (v1 == 1) {
				cout << "You enquire for his shoes but their sole doesn't resembel those found in footprint trail, \nwhich confirms that it was not him.\n";
				cout << "Useful clue found!\nLets proceed forward!\n\n";
			}
			else if (v1 == 2) {
				cout << "\nHe shows his pocket watch old and rusted.\nIt does not match" << name << "drawing.\n"; waitSeconds(1);
				cout << "Useful clue found.\nLets proceed forward!\n\n";
			}
			else if (v1 == 3 || v1 == 4) {
				cout << "\nYou interrogate but he seems shaken and replies emotionally.\n"; waitSeconds(1);
				cout << "No useful clue found.\nYour chances decreased by one!\n\n";
				--s;
			}
		}
		else if (v2 == 4) {
			if (v1 == 1) {
				cout << "You enquire for his shoes and their sole resembels those found in footprint trail.\n";
				cout << "Useful clue found!\nLets proceed forward!\n\n";
			}
			else if (v1 == 2) {
				cout << "\nYou notice he wears a shiny silver wristwatch just like the drawing.\n"; waitSeconds(1);
				cout << "Useful clue found!\n\n";
			}
			else if (v1 == 3 || v1 == 4) {
				cout << "\nYou interrogate but he seems carefree and answers in an anxious manner.\n"; waitSeconds(1);
				cout << "Useful observation!\nLets move forward!\n\n";
			}
		}
		else {
			cout << "\nInvalid choice\n\n";
		}
		cout << "\nYour current chances are " << s << endl;
		//ROUND 3
		waitSeconds(1);
		cout << "\n----------------------------------------\n";
		cout << "ROUND 3 -- Search for the Missing Backpack";
		cout << "\n----------------------------------------\n";
		waitSeconds(1);
		cout << "Choose where to search:\n"; waitSeconds(1);
		cout << "1.Behind the lighthouse\n"; waitSeconds(1);
		cout << "2.In Daniel Reed's art studio\n"; waitSeconds(1);
		cout << "3.At" << name << "home\n"; waitSeconds(1);
		cout << "4.Under the wooden pier\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v3;
		if (v3 == 1) {
			cout << "\nYou found" << name << "backpack hidden under driftwood.\nInside is a letter he wrote about seeing someone steal money.\n"; waitSeconds(1);
			cout << "Useful clue found!";
		}
		else if (v3 == 2) {
			cout << "\nYou find a box of stolen community funds hidden in a cabinet.\n"; waitSeconds(1);
			cout << "Useful clue found!\n";
		}
		else if (v3 == 3) {
			cout << "\nHome contains nothing new.\n"; waitSeconds(1);
			cout << "No useful clue found.\nYour chances decrease by one!\n";
			--s;
		}
		else if (v3 == 4) {
			cout << "\nPier has only old nets.\n"; waitSeconds(1);
			cout << "No useful clue found.\nYour chances decrease by one!\n";
			--s;
		}
		else {
			cout << "\nInvalid choice\n";
		}
		cout << "\nYour current chances are " << s << endl;
		if (s == 0) { cout << "Oops!Your out of chances detective!\n"; break; }
		//ROUND 4
		waitSeconds(1);
		cout << "\n----------------------------------------\n";
		cout << "ROUND 4 -- Final Interrogation";
		cout << "\n----------------------------------------\n"; waitSeconds(1);
		cout << "Choose someone to confront:\n"; waitSeconds(1);
		cout << "1. Mr.Hawthorne\n"; waitSeconds(1);
		cout << "2.Aaron\n"; waitSeconds(1);
		cout << "3.Daniel\n"; waitSeconds(1);
		cout << "4.Clara\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v4;
		if (v4 == 3) {
			cout << "\nYou showed all the gathered evidences\nHe confesses in panic.\n"; waitSeconds(1);
			cout << "Congrats detective!! You found the Murderer";
		}
		else if (v4 == 1) {
			cout << "\nMr. Hawthorne's eyes widen with pain as you accuse him.\n"; waitSeconds(2);
			cout << "\"Liam was like a grandson to me,\" he whispers. \"I’d never harm that boy.\"\n"; waitSeconds(2);
			cout << "Your accusation shakes him deeply, but reveals nothing new.\n"; waitSeconds(1);
			cout << "Wrong deduction Detective :(\n";
			--s;
		}
		else if (v4 == 2) {
			cout << "\nAaron steps back, looking terrified rather than angry.\n"; waitSeconds(2);
			cout << "\"I know I bullied him... but I’d never kill him,\" he says with a cracked voice.\n"; waitSeconds(2);
			cout << "He starts crying, offering no useful information.\n"; waitSeconds(1);
			cout << "Wrong deduction Detective :(\n";
			--s;
		}
		else if (v4 == 4) {
			cout << "\nClara stares at you in disbelief, tears welling in her eyes.\n"; waitSeconds(2);
			cout << "\"You're accusing me of killing my own brother?\" she whispers.\n"; waitSeconds(2);
			cout << "She breaks down completely, but gives no new clues.\n"; waitSeconds(1);
			cout << "Wrong deduction Detective :(\n";
			--s;
		}
		else {
			cout << "\nInvalid\n";
		}
		cout << "\nyour current chances are " << s << endl;
		if (s == 0) { cout << "You have only kne chance to get a life Detective!\n"; }
		//loop does not break even if lifes are 0 because the player gets one more chance to get mor lives
		//BONUS ROUND
		cout << "\n----------------------------------------\n";
		cout << "  **BONUS ROUND** 			\n";
		cout << "\n----------------------------------------\n"; waitSeconds(1);
		cout << "Case-sensitive code is hidden in the following riddle\nHatch the code to catch a bonus life!:\n";
		cout << "Some words don’t like to be understood at first glance.\n";
		cout << "They've taken a tiny leap forward in their journey through the alphabet.\n";
		cout << "To uncover the truth, you must guide each letter backward along the path it traveled-but only a five steps.\n";
		cout << "The word is *Rzwijw*\n";
		cin >> decoded;
		if (decoded == "Murder") {
			cout << "Amazing! You got a bonus chances!";
			++s;
			cout << "\n\nYour current chances are " << s << endl; waitSeconds(1);
		}
		if (s == 0) { cout << "Oops!You couldn't avail the bonus chance Detective!!\n"; break; }
		//ROUND 5
		waitSeconds(1);
		cout << "\n----------------------------------------\n";
		cout << "FINAL ROUND -- Accuse the Killer";
		cout << "\n----------------------------------------\n"; waitSeconds(1);
		cout << "Choose who you officially accuse:\n"; waitSeconds(1);
		cout << "1.Daniel \n"; waitSeconds(1);
		cout << "2.Aaron\n"; waitSeconds(1);
		cout << "3.Mr.Hawthorne\n"; waitSeconds(1);
		cout << "4.Clara \n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v5;
		if (v5 == 1) {
			cout << "\nYou step forward and accuse Daniel Reed.\n"; waitSeconds(2);
			cout << "His face drains of color as the evidence is laid before him.\n"; waitSeconds(2);
			cout << "\"I-I didn't mean for it to happen...\" he mutters.\n"; waitSeconds(2);
			cout << "The officers take him away as the town finally exhales.\n"; waitSeconds(2);
			cout << "\nYOU WIN THE CASE!\nJustice is served.\n";
		}
		else if (v5 == 2) {
			cout << "\nAaron looks shocked and terrified.\n"; waitSeconds(2);
			cout << "\"What? I bullied him, but I'd never kill him!\" he cries.\n"; waitSeconds(2);
			cout << "The real killer watches quietly... and walks free.\n"; waitSeconds(2);
			cout << "\nYOU LOSE THE CASE!\nThe real murderer escapes.\n"; waitSeconds(2);
		}
		else if (v5 == 3) {
			cout << "\nMr. Hawthorne looks heartbroken.\n"; waitSeconds(2);
			cout << "\"Detective..." << name << "was like family to me, \" he whispers.\n"; waitSeconds(2);
			cout << "Your mistake lets the true killer slip away into the night.\n"; waitSeconds(2);
			cout << "\nYOU LOSE THE CASE!\nThe real murderer escapes.\n"; waitSeconds(2);
		}
		else if (v5 == 4) {
			cout << "\nClara collapses into tears, horrified by your accusation.\n"; waitSeconds(2);
			cout << "\"I loved my brother more than anything...\" she cries.\n"; waitSeconds(2);
			cout << "The real killer is long gone by the time you realize your error.\n"; waitSeconds(2);
			cout << "\nYOU LOSE THE CASE!\nThe real murderer escapes.\n"; waitSeconds(2);
		}
		else {
			cout << "Invalid choice\n";
		}
		cout << "Enter 'N' to exit the game or 'Y' to continue\n";
		cin >> restarter;
		if (restarter == 'y' || restarter == 'Y') { continue; }
		else if (restarter == 'n' || restarter == 'N') { break; }
	}
}
void MissingChild(float s) {
	int random, v1;
	string name;
	char restarter;
	random = rand() % 3 + 1;
	while (s > 0) {
		switch (random) {
		case 1:
			name = " Anne ";
			break;
		case 2:
			name = " Marie ";
			break;
		case 3:
			name = " Lucy ";
			break;
		}
		//text intro to the case 
		cout << "A 7-year-old girl," << name << ",vanished inside WestView Mall.\n"; waitSeconds(2);
		cout << "CCTV shows her walking towards the main hall.\n";
		waitSeconds(1);
		//beginning of the choices
		//ROUND 1	
		waitSeconds(1);
		cout << "\n--------------------------------\n";
		cout << "SCENARIO 1 -- Mall Entrance";
		cout << "\n--------------------------------\n";
		waitSeconds(1);
		cout << "Where do you start?\n";	waitSeconds(1);
		cout << "1.Go to the rooftop parking\n";	waitSeconds(1);
		cout << "2.Inspect the elevators\n";	waitSeconds(1);
		cout << "3.Check the Information Desk\n";	waitSeconds(1);
		cout << "4.Check the emergency exit\n";	waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "\nSecurity denies any child there.\n"; waitSeconds(1);
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 2) {
			cout << "\nElevators show no sign of him.\n"; waitSeconds(1);
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 3) {
			cout << "\nThe receptionist confirms " << name << " passed by this place.\n"; waitSeconds(1);
			cout << "useful clue";
			++s;
		}
		else if (v1 == 4) {
			cout << "\nBushes contain only seaweed.\n"; waitSeconds(1);
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "Invalid\n";
		}
		cout << "\nyour current lives are " << s << endl;
		//ROUND 2
		waitSeconds(1);
		cout << "\n--------------------------------\n";
		cout << "SCENARIO 2 -- Toy Store";
		cout << "\n--------------------------------\n"; waitSeconds(1);
		cout << "You enter the toy store,he manager says the child was seen holding a blue dinosaur toy.\n"; waitSeconds(1);
		cout << "What do you do?\n"; waitSeconds(1);
		cout << "1.Ask to see CCTV footage\n"; waitSeconds(1);
		cout << "2.Search the shelves\n"; waitSeconds(1);
		cout << "3.Talk to the cashier only\n"; waitSeconds(1);
		cout << "4.Check the back storage\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "\nFootage shows " << name << " walking toward the food court behind someone in a red jacket.\n"; waitSeconds(1);
			cout << "major clue\n";
			++s;
		}
		else if (v1 == 2) {
			cout << "\nToys are everywhere.\n"; waitSeconds(1);
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 3) {
			cout << "\nShe saw nothing.\n"; waitSeconds(1);
			cout << "no useful observation made";
			--s;
		}
		else if (v1 == 4) {
			cout << "\nIt's locked and empty.\n"; waitSeconds(1);
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "\nyour current lives are " << s << endl;
		//ROUND 3
		waitSeconds(1);
		cout << "\n--------------------------------\n";
		cout << "SCENARIO 3 -- Food Court";
		cout << "\n--------------------------------\n"; waitSeconds(1);
		cout << "CCTV shows " << name << " entering the food court and then disappearing behind a pillar.\n"; waitSeconds(1);
		cout << "What next?\n"; waitSeconds(1);
		cout << "1.Ask random customers\n"; waitSeconds(1);
		cout << "2.Check restaurant kitchens\n"; waitSeconds(1);
		cout << "3.Inspect trash bins\n"; waitSeconds(1);
		cout << "4.Interview the janitor\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "\nToo many people; no solid info.\n"; waitSeconds(1);
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 2) {
			cout << "\nEmployees haven't seen him.\n"; waitSeconds(1);
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 3) {
			cout << "\nOnly waste\n"; waitSeconds(1);
			cout << "no useful observation made";
			--s;
		}
		else if (v1 == 4) {
			cout << "\nHe saw " << name << " follow the red-jacket person toward the arcade.\n"; waitSeconds(1);
			cout << "useful clue";
			++s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "\nyour current lives are " << s << endl;
		if (s == 0) { cout << "Oops!Your out of lives detective!\n"; break; }
		//ROUND 4
		waitSeconds(1);
		cout << "\n--------------------------------\n";
		cout << "SCENARIO 4 -- Arcade Center";
		cout << "\n--------------------------------\n"; waitSeconds(1);
		cout << "Inside the arcade, lights flash loudly. You ask the operator.\nHe says " << name << " entered but never played any game.\n"; waitSeconds(1);
		cout << "What do you check?\n"; waitSeconds(1);
		cout << "1.Token machine\n"; waitSeconds(1);
		cout << "2.The back emergency door\n"; waitSeconds(1);
		cout << "3.Prize counter\n"; waitSeconds(1);
		cout << "4.VR section\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "\nMachine contains no evidence.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 2) {
			cout << "\nDoor camera shows" << name << "exiting with the red - jacket person.\n"; waitSeconds(1);
			cout << "useful clue\n";
			++s;
		}
		else if (v1 == 3) {
			cout << "\nWorker saw nothing.\n"; waitSeconds(1);
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 4) {
			cout << "\nCrowded; no trace of him.\n"; waitSeconds(1);
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "\nyour current lives are " << s << endl;
		if (s == 0) { cout << "Oops!Your out of lives detective!\n"; break; }
		//ROUND 5
		waitSeconds(1);
		cout << "\n--------------------------------\n";
		cout << "SCENARIO 5 -- Service Corridor";
		cout << "\n--------------------------------\n"; waitSeconds(1);
		cout << "You enter the narrow staff-only passage.\nFootsteps echo.\n"; waitSeconds(1);
		cout << "What do you follow?\n"; waitSeconds(1);
		cout << "1. A dropped mop\n"; waitSeconds(1);
		cout << "2.The muddy shoe prints\n"; waitSeconds(1);
		cout << "3.A vending machine\n"; waitSeconds(1);
		cout << "4.The fire extinguisher area\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "\nIt belongs to cleaning staff.\n"; waitSeconds(1);
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 2) {
			cout << "\nPrints match Ayan s shoe size and lead deeper into the staff hallway.\n"; waitSeconds(1);
			cout << "useful clue\n";
			++s;
		}
		else if (v1 == 3) {
			cout << "\nNothing behind it.\n"; waitSeconds(1);
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 4) {
			cout << "\nNo signs of movement.\n"; waitSeconds(1);
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "\nyour current lives are " << s << endl;
		if (s == 0) { cout << "Oops!Your out of lives detective!\n"; break; }
		//ROUND 6
		waitSeconds(1);
		cout << "\n--------------------------------\n";
		cout << "SCENARIO 6 -- Camera Room Door";
		cout << "\n--------------------------------\n"; waitSeconds(1);
		cout << "You find a restricted door labeled  Security Access Only. \n"; waitSeconds(1);
		cout << "What do you do?\n"; waitSeconds(1);
		cout << "1.Try to unlock it yourself\n"; waitSeconds(1);
		cout << "2.Ask security to open it\n"; waitSeconds(1);
		cout << "3.Knock repeatedly\n"; waitSeconds(1);
		cout << "4.Ask Walk past it\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "\nAlarm triggers; time lost.\n"; waitSeconds(1);
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 2) {
			cout << "\nInside footage shows the red-jacket person leading " << name << " toward the storage hall.\n"; waitSeconds(1);
			cout << "useful clue\n";
			++s;
		}
		else if (v1 == 3) {
			cout << "\nNo one answers.\n"; waitSeconds(1);
			cout << "no useful observation made";
			--s;
		}
		else if (v1 == 4) {
			cout << "\nYou miss the most useful camera footage.\n"; waitSeconds(1);
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "\nyour current lives are " << s << endl;
		if (s == 0) { cout << "Oops!Your out of lives detective!\n"; break; }
		//ROUND 7
		waitSeconds(1);
		cout << "\n--------------------------------\n";
		cout << "SCENARIO 7 -- Storage Hallway";
		cout << "\n--------------------------------\n"; waitSeconds(1);
		cout << "Dim lights flicker.\nYou spot something small on the floor.\n"; waitSeconds(1);
		cout << "What do you inspect?\n"; waitSeconds(1);
		cout << "1.A wrapper\n"; waitSeconds(1);
		cout << "2.A loose wire\n"; waitSeconds(1);
		cout << "3.A trolley\n"; waitSeconds(1);
		cout << "4." << name << "blue dinosaur toy\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "\nJust a snack wrapper.\n"; waitSeconds(1);
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 2) {
			cout << "\nMaintenance issue-not a clue.\n"; waitSeconds(1);
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 3) {
			cout << "\nEmpty and unrelated.\n"; waitSeconds(1);
			cout << "no useful observation made";
			--s;
		}
		else if (v1 == 4) {
			cout << "\n" << name << " dropped this recently-he was here minutes ago.\n"; waitSeconds(1);
			cout << "useful clue";
			++s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
		if (s == 0) { cout << "Oops!Your out of lives detective!\n"; break; }
		//ROUND 8
		waitSeconds(1);
		cout << "\n--------------------------------\n";
		cout << "SCENARIO 8 -- Back Loading Dock";
		cout << "\n--------------------------------\n"; waitSeconds(1);
		cout << "You reach a metal loading dock where delivery trucks park.\n"; waitSeconds(1);
		cout << "Who do you talk to?\n";
		cout << "1.The delivery driver standing near his truck\n"; waitSeconds(1);
		cout << "2.Security guard(on break)\n"; waitSeconds(1);
		cout << "3.Two workers chatting\n"; waitSeconds(1);
		cout << "4.The cleaner\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "\nDriver saw a child being led toward the abandoned storage room.\n"; waitSeconds(1);
			cout << "major clue\n";
			++s;
		}
		else if (v1 == 2) {
			cout << "\nHe wasn t watching this area.\n"; waitSeconds(1);
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 3) {
			cout << "\nThey didn t notice a child.\n"; waitSeconds(1);
			cout << "no useful observation made";
			--s;
		}
		else if (v1 == 4) {
			cout << "\nHe only arrived recently.\n"; waitSeconds(1);
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "\nyour current lives are " << s << endl;
		if (s == 0) { cout << "Oops!Your out of lives detective!\n"; break; }
		//ROUND 9
		waitSeconds(1);
		cout << "\n--------------------------------\n";
		cout << "SCENARIO 9 -- Abandoned Storage Room";
		cout << "\n--------------------------------\n"; waitSeconds(1);
		cout << "The storage room is dark and dusty.\n"; waitSeconds(1);
		cout << "Choose your approach?\n"; waitSeconds(1);
		cout << "1.Open the supply closet\n"; waitSeconds(1);
		cout << "2.Inspect the ceiling\n"; waitSeconds(1);
		cout << "3.Look under a table\n"; waitSeconds(1);
		cout << "4.Search the old crates\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "\nYou find" << name << "backpack inside-he is very close\n"; waitSeconds(1);
			cout << "major clue\n";
			++s;
		}
		else if (v1 == 2) {
			cout << "\nNo relevance.\n"; waitSeconds(1);
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 3) {
			cout << "\nJust boxes.\n"; waitSeconds(1);
			cout << "no useful observation made";
			--s;
		}
		else if (v1 == 4) {
			cout << "\nFull of mall decorations.\n"; waitSeconds(1);
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "\nyour current lives are " << s << endl;
		if (s == 0) { cout << "Oops!Your out of lives detective!\n"; break; }
		//ROUND 10
		waitSeconds(1);
		cout << "\n--------------------------------\n";
		cout << "SCENARIO 10 -- The Final Door";
		cout << "\n--------------------------------\n"; waitSeconds(1);
		cout << "You hear a faint sound from the utility room ahead."; waitSeconds(1);
		cout << "What do you do?\n"; waitSeconds(1);
		cout << "1.Shout loudly\n"; waitSeconds(1);
		cout << "2.Kick the door\n"; waitSeconds(1);
		cout << "3.Enter slowly and call" << name << "'s name\n"; waitSeconds(1);
		cout << "4.Wait outside\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "\nYour shout scares him; she hides again.\n"; waitSeconds(1);
			cout << "You Lost The Case Detective!\n";
		}
		else if (v1 == 2) {
			cout << "\nNoise startles the child.\n"; waitSeconds(1);
			cout << "You Lost The Case Detective!\n";

		}
		else if (v1 == 3) {
			cout << name << " runs into your arms.He is safe and unharmed.\n"; waitSeconds(2);
			cout << "You find Ayan hidden behind cleaning equipment.\n"; waitSeconds(2);
			cout << "He followed the stranger because  they said they would show him something cool.\nSecurity arrives."; waitSeconds(2);
			cout << "The red-jacket person is caught exiting the mall.\nYOU WIN!! The child is found, safe and alive.\n"; waitSeconds(2);

		}
		else if (v1 == 4) {
			cout << "\nTime slips away.\n"; waitSeconds(1);
			cout << "no useful observation made"; waitSeconds(1);
			cout << "Time out!";

		}
		else {
			cout << "invalid\n";
		}

		cout << "Enter 'N' to exit the game or 'Y' to continue\n";
		cin >> restarter;
		if (restarter == 'y' || restarter == 'Y') { continue; }
		else if (restarter == 'n' || restarter == 'N') { break; }
	}

}



