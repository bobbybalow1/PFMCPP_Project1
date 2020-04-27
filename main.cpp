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
glass.holdsWater();
glass.holdsBeer();
glass.holdsWine();

/*
 2)
 Noun: chef
 action 1: chef cooks chicken
 action 2: chef cooks beef
 action 3: chef cooks veggies
 */
chef.cookChicken();
chef.cookBeef();
chef.cookVeggies();

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
 Noun: email
 action 1: send email
 action 2: check for new email
 action 3: delete email
 */

email.send();
email.checkNew();
email.trash();

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
 Noun: bowl
 action 1: holds cereal
 action 2: holds ingredients
 action 3: breaks into pieces
 */

bowl.holdCereal();
bowl.holdIngredients();
bowl.break();
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
 Noun: runner
 action 1: put on shoes
 action 2: put on shorts
 action 3: record workout
 */

runner.putOnShoes();
runner.putOnShorts();
runner.recordWorkou();

/*
 10)
 Noun: student
 action 1: Watch video
 action 2: Comeplete assignment
 action 3: Push assigment for grading
 */

student.watchVideo();
student.completeAssignment();
student.pushAssignment();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
