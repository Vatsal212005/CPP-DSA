/*
    Time Complexity - O( N * N )
    Space Complexity - O( 1 )

    where N is the given input.
*/


void nStarDiamond(int n) {

    // Initialise 'gap' and 'stars'.
    int gap = n - 1, stars = 1;
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < gap; j++) {
            cout << ' ';
        }
        for (int j = gap ; j < gap + stars; j++) {
            cout << '*';
        }

        // End the current row of the pattern.
        cout << '\n';

        gap--;
        stars += 2;
    }
    gap = 0, stars = 2 * n - 1;
    for (int i = n; i < 2 * n; i++) {

        for (int j = 0; j < gap; j++) {
            cout << ' ';
        }
        for (int j = gap ; j < gap + stars; j++) {
            cout << '*';
        }

        // End the current row of the pattern.
        cout << '\n';

        gap++;
        stars -= 2;
    }
}
