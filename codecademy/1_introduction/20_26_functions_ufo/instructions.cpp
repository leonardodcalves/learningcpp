/*

Learn C++
UFO
It’s game time! And by that we mean, it’s time for you to roll up your sleeves and build a game: UFO.

ufo abduction
The premise:

Invaders from outer space have arrived and are abducting humans using tractor beams. 
Players must crack the codeword to stop the abduction!

Ok, we’ll admit it’s quite a bit like that classic game, “Hangman”, but with a better 
premise. Plus, building this command-line game was the Codecademy 2019 Software Engineer 
Internship Backend Programming Challenge!

Note: This is a more involved project, so please feel free to take breaks as needed.

Tasks
0/20 complete
Mark the tasks as complete by checking them off
Probing the environment:
1.
First, explore the three files we’ve provided:

ufo.cpp: the main program file.
ufo_functions.hpp: the header file, where you’ll store function declarations.
ufo_functions.cpp: the file where you’ll store function definitions.
Setting up:
2.
Define a void function greet() in ufo_functions.cpp that prints out the game title 
and instructions for the player:

=============
UFO: The Game
=============
Instructions: save your friend from alien abduction by guessing the letters in the 
codeword.

Copy to Clipboard

Add the function’s declaration to ufo_functions.hpp and call the function in main().

3.
Declare and initialize two new std::string variables in main():

codeword: This is the codeword the player is trying to guess. Let’s make it "codecademy".
answer: This value displays correctly guessed letters with blanks in between. Set it 
equal to a string of underscores the length of "codecademy".
4.
Still in main(), initialize a new integer variable misses with a value of 0.

5.
A bunch happens on each player turn (we’ll get into that shortly). This code repeats 
until the player guesses the codeword or the UFO completes its abduction.

Set up a while loop that continues as long as BOTH of the following conditions are true:

answer is not equal to codeword.
misses is less than 7 (at seven misses, the person gets abducted).
VERY IMPORTANT: To prevent an infinite loop, add misses++ at the end of the while loop.

(If you do not increment misses at the end of the loop, your code will not save and the 
site may stop responding.)

6.
Before you get into the nitty gritty of player turns, let’s skip to when the player 
has either won or lost the game.

Below the while loop, check if the player has won (answer would be equal to codeword).

If the player won, print "Hooray! You saved the person and earned a medal of honor!"
Otherwise, print "Oh no! The UFO just flew away with another person!"
7.
Move this last if/else block into a new function end_game() that allows you to pass the 
strings answer and codeword as arguments.

Remember to add the function declaration to ufo_functions.hpp and the function definition 
to ufo_functions.cpp.

Below the while loop in ufo.cpp, all you should have left is a function call of end_game() 
with the necessary arguments;

8.
Try running the code in the bash terminal!

You should see the greeting and the exit message you added.

Taking a turn:
9.
At the start of a turn, let’s display the player’s abduction status by way of UFO abduction 
ASCII art. Inside of the while loop in main(), call display_misses() with an argument of misses.

10.
There are two more things to display on each turn: the player’s incorrect guesses and 
the answer so far.

In main() above the while loop, create a char vector incorrect that we can add to on each 
iteration of the loop.

Also there, initialize a bool named guess as false. This will track whether the player 
guessed a correct letter.

11.
Below your call of display_misses() in the while loop, print out "Incorrect Guesses:".

Iterate through the incorrect vector and print out each character in incorrect followed 
by a space.

12.
Next, display the player’s current answer:

Print out "Codeword:".
Iterate through answer and print each character followed by a space.
13.
Move these last two bits of code featuring incorrect and answer into a new function 
display_status().

The definition of display_status() in ufo_functions.cpp should have parameters that will 
allow you to pass incorrect and answer as arguments.

Call this function below display_misses() in the while loop in ufo.cpp.

Make sure to add the function declaration to ufo_functions.hpp.

Test your code — is everything working as expected?

14.
Time to get player input!

Above the while loop in main(), declare a new char variable letter to capture the 
player’s guessed letter.
Inside the while loop, below display_status():
Print out "Please enter your guess: ".
Capture the player response with letter.
15.
Below the user input, loop through each character in codeword to see if the player was 
right!

16.
On each iteration of the for loop, check if letter is the same as the current character 
in codeword. If it is:

Set answer[i] equal to letter.
Change guess to true.
17.
Below the for loop (still inside of main()), check if the player guessed a letter 
correctly!

If they did, print "Correct!"
Otherwise:
Print "Incorrect! The tractor beam pulls the person in further."
Add letter to the incorrect vector.
18.
Move misses++ into the else statement so that misses only increments if the guess was 
false.

19.
If you compile and execute, stuff is starting to come together (Nice!).

But if you make a correct guess (e.g., “e”) and then an incorrect guess (e.g., “w”), 
the game still says you are correct because guess remains true.

Reset guess to false at the end of the while loop. Now guess only becomes true again 
if another correct letter is selected.

20.
Congratulations! You’ve made it!

Play UFO to your heart’s content.

*/