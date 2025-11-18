# Detective Series – A Text-Based Investigation Game

## Team Information

**Project Title:** Detective Series  
**Team Members:**
- **Aliza Batool** –
- **Abeeha Noor** – 
- **Fatima Zahra Mustapha** –
## Program Description
**Detective Series** is an interactive text-based mystery game where you play as a detective solving one of two criminal cases:

- **Murder Case**
- **Missing Child Case**

Your objective is to make smart decisions, follow clues, interrogate suspects, and solve the mystery before you run out of lives.

## How to Play

1. Run the program using any C++ compiler.
2. The game begins with a welcome screen.
3. Select a case:
   - Press **1** → Murder Case  
   - Press **2** → Missing Child Case
4. In each round, choose an option by typing **1–4** and press **Enter**.
5. Correct actions **increase** your lives; wrong actions **decrease** them.
6. The game ends when:
   - You correctly accuse the killer (**Win**)
   - You accuse the wrong person (**Lose**)
   - You reach the final door in the Missing Child case
   - Your lives reach **0** (**Lose**)

## Lives / Score System

### Murder Case
- Lives start at **3**

### Missing Child Case
- Chances start at **3**

### Life Rules
- Correct decisions = **Gain 1 life**
- Wrong decisions = **Lose 1 life**
- Lives reaching **0** = automatic **loss**

## Features

- Multi-stage gameplay  
  *(up to **10 rounds** in Missing Child case)*
- Interrogations
- Randomized victim name
- Progressive difficulty
- Dramatic timed delays
- ## Modular Programming Structure
The game is organized using a modular approach with the following functions:
1. **`DetectiveSeries();`**
2. **`MurderCase();`**
3. **`MissingChild();`**
4. **`waitSeconds();`**

