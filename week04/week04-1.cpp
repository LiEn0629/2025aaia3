// week04-1.cpp �����D, �ӵ��D�ؼg
// LeetCode �D���D 3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles; // �@�}�l�ܤF�o��h�~
        while(numBottles >= numExchange){ // �p�G�~�l�� >= �I����, �N�I��
            numBottles = numBottles - numExchange + 1; // �I��1�~����
            ans ++ ; // �h�ܤ@�~�F
            numExchange ++; // �I�����зǦh�@�~
        }
        return ans;
    }
};
