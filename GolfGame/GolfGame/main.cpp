class Player
{
	Card cards[4];
	void peak() const;
	void takeDiscard(Discard& deck);
	void returnToDiscard(Discard& deck);
	void skip();
	void drawFromDiscard();
	void drawFromDeck();
}

class Game
{
	void run();
	void step();
	void turn();
	void askMove(const int players);
private:
	Player* players;
};


using Discard = std::stack<Card>;
using Deck = std::vector<Card>;

class Card;


const Card turnFromTop(Deck& deck, Discard &discardPile);
void deal_deck(Player* players, int numPlayers, Deck &deck);
