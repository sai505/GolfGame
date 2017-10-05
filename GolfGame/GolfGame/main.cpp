//OOP Class. Seung Jun Lee. 2017
//four-card Golf Game Rule
//1.The dealer deal four card (layout card) to each player one at a time
//2.All of undealt card facedown. Drawn card should be placed different stock (faceup).
//3.Each turn, Each player can see their two cards (whichever) only once and always facedown.
//4.The other two unseen cards can be looked when discard or until end of game (not each turn).
//5.The play goes clockwise, but here i will only implement two players
//6.Each player can draw the card (either from undelat stock or discarded stock) and replace it
//with one from own's layout card. Or pass the turn.
//7.The card drawn(faceup) from the endealt stock can be discarded if player donot want to replace 
//Scoring:
//A:1, 2~9, J=Q=10, K=0, Joker1=20, Joker2=-20
//Winning: 
//The player who has lowest cummulative score win after 10 rounds

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
