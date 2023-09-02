#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int value;
	struct Node* left;
	struct Node* right;
};
struct Node* NewNode( int value )
{
	struct Node* node = (struct Node*) malloc(sizeof(struct Node));
	node->value = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
int addNodes(struct Node* iter)
{
  if (iter == NULL)
    return 0;
  return iter->value + addNodes(iter->left) + addNodes(iter->right);
}
int path_to_max_sum(struct Node* root)
{
	if (root==NULL)
	{
		return 0;
	}
        int leftPath; 
	leftPath = path_to_max_sum(root->left);
        int rightPath;
      	rightPath= path_to_max_sum(root->right);
	if (leftPath>rightPath)
	{
		return leftPath + root->value;
	}
	else{
		return rightPath + root->value;	
	}
}
/*
 *    1
 *   5  10
 *  20 4 21 20
 * 999   13   15
 * */
int main(){
  struct Node* root = NewNode(1);
  root->left = NewNode(5);
  root->right = NewNode(10);
  root->left->left = NewNode(20);
  root->left->right = NewNode(4);
  root->right->left = NewNode(21);
  root->right->right = NewNode(20);
  root->left->left->left = NewNode(999);
  root->right->left->right = NewNode(13);
  root->right->right->right = NewNode(15);
  printf("Max sum of tree nodes: %d\n", path_to_max_sum(root));
  return 0;
} 
