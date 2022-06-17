class Solution {
public:
int numJewelsInStones(string jewels, string stones) {
	int cnt = 0;
	char jewel;

	for (auto iter = jewels.begin(); iter < jewels.end(); iter++) {
		jewel = *iter;

		for (auto iter = stones.begin(); iter < stones.end(); iter++) {
			if (*iter == jewel) {
				//stones.erase(iter);
				cnt++;
			}
		}
	}

	return cnt;
}
};