# Jeu_de_combat
A school projet which consists in the creation of a a simple game where two teams of fighters will compete against each other.

The fight will take place in turn, each fighter will have the time to choose his action before the turn goes to another fighter.
Each class is built in a .cpp/.h file duo.
There is only one class per header.

Each weapon has a name, a damage value, a critical value (probability of doubling the damage), one (or more) bonus value of a characteristic for its bearer.
Two types of weapon: a contact weapon and a long range weapon.

There are a variety of character classes.
They all have a basic name, a life value, a weapon, a dodge value indicating the probability of dodging the opponent's attack, a speed in order to define the order of actions, an attack value, a defence value, an agility value, an intelligence value.

Each character has the choice between : 
Attacking with his hands;
Attacking with his weapon (if possible);
Using a special skill (defined later according to character classes).
Some skills have cooldown (cooldown time) and will correspond to a number of turns.

When the game starts, the turn of each fighter is defined according to his speed.
The one with the lowest speed begins and then this value is subtracted from the speed of each fighter.
The speed of the player who has just acted is reset to its initial value.
If several combatants are to attack at the same time, the one who will attack first is chosen at random.
In turn, each character chooses the action he will perform (according to his class),
and then it will be the turn of the next until all the fighters of a team are dead.

From this, the game can be improve.
