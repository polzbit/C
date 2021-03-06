#include "stdafx.h"
#include "stdlib.h"

struct node {
	int key;
	struct node *left, *right;
};

struct node *newNode(int item) {
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(struct node *root) {
	if (root != NULL) {
		inorder(root->left);
		printf("%d\n", root->key);
		inorder(root->right);
	}
}

struct node* insert(struct node* node, int key) {
	if (node == NULL) 
		return newNode(key);
	if (key < node->key)
		node->left = insert(node->left, key);
	else if
		node->right = insert(node->right, key);

	return node;
}

struct node* search(struct node* root, int key) {
	if (root == NULL || root->key == key) 
		return root;
	if (root->key < key)
		return search(root->right,key);
	return search(root->left, key);
};

struct node* deleteNode(struct node* root,int key){
	if (root == NULL) return root;
	if (key < root->key)
		root->left = deleteNode(root->left, key);
	else if (key > root->key)
		root->right = deleteNode(root->right, key);
	else {
		if (root -> left == NULL) {
			struct node *temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL) {
			struct node *temp = root->right;
			free(root);
			return temp;
		}
		struct node* temp = minValueNode(root->right);
		root->key = temp->key;
		root->right = deleteNode(root->right, temp->key);
	}
	return root;
};
