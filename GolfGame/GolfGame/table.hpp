#include <algorithm>
#include <iostream>
#include <vector>
#include "card.hpp"
#include <random>
std::random_device rng;
std::minstd_rand prng;


/*
using c_vector_pointer = std::vector<card::Card_Data*>; 
using c_pointer = card::Card*;

std::random_device rng;
std::minstd_rand prng;


namespace table {
	class deck {
	public:
		deck(card::Card&);
		void draw_card();
		void shuffle();
		void discard(card_vector &, card_vector &);
		void replace_card(card_vector &, card_vector &) { //std::move(); 
		}

	private:
		card::Card deck_card;
	};
}
*/