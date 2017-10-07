#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
#include "card.hpp"
#include <random>

namespace table {
	class deck {
	public:
		deck(card::Card_Deck&);
		void draw_card();
		void shuffle();
		//void discard(card_vector &, card_vector &);
		//void replace_card(card_vector &, card_vector &) { //std::move(); }
		void print();

	private:
		card::Card_Deck deck_p;
		std::vector<card::Card_Data> card_vector_p;
	};
}
