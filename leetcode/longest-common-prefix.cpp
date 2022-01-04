#include <bits/stdc++.h>
using namespace std;

class Trie {
  public:
    Trie *node[26];
    int cnt = 0;
    bool end = false;

    static string dfs(Trie *t, int len) {
      if (t == NULL) return "";
      string ans = "", child = "";
      for (int i = 0; i < 26; i++) {
        if(t->node[i] != NULL && t->node[i]->cnt == len) {
          if (!t->node[i]->end) child += dfs(t->node[i], len);
          child += 'a'+i;        
        }
        if (ans.length() < child.length()) {
          ans = child;
        }
      }
      return ans;
    }

    static void insert(Trie *t, string str) {
      Trie *p = t;
      for (int i = 0; i < str.length(); i++) {
        int pos = str[i]-'a';        
        if (p->node[pos] == NULL) {
          p->node[pos] = init();  
        }
        p = p->node[pos];
        p->cnt++;
      }
      p->end = true;
    }

    static Trie* init() {
      Trie *t = new Trie;
      t->end = false;
      for (int i = 0; i < 26; i++) 
        t->node[i] = NULL;
      return t;
    }
};

class Solution {
public:    
    string longestCommonPrefix(vector<string>& strs) {
        Trie *root = Trie::init();
        for(int i = 0; i < strs.size(); i++) {
          Trie::insert(root, strs[i]);
        }
        string ans = Trie::dfs(root, strs.size());
        reverse(ans.begin(), ans.end());
        return ans;
    }
};