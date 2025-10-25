#include <iostream>
#include <vector>

int main()
{

    int participants_n, cut_of_position_k, p_scores;
    int result = 0;
    std::vector<int> scores;

    std::cin >> participants_n >> cut_of_position_k;

    for (int i = 0; i < participants_n; i++)
    {
        std::cin >> p_scores;
        scores.push_back(p_scores);
    }

    for (int score : scores)
    {
        if (score >= scores[cut_of_position_k - 1] && score != 0)
        {
            result += 1;
        }
    }

    std::cout << result << std::endl;

    return 0;
}

/*
-------PROBLEM BREAKDOWN:
A contestant will advance to the next round if:
1. Their score is >= the k-th place finisher’s score, AND
2. Their score is greater than 0.

Inputs:
- n  → number of participants
- k  → cutoff position
- scores → scores of n participants (in non-increasing order)

Output:
- Number of participants who advance.

------- ALL POSSIBLE CASES:
Case 1: Normal Case
Input:
8 5
10 9 8 7 7 7 5 5
→ k-th score = 7
→ Qualified: 10, 9, 8, 7, 7, 7 → total 6
Output: 6

Case 2: Some participants have 0 score
Input:
8 5
10 9 8 7 0 0 0 0
→ k-th score = 0
→ Only positive scores qualify
Output: 4

Case 3: All participants have same nonzero score
Input:
5 3
5 5 5 5 5
→ k-th score = 5
→ Everyone qualifies
Output: 5

Case 4: All scores are 0
Input:
5 2
0 0 0 0 0
→ k-th score = 0
→ No positive scores
Output: 0

Case 5: k-th score = 0 but others > 0
Input:
8 5
5 4 3 2 0 0 0 0
→ k-th score = 0
→ Only first 4 have > 0
Output: 4

Case 6: k = n (cutoff is last participant)
Input:
5 5
10 9 8 7 7
→ k-th score = 7
→ Everyone has ≥ 7
Output: 5

Case 7: k = 1 (top scorer cutoff)
Input:
5 1
10 9 8 7 7
→ k-th score = 10
→ Only first participant qualifies
Output: 1

Case 8: No participants
Input:
0 0
→ No one qualifies
Output: 0

*/