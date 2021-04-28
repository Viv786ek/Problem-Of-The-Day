long long toh(int N, int from, int to, int aux) {
       
long long moves = 0ll;
        if (N >= 1) {
            // recursive call to move top disk from "from" to aux in current call
            moves += toh(N - 1, from, aux, to);
            cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
            // increment moves
            moves++;
            
            // recursive call to move top disk from aux to "to" in current call
            moves += toh(N - 1, aux, to, from);
        }
        return moves;
}
