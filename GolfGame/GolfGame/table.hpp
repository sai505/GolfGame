#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
#include "card.hpp"
#include <random>

namespace table {
	class deck {
	public:
		deck(card::Card_Deck*d) {deck_p = d;};
		void draw_card();
		void shuffle();
		//void discard(card_vector &, card_vector &);
		//void replace_card(card_vector &, card_vector &) { //std::move(); }
		void const print();

	private:
		card::Card_Deck* deck_p;
	};
}
