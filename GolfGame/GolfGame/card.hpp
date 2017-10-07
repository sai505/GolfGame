#pragma once
#include <algorithm>
#include <iostream>
#include <vector>

namespace card {
	enum Suit { Clubs, Diamonds, Hearts, Spades, Joker };
	enum Rank {
		Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten,
		Jack, Queen, King, Joker1, Joker2
	};

	struct Card_Data {
		Rank rank;
		Suit suit;
	};

	struct Card_Deck {
		Card_Deck();
		std::vector<Card_Data> c_vector;
		void const print();
		//void shuffle();
	};
}


	//decided not to use class because it is more work to do when I create the deck of vector in Card_Data
	//type. Since I initiliazed the vector in Card class consturctor as private member, i have to use function
	//to return it when I create it in deck.
	/*
	class Card {
	public:
		Card();
		~Card() { cards.clear(); }
		card_vector get_data();
		void print();

	private:
		card_vector cards;
		friend std::ostream& operator<<(std::ostream& os, const Card_Data& c_d);
	};

	//printout the card
	//std::ostream& operator<<(std::ostream& os, const Card_Data& c_d);
	*/