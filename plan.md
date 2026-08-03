# Card Game Engine: War

- Cards -> class
  - number value
  - suit (spades, clubs, hearts, diamonds)
- Deck -> class (holds all cards)
  - 52 cards (all suit/num combos)
- 2 Players
  - hold cards -> array
  - take turns putting top card of player's array in the middle
    - the player with the higher number/value wins -> if statement
      - winner of comparison gets the card
        - when there is a tie:
          - GO TO War
            - put three cards face down and the forth card face up, the one with the higher value gets every card on the table 
      - once you do not have any cards anymore you lose
- Shuffle the cards in the beginning, the first player gets the first half of the array, the second one's array gets assigned the deck array because the second half is the rest of the array


