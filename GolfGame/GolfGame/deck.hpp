#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
#include "card.hpp"

namespace deck {
	std::vector<card::Card_Data> deck_card;

	class deck {
	public:

	
	private:
	};

	//display card deck
	std::ostream& operator<<(std::ostream&os, card::Card_Data c_d) {
		return os << deck_card[c_d];
	}
}