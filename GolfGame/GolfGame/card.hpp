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
	
	std::vector<Card_Data> c_vector {
		{ Ace, Spades },{ Two, Spades },{ Three, Spades },{ Four, Spades },{ Five, Spades },
		{ Six, Spades },{ Seven, Spades },{ Eight, Spades },{ Nine, Spades },{ Ten, Spades },
		{ Jack, Spades },{ Queen, Spades },{ King, Spades },

		{ Ace, Clubs },{ Two, Clubs },{ Three, Clubs },{ Four, Clubs },{ Five, Clubs },
		{ Six, Clubs },{ Seven, Clubs },{ Eight, Clubs },{ Nine, Clubs },{ Ten, Clubs },
		{ Jack, Clubs },{ Queen, Clubs },{ King, Clubs },

		{ Ace, Hearts },{ Two, Hearts },{ Three, Hearts },{ Four, Hearts },{ Five, Hearts },
		{ Six, Hearts },{ Seven, Hearts },{ Eight, Hearts },{ Nine, Hearts },{ Ten, Hearts },
		{ Jack, Hearts },{ Queen, Hearts },{ King, Hearts },

		{ Ace, Diamonds },{ Two, Diamonds },{ Three, Diamonds },{ Four, Diamonds },{ Five, Diamonds },
		{ Six, Diamonds },{ Seven, Diamonds },{ Eight, Diamonds },{ Nine, Diamonds },{ Ten, Diamonds },
		{ Jack, Diamonds },{ Queen, Diamonds },{ King, Diamonds }
	};

	void print(std::vector<Card_Data>&);
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