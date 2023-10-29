void solve(BinaryTreeNode<int> * root, string str, vector<string>&ans){
    if(!root) return;
    if(!root->left && !root->right){
        str += to_string(root->data);
        ans.push_back(str);
        return;
    }
    str += to_string(root->data)+" ";
    solve(root->left, str, ans);
    solve(root->right, str, ans);

}

vector <string> allRootToLeaf(BinaryTreeNode<int> * root) {
    vector<string>ans;
    if(!root) return ans;
    solve(root, "", ans);
    return ans;
}
