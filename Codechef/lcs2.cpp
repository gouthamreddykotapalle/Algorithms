#include <list>
#include <map>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

// Get a non-const iterator to the shortest string in a list
list<string>::iterator shortest_of(list<string> & strings)
{
    auto where = strings.end();
    size_t min_len = size_t(-1);
    for (auto i = strings.begin(); i != strings.end(); ++i) {
        if (i->size() < min_len) {
            where = i;
            min_len = i->size();
        }
    }
    return where;
}

// Say whether a string is a common substring of a list of strings
bool 
is_common_substring_of(
    string const & candidate, list<string> const & strings)
{
    for (string const & s : strings) {
        if (s.find(candidate) == string::npos) {
            return false;
        }
    }
    return true;
}


/* Get a multimap whose keys are the at-most `quota` greatest 
    lengths of common substrings of the list of strings `strings`, each key 
    multi-mapped to the set of common substrings of that length.
*/
multimap<size_t,string> 
n_longest_common_substring_sets(list<string> & strings, unsigned quota)
{
    size_t nlengths = 0;
    multimap<size_t,string> results;
    if (quota == 0) {
        return results;
    }
    auto shortest_i = shortest_of(strings);
    if (shortest_i == strings.end()) {
        return results;
    }
    string shortest = *shortest_i;
    strings.erase(shortest_i);
    for ( size_t start = 0; start < shortest.size();) {
        size_t skip = 1;
        for (size_t len = shortest.size(); len > 0; --len) {
            string subs = shortest.substr(start,len);
            if (!is_common_substring_of(subs,strings)) {
                continue;
            }
            auto i = results.lower_bound(subs.size());
            for (   ;i != results.end() && 
                    i->second.find(subs) == string::npos; ++i) {}
            if (i != results.end()) {
                continue;
            }
            for (i = results.begin(); 
                    i != results.end() && i->first < subs.size(); ) {
                if (subs.find(i->second) != string::npos) {
                    i = results.erase(i);
                } else {
                    ++i;
                }
            }
            auto hint = results.lower_bound(subs.size());
            bool new_len = hint == results.end() || hint->first != subs.size();
            if (new_len && nlengths == quota) {
                size_t min_len = results.begin()->first;
                if (min_len > subs.size()) {
                    continue;
                }
                results.erase(min_len);
                --nlengths;
            }
            nlengths += new_len;
            results.emplace_hint(hint,subs.size(),subs);
            len = 1;
            skip = subs.size();
        }
        start += skip;
    }
    return results; 
}

// Testing ...

int main()
{
	int t,n;
	while(t--)
	{
	
    list<string> strings{
        "OfBitWordFirstFileWordZ.xls", 
        "SecondZWordBitWordOfFileBlue.xls", 
        "ThirdFileZBitWordWhiteOfWord.xls", 
        "WordFourthWordFileBitGreenZOf.xls"};

    auto results = n_longest_common_substring_sets(strings,4);
    for (auto const & val : results) {
        cout << "length: " << val.first 
        << ", substring: " << val.second << endl;
    }
    return 0;
}
