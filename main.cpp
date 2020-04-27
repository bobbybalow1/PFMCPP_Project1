#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

 write out 10 nouns.
 for each of the 10 nouns, write out 3 actions it might perform, in plain english.
 write out how you'd call that action in pseudo code, in the space between each block comment
 
 If the action requires multiple words, use camelCaseToNameIt
 don't forget the semi-colon after each statement
 
 When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example)
 Noun:       arm
 action 1:   the arm extends
 action 2:   the arm flexes
 action 3:   the arm rotates conter-clockwise
 */
arm.extend();
arm.flex();
arm.rotateCounterClockwise(); //demonstrates CamelCase

/*
 1)
 Noun: glass
 action 1: glass holds water
 action 2: glass holds beer
 action 3: glass holds wine
 */
glass.holdWater();
glass.holdBeer();
glass.holdWine();

/*
 2)
 Noun: pan
 action 1: pan cooks chicken
 action 2: pan cooks beef
 action 3: pan cooks veggies
 */
pan.cookChicken();
pan.cookBeef();
pan.cookVeggies();

/*
 3)
 Noun: dog
 action 1: the dog licks
 action 2: the dog smells
 action 3: the dog bites
 */
dog.lick();
dog.smell();
dog.bite();

/*
 4)
 Noun: ipad
 action 1: check email
 action 2: watch movies
 action 3: do work
 */

ipad.checkEmail();
ipad.watchMovies();
ipad.doWork();

/*
 5)
 Noun: knife
 action 1: cut
 action 2: slice
 action 3: chop
 */

knife.cut();
knife.slice();
knife.chop();

/*
 6)
 Noun: measuring cup
 action 1: measure flour
 action 2: measure water
 action 3: measure oats
 */

cup.measureFlour();
cup.measureWater();
cup.measureOats();

/*
 7)
 Noun: cutting board
 action 1: cut chicken
 action 2: cut carrots
 action 3: cut celery 
 */

cuttingBoard.chopChicken();
cuttingBoard.chopCarrots();
cuttingBoard.chopCelery();
//Can you tell I'm doing this in my kitchen?!? haha!

/*
 8)
 Noun: medicine
 action 1: take mucinex
 action 2: take pseudoephedrine
 action 3: take tylenol
 */
medicine.takeMucinex();
medicine.takePseudoephedrine();
medicine.takeTylenol();

/*
 9)
 Noun: asparagus
 action 1: throw away
 action 2: eat
 action 3: kill with fire
 */

asparagus.throwAway();
asparagus.eat();
asparagus.killWithFire();

/*
 10)
 Noun: cpp Homework
 action 1: Watch
 action 2: Comeplete assignment
 action 3: Push
 */

cppHomework.watch();
cppHomework.completeAssignment();
cppHomework.push();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
