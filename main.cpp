#include <array>
#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

template <typename Container> void shuffle_array(Container &arr) {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::shuffle(arr.begin(), arr.end(), gen);
}


class Card {
public:
  int num_value;
  int suit; // 1 = spades, 2 = clubs, 3 = hearts, 4 = diamonds
  std::string name;
};

int main() {
  std::array<Card, 52> deck;
  static const char *suitNames[] = {"Spades", "Clubs", "Hearts", "Diamonds"};
  static const char *rankNames[] = {"2",     "3",    "4",  "5",  "6",
                                    "7",     "8",    "9",  "10", "Jack",
                                    "Queen", "King", "Ace"};

  int index = 0;
  for (int suit = 1; suit <= 4; ++suit) {
    for (int rank = 0; rank < 13; ++rank) {
      Card card;
      card.num_value = rank + 2;
      card.suit = suit;
      card.name = std::string(rankNames[rank]) + " of " + suitNames[suit - 1];
      deck[index++] = card;
    }
  }

  shuffle_array(deck);

  for (const Card &card : deck) {
    std::cout << card.name << std::endl;
  }

  return 0;
}
