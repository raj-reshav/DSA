class Solution {
public:
    bool canAliceWin(int n) {
    int rem=10;
    bool alice_turn=true;

    while(n>=rem){
        n -= rem;
        rem--;
        alice_turn= !alice_turn;
    }

    return !alice_turn;

    }
};