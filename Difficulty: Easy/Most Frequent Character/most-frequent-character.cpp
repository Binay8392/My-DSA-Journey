class Solution {
	public:
	char getMaxOccuringChar(string& s) {
		//  code here
		unordered_map<char, int> countMap;
		for (char ch : s) {
			countMap[ch]++;
		}
		
		char maxChar = 'a';
		int maxFreq = 0;
		for (char ch = 'a'; ch <= 'z'; ch++) {
			if (countMap.find(ch) != countMap.end() && countMap[ch] > maxFreq) {
				maxFreq = countMap[ch];
				maxChar = ch;
			}
		}
		return maxChar;
		}
	};
