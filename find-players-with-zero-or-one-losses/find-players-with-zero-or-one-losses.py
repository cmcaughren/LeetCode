from collections import defaultdict

class Solution:
    def findWinners(self, matches: List[List[int]]) -> List[List[int]]:
        losers = defaultdict(int)
        winners = defaultdict(int)
        ans = [[],[]]
        
        
        for match in matches:
            winners[match[0]] += 1
            losers[match[1]] += 1
        
        #ensures we only count players who have played at least one match
        for winner in winners:
            if winner not in losers:
                ans[0].append(winner)
            
        for loser in losers:
            if losers[loser] == 1:
                ans[1].append(loser)
        ans[0] = sorted(ans[0])
        ans[1] = sorted(ans[1])
        return ans