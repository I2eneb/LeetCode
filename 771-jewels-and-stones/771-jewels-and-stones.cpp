class Solution {
public:
int numJewelsInStones(string jewels, string stones) {
	int cnt = 0;

	unordered_multimap <char, bool> stonesMap;
	for (char stone : stones) {
		stonesMap.insert({ stone, 0 });
	}

	for (char jewel : jewels) {
		cnt += stonesMap.count(jewel);
	}

	return cnt;
}
};