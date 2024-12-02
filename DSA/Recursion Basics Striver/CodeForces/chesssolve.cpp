#include <iostream>
#include <algorithm>
using namespace std;

int maxDraws(int p1, int p2, int p3) {
    // Total points should be even for valid distribution
    int totalPoints = p1 + p2 + p3;
    if (totalPoints % 2 != 0) {
        return -1;
    }

    // Sort scores for consistent comparison
    int points[3] = {p1, p2, p3};
    sort(points, points + 3);

    // Try to maximize the number of draws
    for (int draws = 3; draws >= 0; --draws) {
        int pointsFromDraws = 2 * draws; // Each draw contributes 2 points total
        int remainingPoints = totalPoints - pointsFromDraws;
        
        if (remainingPoints % 2 == 0) { // Remaining points must be even
            int wins = remainingPoints / 2; // Each win contributes 2 points

            // Check if wins and draws can be distributed within 3 games
            if (wins + draws <= 3) {
                int maxScore = points[2];
                int midScore = points[1];
                int minScore = points[0];

                // Check if the current distribution is possible
                if (maxScore <= wins + 2 * draws &&
                    midScore <= wins + draws &&
                    minScore <= wins) {
                    return draws;
                }
            }
        }
    }

    return -1; // No valid distribution found
}

int main() {


    
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        cout << maxDraws(p1, p2, p3) << endl;


    return 0;
}
