#include "table.hpp"

table::deck::deck(card::Card_Deck& deck) {
	deck_card = deck;
}

void table::deck::draw_card() {

}

void table::deck::shuffle() {
	std::random_device rng;
	std::minstd_rand prng;
	prng.seed(rng());
	std::shuffle(deck_card.c_vector.begin(), deck_card.c_vector.end(), prng);
}



