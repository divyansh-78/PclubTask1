In the problem we are using dynamic programming approach, we initialise a memo vector with memo[i] representing the minimum number of perfect cubes required to sum up to n. 
so we initialise the memo as memo[0] as 0 and mem[1] as 1. Then for each integer from 2 to n we iterate till the greatest integer of cuberoot of that numbher and calculate the minimum number 
of representations at each value and build our 1d memo from 0 to index n accordingly
