### [Challenge Name: Climbing the Leaderboard](/challenges/climbing-the-leaderboard)


Alice is playing an arcade game and wants to climb to the top of the leaderboard. Can you help her track her ranking as she beats each level? The game uses [Dense Ranking](https://en.wikipedia.org/wiki/Ranking#Dense_ranking_.28.221223.22_ranking.29), so its leaderboard works like this:

- The player with the highest score is ranked number $1$ on the leaderboard. 
- Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number.


For example, four players have the scores $100$, $90$, $90$, and $80$. Those players will have ranks $1$, $2$, $2$, and $3$, respectively.

When Alice starts playing, there are already $n$ people on the leaderboard. The score of each player $i$ is denoted by $s_{i}$. Alice plays for $m$ levels, and we denote her total score after passing each level $j$ as $alice_j$. After completing each level, Alice wants to know her current rank.

You are given an array, $scores$, of *[monotonically decreasing](https://en.wikipedia.org/wiki/Monotonic_function)* leaderboard scores, and another array, $alice$, of Alice's cumulative scores for each level of the game. You must print $m$ integers. The $j^{th}$ integer should indicate the current rank of alice after passing the $j^{th}$ level.

Sample Input

7
100 100 50 40 40 20 10
4
5 25 50 120

Sample Output

6
4
2
1