#include <algorithm>
#include <iostream>
#include <vector>
using card_vector = std::vector<card::Card_Data>;

namespace card {
	enum Suit { Clubs, Diamonds, Hearts, Spades, Joker};
	enum Rank {Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten,
		Jack, Queen, King, Joker1, Joker2};

	struct Card_Data {
		Rank rank;
		Suit suit;
	};

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
}