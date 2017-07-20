using namespace std;
#include<bits/stdc++.h>
#include<vector>
#define getl(a) scanf("%lld",&a)
#define putl(a) printf("%lld\n",a)
#define putd(a) printf("%d\n",a)
#define getu(a) scanf("%llu",&a)
#define putu(a) printf("%llu\n",a)
#define ll long long
#define pb push_back
#define ppb pop_back
#include<map>
#include<stack>
#define vi vector<ll>::iterator
#define mi multiset<char>::iterator
#define mapi map<string,ll>::iterator
#define seti set<ll>::iterator
#define pairi pair<ll,ll>::iterator
#include<queue>
#define mp make_pair
//#define len length()
#define sz size()
#define llu unsigned long long
#include<string>
#define LEFT(v) 2*v
#define RIGHT(v) 2*v+1
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define ROF(i,a,b) for(ll i=b-1;i>=a;i--)
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define F first
#define S second
#define F first
#define S second
#define all(a) a.begin(),a.end()


typedef string String;
typedef long Long;

ll quicksort(vector<ll> ,ll);
double calc(double);
ll bfs(char**,ll,ll);
string a;
bool flag=false;
void recur(struct TrieNode *pCrawl,string key);
//complete dfs with adjacency lists
//its automatic backtracking
//just needed a bok for the weighted part of the pt07y

#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
 
// Alphabet size (# of symbols)
#define ALPHABET_SIZE (26)
 
// Converts key current character into index
// use only 'a' through 'z' and lower case
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
 
// trie node
struct TrieNode
{
    struct TrieNode *children[ALPHABET_SIZE];//min pointer concept//[26]->27 positions 0-26
 
    // isLeaf is true if the node represents
    // end of a word
    bool isLeaf;//abstract concept//leaf->final letter of an INSERTION
};


// Returns new trie node (initialized to NULLs)
struct TrieNode *getNode(void)//present only if i move till the leaf, otherwise it is not present(present->traverse till leaf-->middle ->not present)
{
    struct TrieNode *pNode = NULL;
 
    pNode = (struct TrieNode *)malloc(sizeof(struct TrieNode));
 
    if (pNode)
    {
        int i;
 
        pNode->isLeaf = false;
 
        for (i = 0; i < ALPHABET_SIZE; i++)
            pNode->children[i] = NULL;
    }
 
    return pNode;
}

// If not present, inserts key into trie
// If the key is prefix of trie node, just marks leaf node
void insert(struct TrieNode *root, string key)//const because the function cannot change it -> that's y
{
    int level;
    int length = key.length();
    int index;
 
    struct TrieNode *pCrawl = root;
 
    for (level = 0; level < length; level++)
    {
        index = CHAR_TO_INDEX(key[level]);
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();
 
        pCrawl = pCrawl->children[index];
    }
 
    // mark last node as leaf
    pCrawl->isLeaf = true;
}
 
// Returns true if key presents in trie, else false
bool search(struct TrieNode *root, string key)//most important function
{
	bool flag2=true;
    int level,level1;
    int length = key.length();
    int index;
    struct TrieNode *pCrawl = root;
 
    for (level = 0; level < length; level++)
    {
        index = CHAR_TO_INDEX(key[level]);
 
        if (!pCrawl->children[index])
            return false;
 
        pCrawl = pCrawl->children[index];
    }
    for (level1 = 0; level1 < ALPHABET_SIZE; level1++)
	{
	  if(pCrawl->children[level1])
	  {
	  	flag2=false;
	  }
		
	}
    if(flag2==false)
    if(pCrawl != NULL /*&& pCrawl->isLeaf*/)// meaning -> present //now print all//need not be a leaf//real prefix -> perfect key
    {//repititions are covered auto by trie
	    recur(pCrawl,key);
    }//main recursive function
    else
    return false;
    
        
}
//prefix till pCrawl later on
void recur(struct TrieNode *pCrawl,string key)
{
	    int level,level1;
        for (level = 0; level < ALPHABET_SIZE; level++)
	    {
	    	//returns after all the alphabets
		  	if(pCrawl->children[level])
		  	{
		  	   a.push_back(level+97);//i
		  	   if(pCrawl->children[level]->isLeaf)//inside isleaf
				 {
				   cout<<a<<endl;
				   for (level1 = 0; level1 < ALPHABET_SIZE; level1++)
	    			{
	    				if(pCrawl->children[level]->children[level1])
	    				{
	    				flag=true;
	    				break;
	    			    }
	    			}
	    			if(!flag)
	    			{//clear from key length +1
	    			a.erase(a.begin()+key.length()+1,a.end());
	    			flag=false;
	    		    }
			     }
		  	   recur(pCrawl->children[level],key);
		  	   
		    }//idea was words but space?
        }	
	
}

int main()
{
  //trie,my thought
  //O(m);worst case m-> size of word
  ll t,i,j,encoded_number,d,l,len,k,n;
  string s,temp;
  cin>>n;
  struct TrieNode *root = getNode();
  	for(i=0;i<n;i++)
  	{
  		cin>>s;//form the trie <compare trie and tree and when to use it -> this is the exact doubt to proceed further
  		//insert
	    // Construct trie
	    insert(root, s);
	    
  	}
  	cin>>k;
  	for(i=0;i<k;i++)
  	{
  		cin>>temp;
  		a=temp;
  		cout<<"Case #"<<i+1<<":"<<endl;
  		if(!search(root,temp))
  		cout<<"No match.\n";
  		
    }

  
}

