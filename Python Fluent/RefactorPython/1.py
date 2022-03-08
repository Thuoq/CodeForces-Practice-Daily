# 2. Use item() to directly unpack dictionary values

teams_by_colors = {"blue": ["patrick","jerrs"]}

for team_color,players in teams_by_colors.items():
    print(team_color,players)
# 3.  Replace range(len) with enumerate

players = ['Thuong',"Dep"]
for i,player in enumerate(players,start=1 ): # enumerate convert to tuple if i =1
    print(i,player)
#8. Replace yield inside for loop with yield from 
def get_content(entry):
    yield from entry.get_blocks()