#pragma once 
#include <algorithm>
#include <iostream>
#include <vector>

namespace card {
	enum Color {Black,Red,COLOR_MAX = Red};

	enum Suit {Clubs,Diamonds,Hearts,Spades,};

	enum Rank {Ace=1,Two,Three,Four,Five,Six,Seven,Eight,Nine,Ten,
		Jack,Queen,King=0,Joker1=-10,Joker2=20,};

	struct Card_Data {
		Rank rank;
		Suit suit;
	};

	class Card {
	public:
		Card(const Rank r, const Suit s);
		Card(const Color c, const Special s);

		std::vector<FaceCard> cards;

	private:
		
	};
}