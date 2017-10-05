#pragma once 
#include <algorithm>
#include <iostream>
#include <vector>

namespace card {
	enum Suit { Clubs, Diamonds, Hearts, Spades, Joker};
	enum Rank {Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten,
		Jack, Queen, King, Joker1, Joker2};

	struct Card_Data {
		Rank rank;
		Suit suit;
	};

	class Card_Vector {
	public:
		Card_Vector();
		~Card_Vector();

	private:
		std::vector<Card_Data> cards;
	};

	//printout the card
	std::ostream& operator<<(std::ostream& os, const Card_Data& c_d);
}