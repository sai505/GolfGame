#include "table.hpp"

table::deck::deck(c_pointer& c_card) {
	deck_card = c_card;
}

void table::deck::draw_card() {

}
void table::deck::shuffle() {
	extern std::minstd_rand prng;
	deck_card->
	std::shuffle(card.begin(), card.end(), prng);
}
void table::deck::discard(c_vector &, c_vector &) {

}
void table::deck::replace_card(c_vector &, c_vector &) {
	//std::move();
}

