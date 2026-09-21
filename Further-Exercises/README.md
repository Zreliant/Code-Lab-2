# Further Exercises

The following exercises should be used if you are looking for some tougher challenges beyond those included in the chapter exercises. You should however first ensure you have worked through the main exercises included in each chapter are comfortable with all the techniques introduced before tackling those listed here.

The exercises below can be solved in a variety of ways. Tackle them in any order you wish. Each will require a mixture of the techniques introduced through the workshops so far. As new techniques are introduced you might think of ways to improve your original solutions, so go back and iterate on your solutions accordingly. 

In addition to the exercises listed below the following online resources offer a good set of coding problems:

- https://www.hackerrank.com/domains/cpp
- https://adventofcode.com/
- https://programiz.pro/community-challenges/cpp
- https://www.codechef.com/practice/cpp


&nbsp;
&nbsp;

## Quiz

Create a quiz program with at least 10 questions. The choice of questions are up to you (e.g. Capital Cities, Football Teams, Music Artists). The following are a list of desirable features:

* Scoring system
* Record of right and wrong answers
* Random ordering of questions on each play
* Replay functionality without exiting the program

&nbsp;
&nbsp;

## Maths Quiz

Develop a program that presents the user with quiz of arithmetic problems. Each "play" of the quiz should be 10 questions. The user should initially be presented with a short menu of options to select a difficulty level. It could look something like this:

```
DIFFICULTY LEVEL

1.  Easy
2.  Moderate
3.  Advanced
```

The difficulty levels determine the number of digits in the numbers to be added or subtracted. Easy means only single digit numbers; moderate means double digit numbers; and advanced means 4-digit numbers. After the user picks the level they desire, your program presents problems that look like this:

```
  45 + 9 =
  34 - 88 =
  etc
```

For each problem presented, the user is given a chance to answer. If the answer is correct, another problem is presented. If the answer is wrong, the user is to be given one more chance at that problem. The program should keep a tally of the users score, awarding 10 points for a correct answer on first attempt and 5 points on the second attempt.

You should implement a random number generator (see the resources folder) to determine:

* The values to be added or subtracted
* Whether the problem is addition or subtraction

The program should include the functions listed below. These functions should make use of parameters and return values as appropriate. You may include others or extend the functionality of the program if you see fit.

* **displayMenu:** A function that displays the difficulty level menu at the beginning of the quiz.
* **randomInt:** A function that determines the values used in each question. The min and max values of the numbers should be based on the difficulty level chosen as described above.
* **decideOperation:** A function that randomly decides whether the problem is an addition or subtraction problem and returns a char.
* **displayProblem:** A function that displays the question to the user and accepts their answer.
* **isCorrect:** A function that checks whether the users answer was correct and outputs an appropriate message
* **displayResults:** function that outputs the users final score out of a possible 100 and ranks the user based on their score (e.g. A+ for a score over 90)

Once the user has finished the quiz, prompt them to see if they'd like to play it again.


&nbsp;
&nbsp;

## Rock, Paper, Scissors

Write a program to play rock, paper, scissors against the computer. The game should be best of five goes.

#### Extension problem

* Revise the program so the player has the option of playing against the computer or against a second player.

&nbsp;
&nbsp;

## Tic Tac Toe

Write a program to play tic, tac, toe (naughts and crosses) against the computer. The game should be best of five goes.

#### Extension problem

* Revise the program so the player has the option of playing against the computer or against a second player.

&nbsp;
&nbsp;

## Tamagotchi

Write a program for a virtual pet caring game. Suggested features for this include:

* Allow user to name the pet
* Allow user to pick type of pet
* Allow user to feed the pet
* Allow user to play with the pet
* If the user neglects the pet they could fall ill and die
* If the user overfeeds the pet they could fall ill and die

#### Extension Problem

* Turn the program into a Virtual Zoo by enabling multiple pets at once (see below)
* Ensure the program makes use of functions and OOP techniques

&nbsp;
&nbsp;

## Virtual Zoo

This might be seen as an extension to the previous tamagotchi exercise listed above… Using OOP techniques begin developing a virtual zoo. The program should make use of classes to define the characteristics for an animal/species. For these classes the program should instantiate objects from these class (e.g. individual animals) to populate the zoo. The user should be able to interact with the animals (e.g. feed, pet, name).

Beyond the description above this exercise is open to your interpretation. Use your programming skills to organise the code and implement features as you desire.

&nbsp;
&nbsp;

## WarBots

Concept: In the far future, humanity uses robots to settle wars. These are called warbots. You are to build and test a program to help build the ultimate warbot.

Each bot has the following characteristics.

* Name
* Aim: which is the percentage chance of hitting between 0- 60%
* Strength: Which is the range of damage that it inflicts if it hits. This is between 1-10 points
* Armour: between 0-60%, this is the chance of a successful hit being deflected and causing no damage.
* Hits to kill: is the number of hits to kill the warbot.
* Dexterity: no maximum

The programme must allow the values of each warbot to be entered via the keyboard. Each robot has 20 points to allocate. The rules for building are:
* Aim: costs 1 construction point per 10% (maximum of 60%)
* Strength: 1 point per strength point (1-10 points)
* Armour: costs 1 construction point per 10% (maximum of 60%)
* Hits to kill: 1 construction point per 2 hits
* Dexterity: costs 1 construction point per point (no maximum)

The two warbots fight. The fight should have the following actions

* The one with the highest dexterity attacks first, if the dexterity is the same, then it is random which one attacks first.
* The attacking robot should determine if it hits by generating a random number e.g. if the aim is 50%, then it hits 50% of the time.
* The defending robot the rolls to see if its armour deflects the attack, leading to no damage.
* If the defending robot hits, deduct the strength of the attacking robot from the hits to kill of the defender.
* The defending robot now attacks.
* This carries on until the one of the robots is killed.

#### Extension problem

Ensure the program makes use of functions and OOP techniques

&nbsp;
&nbsp;

## Professor Scott and the Temple of Doom

A text based adventure game.

The party led by well-known explorer Professor Scott (and his faithful companions) is facing his most complex challenge yet. He is attempting to retrieve the Crystal Skulls for the infamous Temple of Doom. Obviously, the Temple is protected by monsters and traps. The party should start outside the Temple.

Each time someone is killed, one of the faithful companions should be removed first. Professor Scott is the last one to be killed and if he dies, then the adventure is over.

All probabilities should be shown on the screen e.g:

*“You enter the cave and there is a spike trap. It stands 40% of working." You roll 39%. Oh dear, 1 of your party is killed. What do you wish to do next?”*

### Game Rules

Each room entered should state the name of the room and any items/ monsters/ traps in it.

Player commands include N (move north), S (move south), W (move west) E (move east), A (attack), F (flee), P item name (e.g. P torch), I (inventory- a list of the what the party is carrying).

The temple should consist of a maximum of 30 rooms/ corridors/ other locations. Items can include treasure, torch, weapon etc…

Any room with a trap only activates once (i.e. if you return to the room, nothing happens).

A monster(s) can attack anyone in the room until the monster is dead or the party flees. The chance of trap working or a monster successfully attacking (and killing one of the party) should be random e.g. a pit trap stands a 40% chance of killing someone if the part does not have a torch, 20% if they do.

#### Extension Problem

* The contents of each room should be read from a file. The player should have the option to save the game during play
* The program should implement functions and OOP techniques

&nbsp;
&nbsp;

## Football Draw

The World Cup football tournament is approaching and as part of its marketing plan FIFA wishes to run a simulated world cup to predict the winner before the main tournament begins. Create a program that simulates the knockout stages of the tournament, beginning with a round of 16 and whittling the teams down through Quarter Finals, Semi Finals and the Final.

At each stage the program should randomly draw the teams and simulate the results of each match. The winning team should move into the next round until the winner is decided in the final. If the result is a draw the program should determine a winner on penalties.

When developing your application you should aim to make the results realistic (e.g 100 - 0 is not a realistic scoreline). The teams included in the program should be determined by the top 16 teams in the world rankings.

The programming techniques used for this task is up to you, but you should aim to make use of vectors or other STL containers and algorithm functions.

#### Extension Problem

* Implement a system that takes into account the quality of each team (Note: this does not mean the ‘best’ team should win, but it might be harder for lower ranked teams to gain a result)
* Extend the program to handle the group stage prior to the knockout phase. In this instance teams should initially be allocated into eight groups of four teams. Teams in each group should play each other once, receiving 3 points for a win, 1 point for a draw and 0 for a loss. At the end of the group stage the top two teams go forward into the last 16.

&nbsp;
&nbsp;

