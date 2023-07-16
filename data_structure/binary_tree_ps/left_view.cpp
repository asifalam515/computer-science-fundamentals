// https://www.codingninjas.com/studio/problems/left-view-of-a-binary-tree_920519?leftPanelTab=1
// vector<int> getLeftView(TreeNode<int> *root)
// {
//     //    Write your code here
// bool frq[10000]={false};
// queue<pair<TreeNode<int>*,int>>q;
// if(root)q.push({root,1});

// vector<int>v;
// while(!q.empty())
// {
//     pair<TreeNode<int>*,int>pr=q.front();
//     q.pop();
//     TreeNode<int>* node=pr.first;
//     int level=pr.second;

//     if(frq[level] == false)
//     {
//         v.push_back(node->data);
//         frq[level]=true;
//     }

//     if(node->left)q.push({node->left,level+1});
//     if(node->right)q.push({node->right,level+1});
// }
// return v;
// }