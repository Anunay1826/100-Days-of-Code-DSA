int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(101 * sizeof(int));
    *returnSize = 0;

    struct TreeNode* stack[101];
    int top = -1;

    if (root == NULL) return result;
    stack[++top] = root;

    while (top != -1) {
        struct TreeNode* curr = stack[top--];
        result[(*returnSize)++] = curr->val;

        // Right pehle push karo (taaki left pehle process ho)
        if (curr->right) stack[++top] = curr->right;
        if (curr->left)  stack[++top] = curr->left;
    }

    return result;
}
