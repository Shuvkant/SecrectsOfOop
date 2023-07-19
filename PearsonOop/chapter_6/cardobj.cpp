// cardobj.cpp
// cars as objects
#include <iostream>
using namespace std;
enum Suit { clubs, diamonds, hearts, spades };
const int jack = 11;  // from 0 to 10 are
const int queen = 12; // integers without names
const int king = 13;
const int ace = 14;
class card {
private:
  int number;
  Suit suit;

public:
  card() {}                                   // constructor (no args)
  card(int n, Suit s) : number(n), suit(s) {} // constructor (two args)
  void display();                             // display card
  bool isEqual(card);                         // same as another card?
};
void card::display() {
  if (number >= 2 && number <= 10)
    cout << number << " of";
  else
    switch (number) {
    case jack:
      cout << "jack of ";
      break;
    case queen:
      cout << "queen of ";
      break;
    case king:
      cout << "king of ";
      break;
    case ace:
      cout << "ace of ";
      break;
    }
  switch (suit) {
  case clubs:
    cout << "clubs ";
    break;
  case diamonds:
    cout << "diamonds ";
    break;
  case hearts:
    cout << "hearts ";
    break;
  case spades:
    cout << "spades ";
    break;
  }
}
bool card::isEqual(card c2) // return true if cards isEqual
{
  return (number == c2.number && suit == c2.suit) ? true : false;
}
int main() {
  card temp, chosen, prize; // define varous cards
  int position;
  card card1(7, clubs);
  cout << "\nCard 1 is the ";
  card1.display(); // display card1

  card card2(jack, hearts); // define and initialize card2
  cout << "\nCard2 is the ";
  card2.display();

  card card3(ace, spades); // defina and initialize card3
  cout << "\nCard3 is teh ";
  card3.display();

  prize = card3; // prize is the card3

  cout << "\n I'm swapping card 1 and card 3";
  temp = card3;
  card3 = card1;
  card1 = temp;

  cout << "\n I'm swapping card 2 and card 3 ";
  temp = card3;
  card3 = card2;
  card2 = temp;

  cout << "\n I'm swapping card 1 and card 2 ";
  temp = card2;
  card2 = card1;
  card1 = temp;

  cout << "\nNow, where (1,2, 3) is the ";
  prize.display();
  cout << "? ";
  cin >> position; // get user's guess of position
  switch (position) {
  case 1:
    chosen = card1;
    break;
  case 2:
    chosen = card2;
    break;
  case 3:
    chosen = card3;
    break;
  }
  if (chosen.isEqual(prize))
    cout << "That's right! You win!";
  else
    cout << "Sorry. You lose.";
  cout << " You chose the  ";
  chosen.display(); // display chosen card
  cout << endl;
  return 0;
}
