class Solution {
public:

    string encode(vector<string>& strs) {


        string encoded= "";
        for(const string &str:strs){
            encoded+=to_string(str.length())+"#"+str;

        }

        return encoded;

    }

    vector<string> decode(string s) {

        vector<std::string> decoded;
        size_t i = 0;
        
        while (i < s.length()) {
            // Find the position of the delimiter '#'
            size_t j = i;
            while (s[j] != '#') {
                j++;
            }
            
            // Extract the length of the upcoming substring
            int length = std::stoi(s.substr(i, j - i));
            
            // Move index past the '#' character
            i = j + 1;
            
            // Extract the string based on the parsed length
            decoded.push_back(s.substr(i, length));
            
            // Advance index to the start of the next chunk
            i += length;
        }
        
        return decoded;
    }
};
