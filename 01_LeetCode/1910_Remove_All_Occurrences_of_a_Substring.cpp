class Solution {
    public:
        string removepart(string& s, string part) {
            size_t pos = s.find(part);
            if (pos == string::npos) {
                return s;
            } else {
                s.erase(pos, part.length());
                cout << s << " ";
                removepart(s, part);
            }
            return s;
        }
        string removeOccurrences(string s, string part) {
            return removepart(s, part);
        }
    };