#include "table.hpp"

table::deck::deck(card::Card_Deck& deck) {
	deck_p = deck;
	card_vector_p = deck.c_vector;
}

void table::deck::draw_card() {

}

void table::deck::shuffle() {
	std::random_device rng;
	std::minstd_rand prng;
	prng.seed(rng());
	std::shuffle((card_vector_p).begin(), (card_vector_p).end(), prng);
}

void table::deck::print() {
	deck_p.print();
}


