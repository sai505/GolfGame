enum CardType {
	Face,
	Trump,

	CARDTYPE_MAX = Trump
};

enum Color {
	Black,
	Red,

	COLOR_MAX = Red
};


enum Special {
	Joker,

	SPECIAL_MAX = Joker
};


enum Suit {
	Clubs,
	Diamonds,
	Hearts,
	Spades,

	SUIT_MAX = Spades
};


enum Rank {
	Ace,
	Two,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	Ten,
	Jack,
	Queen,
	King,
	Knight,

	RANK_MAX = Knight
};


struct FaceCard {
	Rank rank;
	Suit suit;
};


struct TrumpCard {
	Color color;
	Special special;
};


union CardStorage {
	FaceCard face;
	TrumpCard trump;
};


class Card {
public:
	Card(const Rank r, const Suit s);
	Card(const Color c, const Special s);

	const int getStrength() const;
	const CardType getType() const;
	const Special getSpecial() const;
	const Color getColor() const;
	const Rank getRank() const;
	const Suit getSuit() const;

private:
	CardType type;
	CardStorage storage;
};
