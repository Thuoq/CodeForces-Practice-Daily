import collections
#
#***
# Tạo Card class có 2 attribute rank and suit
#***
#
Card = collections.namedtuple('Card',['rank','suit'])

beed_card = Card(rank='7',suit='diamonds')
print(beed_card)





class FrenchDesk:
    ranks = [str(n) for n in range(2,11)] + list("JQKA")
    suits = 'spades diamonds clubs hearts'.split()

    def __init__(self):
        self._cards = [Card(rank,suit) for suit in self.suits
                                       for rank in self.ranks]
    
    def __len__(self):
        print('Hello i run at len ')
        return len(self._cards)
    def __getitem__(self,position):
        print('run at get item')
        return self._cards[position]
deck = FrenchDesk()
# print(len(deck))
# print("===================")
# print(deck[0]) # run at __getitem__

# for card in deck:
#     print(card)

suit_values = dict(spades=3, hearts=2, diamonds=1, clubs=0)
def space_high(card):
    rank_value = FrenchDesk.ranks.index(card.rank)
    print(rank_value)
    # 0 + 4 + 2 == 6
    return rank_value * len(suit_values) + suit_values[card.suit]
for card in sorted(deck,key=space_high):
    print(card)
# space_high(deck[0])
