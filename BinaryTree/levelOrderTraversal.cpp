class Solution
{
   public:
   vector<int> levelOrder(Node* node)
   {
     vector<int> ans;
     queue<Node*>q;
     q.push(node);
     q.push(NULL);
     while(!q.empty())
     {
         Node* ptr=q.front();
         q.pop();
         if(ptr!=NULL){
             ans.push_back(ptr->data);
             if(ptr->left!=NULL){
                 q.push(ptr->left);
             }
             if(ptr->right!=NULL){
                 q.push(ptr->right);
             }
         }
     }
      return ans;
   }
};