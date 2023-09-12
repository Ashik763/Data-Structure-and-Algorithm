// 1022. Sum of Root To Leaf Binary Numbers


class Solution {
public:
    int sum = 0;
    void dfs(TreeNode* vertex,string s){
      
         s.push_back(vertex->val + 48);
         bool paici = false;
        if(vertex->left!=NULL && vertex->right == NULL){
            
             dfs(vertex->left,s);
        }
        else if(vertex->left==NULL && vertex->right !=NULL){
               
                dfs(vertex->right,s);
        }
        else if(vertex->left==NULL && vertex->right ==NULL){
                sum = sum + stoi(s, 0, 2);
                return;
        }
        else{
             dfs(vertex->left,s);
             dfs(vertex->right,s);

        }
         
          
      
    }

    int sumRootToLeaf(TreeNode* root) {
        string s="";
       sum = 0;
        dfs(root,s);
        return sum;
    }
};