class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
	int cnt = 0;
	char jewel;
	int index;
	do {
		jewel = jewels.back();
		jewels.pop_back();

		for (auto iter = stones.begin(); iter < stones.end(); iter++) {
			if (*iter == jewel)
				cnt++;
		}

	} while (jewels != "");

	return cnt;
}
};