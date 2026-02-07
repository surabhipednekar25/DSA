//bruteforce O(N*M)
string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
                for(int i = 0;i<strs.size();i++){
                int j = 0;
                while(j < min(prefix.length(),strs[i].length())){
                    if(prefix[j] != strs[i][j]){
                        break;
                    }
                }
                prefix.substr(0,j);

        }
        return prefix;

    }

//optimal with trie gonna cover leter