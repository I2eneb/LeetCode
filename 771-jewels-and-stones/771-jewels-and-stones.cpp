class Solution {
public:
int numJewelsInStones(string jewels, string stones) {
	int cnt = 0;

	for (auto iter_j = jewels.begin(); iter_j < jewels.end(); iter_j++) {

		for (auto iter_s = stones.begin(); iter_s < stones.end(); ) {
			if (*iter_s == *iter_j) {
				stones.erase(iter_s);
				cnt++;
				continue;
			}
			iter_s++;
		}
	}

	return cnt;
}
};