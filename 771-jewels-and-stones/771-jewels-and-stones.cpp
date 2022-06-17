class Solution {
public:
int numJewelsInStones(string jewels, string stones) {
	int cnt = 0;

	unordered_map <char, short> stonesMap;
	for (char stone : stones) {
		stonesMap[stone]++;
	}

	for (char jewel : jewels) {
		cnt += stonesMap[jewel];
	}

	return cnt;
}
};