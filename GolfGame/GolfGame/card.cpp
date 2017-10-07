#include "card.hpp"
#include <random>
card::Card_Deck::Card_Deck() {
	c_vector={
		{ Joker1, Joker },{ Joker2, Joker },

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
}

void const card::Card_Deck::print() {
	//std::vector<Card_Data>::iterator it = cards.begin();
	int j = 1;

	for (auto &i : c_vector){
		switch (i.rank) {
			case Joker1:std::cout << "Joker1"; break;
			case Joker2:std::cout << "Joker2"; break;
			case Ace:std::cout<<'A';break;
			case Two:std::cout<<'2';break;
			case Three:std::cout<<'3';break;
			case Four:std::cout << '4';break;
			case Five:std::cout << '5';break;
			case Six:std::cout << '6';break;
			case Seven:std::cout << '7';break;
			case Eight:std::cout << '8';break;
			case Nine:std::cout << '9';break;
			case Ten:std::cout << 'T';break;
			case Jack:std::cout << 'J';break;
			case Queen:std::cout << 'Q';break;
			case King:std::cout << 'K';break;
		}
		switch (i.suit) {
			case Hearts:std::cout << "H  "; break;
			case Diamonds:std::cout << "D  "; break;
			case Clubs:std::cout << "C  "; break;
			case Spades:std::cout << "S  "; break;
			case Joker:std::cout << ' '; break;
		}

		if (j % 13 == 0) {
			std::cout << std::endl;
			j = 0;
		}
		++j;
	}
	std::cout << std::endl;

}
/*
void card::Card_Deck::shuffle() {
	std::random_device rng;
	std::minstd_rand prng;
	prng.seed(rng());
	std::shuffle(c_vector.begin(), c_vector.end(), prng);
}*/
/*
std::ostream& operator<<(std::ostream& os, card::Card_Vector& c_v) {
	for(int i=0; i<c_v.)
	return os;
}*/

