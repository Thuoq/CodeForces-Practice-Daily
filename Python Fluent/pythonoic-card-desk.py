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
    suits = 'spades diamnods clubs hears'.split()

    def __init__(self):
        self._cards = [Card(rank,suit) for suit in self.suits
                                       for rank in self.ranks]
    
    def __len__(self):
        return len(self._cards)
    def __getitem__(self,position):
        return self._cards[position]
