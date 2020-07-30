// Starts Here


class Trie {
    public:
    Trie* children[26];
    bool endOfWord;
    
    // Default Constructor
    Trie():endOfWord(false)
    {
        for(int i=0;i<26;i++)
        children[i] = nullptr;
    }
    
    // Destructor
    ~Trie()
    {
        for(int i=0;i<26;i++)
        {
            if(children[i])
                delete children[i];
        }
    }
    
    void insert(string word)
    {
        Trie* curr = this;
        for(char c:word)
        {
            if(curr->children[c-'a'])
                curr->children[c-'a'] = new Trie();
            curr = curr->children[c-'a'];
        }
        
        curr->endOfWord = true;
    }
};
