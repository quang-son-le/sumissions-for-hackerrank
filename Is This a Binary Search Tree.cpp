/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
   bool check(Node* node,int so_left,int so_right)
{
if (node==NULL)
return true;
/*cout<<"so left" << so_left<<endl;
       cout<<"so right" << so_right<<endl;
     cout<<"daat" << node->data<<endl;  */
if (node->data>=so_left || node->data<=so_right)
{/*cout<<"false"*/;return false;}

return check(node->left,node->data,so_right) && check(node->right,so_left,node->data);
}

    // function
	bool checkBST(Node* root) {
		
                    return  check(root,10000,0)    ;      

            
	}
