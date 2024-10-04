#include <fstream>
#include <iostream>
#include <map>
int main() {
	std::ifstream lexi("lexicon.txt");
	std::string lexiWord;
	std::map<std::string, bool> lexiconMap;
	while(lexi >> lexiWord) {
		lexiconMap[lexiWord];
	}
	std::ifstream junk("junk.txt");
	std::string junkW;
	std::map<std::string, bool> junkMap;

	while (junk >> junkW) {
		junkMap[junkW];
	}

	std::ofstream valid("validate.txt");
	for ( auto word : junkMap) {
		if (lexiconMap.find(word.first) != lexiconMap.end()) {
			valid << word.first << std::endl;
		}
	}
}

