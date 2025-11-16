#include<iostream>
#include<string>
#include<cctype>
#include<cstdlib>
#include<ctime>
#include<chrono>
#include<thread>
using namespace std;

void DetectiveSeries();
void MurderCase(int&);
void MissingChild(float&);

int main() {
	srand(time(0));
	DetectiveSeries();

	system("pause");
	return 0;
}
//main game with sub divisions on the bais of case-type
void DetectiveSeries() {
	int num, lives = 3;
	float chances = 3.0;
	cout << "Welcome to Dective Series\n";
	cout << "Enter '1' to play the murder case or '2' to play the missing child's case";
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
void MurderCase(int& s) {
	int random, v1, v2, v3, v4, v5;
	string name;
	random = rand() % 3 + 1;
	while (s > 0) {
		switch (random) {
		case 1:
			name = " Jack ";
		case 2:
			name = " Liam ";
		case 3:
			name = " Bob ";
		}
		//text intro to the case 
		cout << "The small coastal town of Westbridge was the kind of place where everyone knew everyone\n";
		cout << "and nothing ever happened—until the night young " << name << "Harper was found dead near the old lighthouse\n";
		cout << "cliffs.\n\n";
		cout << "The town froze in shock.\n\nLiam was kind, quiet, always sketching in his notebook.\nHe had no enemies.\n\nOr so it seemed.\n";
		cout << "Suspect:\n";
		cout << "Mr. Hawthorne – The Lighthouse Keeper\nAaron Blake – The School Bully\nClara Harper – Liam’s Older Sister\nDaniel Reed – The Family Friend\n";
		//beginning of the choices
		//ROUND 1
		cout << "ROUND 1 -- Investigate the Crime Scene\n";
		cout << "Choose one:\n1. Inspect footprints\n2. Inspect sketchbook\n3. Inspect cliff edge\n4. Inspect bushes far from the scene\n";
		cout << "Enter the number: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "You find two sets of footprints: one child’s, one adult male.\n";
			cout << "useful clue\n";
			++s;
		}
		else if (v1 == 2) {
			cout << "His last drawing shows a man near the lighthouse wearing a silver watch.\n";
			cout << "useful clue\n";
			++s;
		}
		else if (v1 == 3) {
			cout << "Cliff edge gives nothing new.\n";
			cout << "no useful observation made";
			--s;
		}
		else if (v1 == 4) {
			cout << "Bushes contain only seaweed.\n";
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
		//ROUND 2
		cout << "ROUND 2 -- First Suspect\n";
		cout << "Choose who to question\n1.  Clara Harper\n2. Aaron Blake\n3. Mr. Hawthorne\n4. Daniel Reed\n";
		cout << "Enter the number: ";
		cin >> v2;
		if (v2 == 3) {
			cout << "He shows his pocket watch — old and rusted.\nIt does not match Liam’s drawing.\n";
			cout << "useful clue";
			++s;
		}
		else if (v2 == 4) {
			cout << "You notice he wears a shiny silver wristwatch just like the drawing.\n";
			cout << "useful clue\n";
			++s;
		}
		else if (v2 == 1 || v2 == 2) {
			cout << "Just add emotional info but no clue.\n";
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
		//ROUND 3
		cout << "ROUND 3 -- Search for the Missing Backpack\n";
		cout << "Choose where to search\n1. Behind the lighthouse\n2. In Daniel Reed’s art studio\n3. At Liam’s home\n4. Under the wooden pier\n";
		cout << "Enter the number: ";
		cin >> v3;
		if (v3 == 1) {
			cout << "You find Liam’s backpack hidden under driftwood.\nInside is a letter he wrote about seeing someone steal money.\n";
			cout << "useful clue";
			++s;
		}
		else if (v3 == 2) {
			cout << "You find a box of stolen community funds hidden in a cabinet.\n";
			cout << "useful clue\n";
			++s;
		}
		else if (v3 == 3) {
			cout << "Home contains nothing new.\n";
			--s;
		}
		else if (v3 == 4) {
			cout << "Pier has only old nets.\n";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
		//ROUND 4
		cout << "ROUND 4 -- Final Interrogation\n";
		cout << "Choose someone to confront\n1. Mr. Hawthorne\n2. Aaron\n3. Daniel\n4. Clara \n";
		cout << "Enter the number: ";
		cin >> v4;
		if (v4 == 3) {
			cout << "You show all the gathered evidences\nHe confesses in panic.\n";
			cout << "Congrats detective!! You found the Murderer";
			++s;
		}
		else if (v4 == 1 || v4 == 2 || v4 == 4) {
			cout << "Get emotional, but no confession.\n";
			cout << "Wrong deduction detective:(\n";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
		//ROUND 5
		cout << "FINAL ROUND -- Accuse the Killer\n";
		cout << "Choose who you officially accuse:\n1. Daniel \n2. Aaron\n3. Mr. Hawthorne\n4. Clara \n";
		cout << "Enter the number: ";
		cin >> v5;
		if (v5 == 1) {
			cout << "YOU WIN THE CASE!\nJustice is served.\n";
		}
		else if (v5 == 1 || v5 == 2 || v5 == 4) {
			cout << "YOU LOSE THE CASE!\nThe real killer escapes.\n";

		}
		else {
			cout << "invalid\n";
		}
	}
}
void MissingChild(float &s) {
	int random, v1;
	string name;
	random = rand() % 3 + 1;
	while (s > 0) {
		switch (random) {
		case 1:
			name = " Anne ";
		case 2:
			name = " Marie ";
		case 3:
			name = " Lucy ";
		}
		//text intro to the case 
		cout << "A 7-year-old girl, " << name << ", vanished inside WestView Mall.\n";
		cout << "CCTV shows her walking toward the main hall.\n";
		//beginning of the choices
		//ROUND 1
		cout << "SCENARIO 1 -- Mall Entrance\n";
		cout << "Where do you start?\n1. Go to the rooftop parking\n2. Inspect the elevators\n3. Check the Information Desk\n4. Check the emergency exit\n";
		cout << "Enter the number: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "Security denies any child there.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 2) {
			cout << "Elevators show no sign of him.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 3) {
			cout << "The receptionist confirms " << name << " passed by heading toward the toy section.\n";
			cout << "useful clue";
			++s;
		}
		else if (v1 == 4) {
			cout << "Bushes contain only seaweed.\n";
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
		//ROUND 2
		cout << "SCENARIO 2 -- Toy Store\n";
		cout << "The toy store manager says a child was seen holding a blue dinosaur toy.\n";
		cout << "What do you do?\n1. Ask to see CCTV footage\n2. Search the shelves\n3. Talk to the cashier only\n4. Check the back storage\n";
		cout << "Enter the number: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "Footage shows " << name << " walking toward the food court behind someone in a red jacket.\n";
			cout << "major clue\n";
			++s;
		}
		else if (v1 == 2) {
			cout << "Toys are everywhere.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 3) {
			cout << "She saw nothing.\n";
			cout << "no useful observation made";
			--s;
		}
		else if (v1 == 4) {
			cout << "It’s locked and empty.\n";
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
		//ROUND 3
		cout << "SCENARIO 3 – Food Court\n";
		cout << "CCTV shows " << name << " entering the food court and then disappearing behind a pillar.\n";
		cout << "What next?\n1. Ask random customers\n2. Check restaurant kitchens\n3. Inspect trash bins\n4. Interview the janitor\n";
		cout << "Enter the number: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "Too many people; no solid info.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 2) {
			cout << "Employees haven't seen him.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 3) {
			cout << "Only waste\n";
			cout << "no useful observation made";
			--s;
		}
		else if (v1 == 4) {
			cout << "He saw " << name << " follow the red-jacket person toward the arcade.\n";
			cout << "useful clue";
			++s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
		//ROUND 4
		cout << "SCENARIO 4 -- Arcade Center\n";
		cout << "Inside the arcade, lights flash loudly. You ask the operator.\nHe says " << name << " entered but never played any game.\n";
		cout << "What do you check?\n1. Token machine\n2. The back emergency door\n3. Prize counter\n4. VR section\n";
		cout << "Enter the number: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "Machine contains no evidence.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 2) {
			cout << "Door camera shows Ayan exiting with the red-jacket person.\n";
			cout << "useful clue\n";
			++s;
		}
		else if (v1 == 3) {
			cout << "Worker saw nothing.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 4) {
			cout << "Crowded; no trace of him.\n";
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
		//ROUND 5
		cout << "SCENARIO 5 – Service Corridor\n";
		cout << "You enter the narrow staff-only passage.\nFootsteps echo.\n";
		cout << "What do you follow?\n1. A dropped mop\n2. The muddy shoe prints\n3. A vending machine\n4. The fire extinguisher area\n";
		cout << "Enter the number: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "It belongs to cleaning staff.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 2) {
			cout << "Prints match Ayan’s shoe size and lead deeper into the staff hallway.\n";
			cout << "useful clue\n";
			++s;
		}
		else if (v1 == 3) {
			cout << "Nothing behind it.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 4) {
			cout << "No signs of movement.\n";
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
		//ROUND 6
		cout << "SCENARIO 6 – Camera Room Door\n";
		cout << "You find a restricted door labeled “Security Access Only.”\n";
		cout << "What do you do?\n1. Try to unlock it yourself\n2. Ask security to open it\n3. Knock repeatedly\n4. Ask Walk past it\n";
		cout << "Enter the number: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "Alarm triggers; time lost.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 2) {
			cout << "Inside footage shows the red-jacket person leading " << name << " toward the storage hall.\n";
			cout << "useful clue\n";
			++s;
		}
		else if (v1 == 3) {
			cout << "No one answers.\n";
			cout << "no useful observation made";
			--s;
		}
		else if (v1 == 4) {
			cout << "You miss the most useful camera footage.\n";
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
		//ROUND 7
		cout << "SCENARIO 7 -- Storage Hallway\n";
		cout << "Dim lights flicker.\nYou spot something small on the floor.\n";
		cout << "What do you inspect?\n1. A wrapper\n2. A loose wire\n3. A trolley\n4. " << name << " blue dinosaur toy\n";
		cout << "Enter the number: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "Just a snack wrapper.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 2) {
			cout << "Maintenance issue-not a clue.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 3) {
			cout << "Empty and unrelated.\n";
			cout << "no useful observation made";
			--s;
		}
		else if (v1 == 4) {
			cout << name << " dropped this recently-he was here minutes ago.\n";
			cout << "useful clue";
			++s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
		//ROUND 8
		cout << "SCENARIO 8 – Back Loading Dock\n";
		cout << "You reach a metal loading dock where delivery trucks park.\n";
		cout << "Who do you talk to?\n1. The delivery driver standing near his truck\n2. Security guard (on break)\n3. Two workers chatting\n4. The cleaner\n";
		cout << "Enter the number: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "Driver saw a child being led toward the abandoned storage room.\n";
			cout << "major clue\n";
			++s;
		}
		else if (v1 == 2) {
			cout << "He wasn’t watching this area.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 3) {
			cout << "They didn’t notice a child.\n";
			cout << "no useful observation made";
			--s;
		}
		else if (v1 == 4) {
			cout << "He only arrived recently.\n";
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
		//ROUND 9
		cout << "SCENARIO 9 – Abandoned Storage Room\n";
		cout << "The storage room is dark and dusty.\n";
		cout << "Choose your approach?\n1. Open the supply closet\n2. Inspect the ceiling\n3. Look under a table\n4. Search the old crates\n";
		cout << "Enter the number: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "You find " << name << "'s backpack inside-he is very close\n";
			cout << "major clue\n";
			++s;
		}
		else if (v1 == 2) {
			cout << "No relevance.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 3) {
			cout << "Just boxes.\n";
			cout << "no useful observation made";
			--s;
		}
		else if (v1 == 4) {
			cout << "Full of mall decorations.\n";
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
		//ROUND 10
		cout << "SCENARIO 10 – The Final Door\n";
		cout << "You hear a faint sound from the utility room ahead.";
		cout << "What do you do?\n1. Shout loudly\n2. Kick the door\n3. Enter slowly and call " << name << "’s name\n4. Wait outside\n";
		cout << "Enter the number: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "Your shout scares him; she hides again.\n";
			cout << "You Lost The Case Detective!\n";
			break;
		}
		else if (v1 == 2) {
			cout << "Noise startles the child.\n";
			cout << "You Lost The Case Detective!\n";

		}
		else if (v1 == 3) {
			cout << name << " runs into your arms. He is safe and unharmed.\n";
			cout << "You find Ayan hidden behind cleaning equipment.\n";
			cout << "He followed the stranger because “they said they would show him something cool.\nSecurity arrives.";
			cout << "The red-jacket person is caught exiting the mall.\nYOU WIN — The child is found, safe and alive.\n";

		}
		else if (v1 == 4) {
			cout << "Time slips away.\n";
			cout << "no useful observation made";
			cout << "Time out!";
			break;

		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
	}


}



		
