#include "table.hpp"
void table::deck::draw_card() {

}

void table::deck::shuffle() {
	std::random_device rng;
	std::minstd_rand prng;
	prng.seed(rng());

	std::shuffle(deck_p->c_vector.begin(), deck_p->c_vector.end(), prng);
}

void const table::deck::print() {
	deck_p->print();
}


