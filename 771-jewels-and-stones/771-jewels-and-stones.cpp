class Solution {
public:
int numJewelsInStones(string jewels, string stones) {
	int cnt = 0;

	for (auto iter_j = jewels.begin(); iter_j < jewels.end(); iter_j++) {

		for (auto iter_s = stones.begin(); iter_s < stones.end(); iter_s++) {
			if (*iter_s == *iter_j) {
				cnt++;
			}
		}
	}

	return cnt;
}
};