#include <stdio.h>
#include <stdlib.h>

// Structure for a binary search tree node
struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Function to create a new node
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the BST recursively
struct node* insert(struct node* root, int data) {
    // If the tree is empty, create a new node and return it
    if (root == NULL) {
        return createNode(data);
    }

    // If the data is less than the root's data, insert it in the left subtree
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else { // If the data is greater than or equal to the root's data, insert it in the right subtree
        root->right = insert(root->right, data);
    }

    return root; // Return the (unchanged) root node
}

// In-order traversal to print the BST elements
void inOrderTraversal(struct node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

int main() {
    struct node* root = NULL;  // Initially empty tree

    // Sample insertions for demonstration
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("In-order traversal of the BST: ");
    inOrderTraversal(root);
    printf("\n");

    return 0;
}
