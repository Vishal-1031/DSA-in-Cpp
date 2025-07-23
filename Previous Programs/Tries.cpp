#include<iostream>
using namespace std;
class TrieNode{
    public :
    char data;
    TrieNode* Children[26];
    bool isTerminal;
    
    TrieNode(char d){
        this->data = d;
        for(int i=0; i<26;i++){
            Children[i] = NULL;
        }
        this->isTerminal= false;
    }
};
class Trie{
    public :
    TrieNode* root;

    // Constructor for first time initialization of root node
    Trie(){
        root = new TrieNode('\0');
    }

void insertWord(TrieNode* root, string word){
    cout << "Inserting " << word << endl;
    // base case
    if(word.length()==0){
        root->isTerminal = true;
        return;
    }
    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;
    //present
    if(root -> Children[index] != NULL){
        child = root->Children[index];
    }
    else{
        //not present 
        child = new TrieNode(ch);
        root->Children[index] = child;
    }
    //recursion sambhal lega 
    insertWord(child, word.substr(1));
}

    bool searchWord(TrieNode* root, string word){
        if(word.length() == 0){
            return root->isTerminal;
        }
        int index = word[0] - 'a';
        TrieNode* child;

        //present 
        if(root-> Children[index] != NULL){
            child = root->Children[index];
        }
        else{
            //absent
            return false;
        }
        //Recursion
        return searchWord(child,word.substr(1));
    }
};


int main(){
    Trie *t = new Trie(); // helps making the function dynamically 
    
    t->insertWord(t->root,"abcd");
    t->insertWord(t->root,"arm");
    t->insertWord(t->root,"time");
    cout << "present or not " << t->searchWord(t->root, "time") << endl;

    return 0;
}