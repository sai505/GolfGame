#include "card.hpp"

void card::print(std::vector<Card_Data>&i) {
	//std::vector<Card_Data>::iterator it = cards.begin();
	int j = 1;
	
	for (auto &i : c_vector){
		switch (i.rank) {
			case Joker1:std::cout << "Joker1"; break;
			case Joker2:std::cout << "Joker2"; break;
			case Ace:std::cout<<'A';break;
			case Two:std::cout<<'2';break;
			case Three:std::cout<<'3';break;
			case Four:std::cout << '4';break;
			case Five:std::cout << '5';break;
			case Six:std::cout << '6';break;
			case Seven:std::cout << '7';break;
			case Eight:std::cout << '8';break;
			case Nine:std::cout << '9';break;
			case Ten:std::cout << 'T';break;
			case Jack:std::cout << 'J';break;
			case Queen:std::cout << 'Q';break;
			case King:std::cout << 'K';break;
		}
		switch (i.suit) {
			case Hearts:std::cout << "H  "; break;
			case Diamonds:std::cout << "D  "; break;
			case Clubs:std::cout << "C  "; break;
			case Spades:std::cout << "S  "; break;
			case Joker:std::cout << ' '; break;
		}

		if (j % 13 == 0) {
			std::cout << std::endl;
			j = 0;
		}
		++j;
	}
	//for (it; it != cards.end(); ++it) {
	//	std::cout << *it << std::endl;
	//}
}

/*
std::ostream& operator<<(std::ostream& os, card::Card_Vector& c_v) {
	for(int i=0; i<c_v.)
	return os;
}*/

