#include <stdio.h>
#include <stdlib.h>

// node of the tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// utility function to create a node
struct Node* createNode(int data)
{
    struct Node* newNode
	= (struct Node*)malloc(sizeof(struct Node));
    clrscr();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void preorderTraversal(struct Node* root)
{
    // cheking if the current node is NULL
    if (root!=NULL)
    {
    printf("%d ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
    }
}
// Function to perform inorder traversal
void inorderTraversal(struct Node* root)
{
    // cheking if the current node is NULL
    if (root!=NULL){

    // traversing left subtree
    inorderTraversal(root->left);
    // traversing current node
    printf("%d ", root->data);
    // traversing right subtree
    inorderTraversal(root->right);
    }
}
void postorderTraversal(struct Node* root)
{
    // cheking if the current node is NULL
    if (root != NULL) {

	postorderTraversal(root->left);
	postorderTraversal(root->right);
	printf("%d ", root->data);
    }
}

int main()
{
    // Example tree creation
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    printf("\n Preorder Traversal: ");
    preorderTraversal(root);
    printf("\n");
    printf("Inorder Traversal: ");
    inorderTraversal(root);
    printf("\n");
    printf("\n Postorder TRaversal: ");
    postorderTraversal(root);
    printf("\n");
    getch();
    return 0;
}