// C++ program to find the maximum weight
// with given prefix.
#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

// Structure of a trie node
struct trieNode
{
	// Pointer its children.
	struct trieNode *children[26];

	// To store weight of string.
	int weight;
};

// Create and return a Trie node
struct trieNode* getNode()
{
	struct trieNode *node = new trieNode;
	node -> weight = INT_MIN;

	for (int i = 0; i < 26; i++)
		node -> children[i] = NULL;
}

// Inserting the node in the Trie.
struct trieNode* insert(char str[], int wt, int idx,
								struct trieNode* root)
{
	int cur = str[idx] - 'a';

	if (!root -> children[cur])
		root -> children[cur] = getNode();

	// Assigning the maximum weight
	root->children[cur]->weight =
				max(root->children[cur]->weight, wt);

	if (idx + 1 != strlen(str))
		root -> children[cur] =
		insert(str, wt, idx + 1, root -> children[cur]);

	return root;
}

// Search and return the maximum weight.
int searchMaximum(char prefix[], struct trieNode *root)
{
	int idx = 0, n = strlen(prefix), ans = -1;

	// Searching the prefix in TRie.
	while (idx < n)
	{
		int cur = prefix[idx] - 'a';

		// If prefix not found return -1.
		if (!root->children[cur])
			return -1;

		ans = root->children[cur]->weight;
		root = root->children[cur];
		++idx;
	}

	return ans;
}

// Return the maximum weight of string having given prefix.
int maxWeight(char str[MAX][MAX], int weight[], int n,
									char prefix[])
{
	struct trieNode* root = getNode();

	// Inserting all string in the Trie.
	for (int i = 0; i < n; i++)
		root = insert(str[i], weight[i], 0, root);

	return searchMaximum(prefix, root);

}

// Driven Program
int main()
{
	int n = 3;
	char str[3][MAX] = {"geeks", "geeksfor", "geeksforgeeks"};
	int weight[] = {15, 30, 45};
	char prefix[] = "geek";

	cout << maxWeight(str, weight, n, prefix) << endl;

	return 0;
}
