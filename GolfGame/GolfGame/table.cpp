#include "table.hpp"
table::deck::deck(card::Card& c_card) {
	deck_card = c_card;
}

void table::deck::draw_card() {

}

void table::deck::shuffle() {
	extern std::minstd_rand prng;
	std::shuffle(deck_card.get_data().begin(), deck_card.get_data().end(), prng);
}

void table::deck::discard(card_vector &, card_vector &) {

}

void table::deck::replace_card(card_vector &, card_vector &) {
	//std::move();
}

