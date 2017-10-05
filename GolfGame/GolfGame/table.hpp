#include <algorithm>
#include <iostream>
#include <vector>
#include "card.hpp"
#include <random>
using c_vector_pointer = std::vector<card::Card_Data*>; 
using c_pointer = card::Card_Vector*;
using c_vector = std::vector<card::Card_Data>;
std::random_device rng;
std::minstd_rand prng;

namespace table {
	class deck {
	public:
		deck(c_pointer&);
		void draw_card();
		void shuffle();
		void discard(c_vector &, c_vector &);
		void replace_card(c_vector &, c_vector &) { std::move(); }

	private:
		c_pointer deck_card;
	};
}