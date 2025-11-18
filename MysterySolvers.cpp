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
void MurderCase(int& s) {
	int random, v1, v2, v3, v4, v5;
	string name;
	random = rand() % 3 + 1;
	while (s > 0) {
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

		cout << "Suspects:\n"; waitSeconds(1);
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
		cout<<"4.Inspect bushes far from the scene\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v1;
		if (v1 == 1) {
			cout << "\nYou found two sets of footprints.one child's and one adult male.\n"; waitSeconds(1);
			cout << "useful clue\n"; waitSeconds(1);
			++s;
		}
		else if (v1 == 2) {
			cout << "\nHis last drawing shows a man near the lighthouse wearing a silver watch.\n"; waitSeconds(1);
			cout << "useful clue\n"; waitSeconds(1);
			++s;
		}
		else if (v1 == 3) {
			cout << "\nCliff edge gives nothing new.\n"; waitSeconds(1);
			cout << "no useful observation made\n"; waitSeconds(1);
			--s;
		}
		else if (v1 == 4) {
			cout << "\nBushes contain only seaweed.\n"; waitSeconds(1);
			cout << "no useful observation made"; waitSeconds(1);
			--s;
		}
		else {
			cout << "Invalid choice\n";
		}
		cout << "\n\nyour current lives are " << s << endl; waitSeconds(1);
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
		if (v2 == 3) {
			cout << "\nHe shows his pocket watch   old and rusted.\nIt does not match" << name << "drawing.\n"; waitSeconds(1);
			cout << "Useful clue found!\n\n";
			++s;
		}
		else if (v2 == 4) {
			cout << "\nYou notice he wears a shiny silver wristwatch just like the drawing.\n"; waitSeconds(1);
			cout << "Useful clue found!\n\n";
			++s;
		}
		else if (v2 == 1) {
			cout << "\nClara breaks down,saying" << name << "was her whole world.\n";
			cout << "She says he was scared of something recently but never told her what.\n"; waitSeconds(1);
			cout << "No useful clue found.\n\n";
			--s;
		}
		else if (v2 == 2) {
			cout << "\nAaron looks guilty, but admits" << name << "once stood up to him.\n";
			cout << "He says he would never actually hurt him… and seems genuinely shaken.\n"; waitSeconds(1);
			cout << "No useful clue found.\n";
			--s;
		}
		else {
			cout << "\nInvalid choice\n\n";
		}
		cout << "\nyour current lives are " << s << endl;
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
		cout<<"4.Under the wooden pier\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v3;
		if (v3 == 1) {
			cout << "\nYou found" << name << "backpack hidden under driftwood.\nInside is a letter he wrote about seeing someone steal money.\n"; waitSeconds(1);
			cout << "Useful clue found!";
			++s;
		}
		else if (v3 == 2) {
			cout << "\nYou find a box of stolen community funds hidden in a cabinet.\n"; waitSeconds(1);
			cout << "Useful clue found!\n";
			++s;
		}
		else if (v3 == 3) {
			cout << "\nHome contains nothing new.\n"; waitSeconds(1);
			cout << "No useful clue found.\n";
			--s;
		}
		else if (v3 == 4) {
			cout << "\nPier has only old nets.\n"; waitSeconds(1);
			cout << "No useful clue found.\n";
			--s;
		}
		else {
			cout << "\nInvalid choice\n";
		}
		cout << "\nyour current lives are " << s << endl;
		//ROUND 4
		waitSeconds(1);
		cout << "\n----------------------------------------\n";
		cout << "ROUND 4 -- Final Interrogation";
		cout << "\n----------------------------------------\n"; waitSeconds(1);
		cout << "Choose someone to confront:\n"; waitSeconds(1);
		cout << "1. Mr.Hawthorne\n"; waitSeconds(1);
		cout << "2.Aaron\n"; waitSeconds(1);
		cout << "3.Daniel\n"; waitSeconds(1);
		cout<<"4.Clara\n"; waitSeconds(1);
		cout << "Enter your choice: ";
		cin >> v4;
		if (v4 == 3) {
			cout << "\nYou showed all the gathered evidences\nHe confesses in panic.\n"; waitSeconds(1);
			cout << "Congrats detective!! You found the Murderer";
			++s;
		}
		else if (v4 == 1) {
			cout << "\nMr. Hawthorne's eyes widen with pain as you accuse him.\n"; waitSeconds(2);
			cout << "\"Liam was like a grandson to me,\" he whispers. \"I’d never harm that boy.\"\n"; waitSeconds(2);
			cout << "Your accusation shakes him deeply, but reveals nothing new.\n"; waitSeconds(1);
			cout << "Wrong deduction detective :(\n";
			--s;
		}
		else if (v4 == 2) {
			cout << "\nAaron steps back, looking terrified rather than angry.\n"; waitSeconds(2);
			cout << "\"I know I bullied him... but I’d never kill him,\" he says with a cracked voice.\n"; waitSeconds(2);
			cout << "He starts crying, offering no useful information.\n"; waitSeconds(1);
			cout << "Wrong deduction detective :(\n";
			--s;
		}
		else if (v4 == 4) {
			cout << "\nClara stares at you in disbelief, tears welling in her eyes.\n"; waitSeconds(2);
			cout << "\"You're accusing me of killing my own brother?\" she whispers.\n"; waitSeconds(2);
			cout << "She breaks down completely, but gives no new clues.\n"; waitSeconds(1);
			cout << "Wrong deduction detective :(\n";
			--s;
		}
		else {
			cout << "\nInvalid\n";
		}
		cout << "\nyour current lives are " << s << endl;
		//ROUND 5
		waitSeconds(1);
		cout << "\n----------------------------------------\n";
		cout << "FINAL ROUND -- Accuse the Killer";
		cout << "\n----------------------------------------\n"; waitSeconds(1);
		cout << "Choose who you officially accuse:\n"; waitSeconds(1);
		cout << "1.Daniel \n"; waitSeconds(1);
		cout << "2.Aaron\n"; waitSeconds(1);
		cout << "3.Mr.Hawthorne\n"; waitSeconds(1);
		cout<<"4.Clara \n"; waitSeconds(1);
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
	}
}
void MissingChild(float& s) {
	int random, v1;
	string name;
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
		cout << "A 7-year-old girl," << name << ",vanished inside WestView Mall.\n";
		cout << "CCTV shows her walking towards the main hall.\n";
		//beginning of the choices
		//ROUND 1
		cout << "\n--------------------------------\n";
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
			cout << "It s locked and empty.\n";
			cout << "no useful observation made";
			--s;
		}
		else {
			cout << "invalid\n";
		}
		cout << "your current lives are " << s << endl;
		//ROUND 3
		cout << "SCENARIO 3   Food Court\n";
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
		cout << "SCENARIO 5   Service Corridor\n";
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
			cout << "Prints match Ayan s shoe size and lead deeper into the staff hallway.\n";
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
		cout << "SCENARIO 6   Camera Room Door\n";
		cout << "You find a restricted door labeled  Security Access Only. \n";
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
		cout << "SCENARIO 8   Back Loading Dock\n";
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
			cout << "He wasn t watching this area.\n";
			cout << "no useful observation made\n";
			--s;
		}
		else if (v1 == 3) {
			cout << "They didn t notice a child.\n";
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
		cout << "SCENARIO 9   Abandoned Storage Room\n";
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
		cout << "SCENARIO 10   The Final Door\n";
		cout << "You hear a faint sound from the utility room ahead.";
		cout << "What do you do?\n1. Shout loudly\n2. Kick the door\n3. Enter slowly and call " << name << " s name\n4. Wait outside\n";
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
			cout << "He followed the stranger because  they said they would show him something cool.\nSecurity arrives.";
			cout << "The red-jacket person is caught exiting the mall.\nYOU WIN   The child is found, safe and alive.\n";

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




