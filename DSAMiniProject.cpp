#include <iostream>
#include <vector>

using namespace std;

class TreeNode {
    public:
        std::vector<int> queens;
        int n;
        TreeNode* left;
        TreeNode* right;
    
        TreeNode(int n, const std::vector<int>& queens) {
        this->n = n;
        this->queens = queens;
        left = nullptr;
        right = nullptr;
    }
};  


bool isSafe(const std::vector<int>& queens, int row, int col) { 
    for (int i = 0; i < row; i++) {

        if (queens[i] == col || queens[i] - i == col - row || queens[i] + i == col + row) {
        return false;
        }
    }
    return true;
}   


void solveNQueens(TreeNode* node) {
    if (node->queens.size() == node->n) {
    // Found a solution
        for (int i = 0; i < node->n; i++) {
            
            for (int j = 0; j < node->n; j++) {
            
                if (node->queens[i] == j) {
                    std::cout << "Q ";
                }
            
                else {
                std::cout << ". ";
                }
            }
            
            std::cout << std::endl;
        }
        
        std::cout << std::endl;
        }
        else {
            
            for (int col = 0; col < node->n; col++) {
            
                if (isSafe(node->queens, node->queens.size(), col)) {
            
                    std::vector<int> new_queens = node->queens;
            
                    new_queens.push_back(col);
            
                    TreeNode* new_node = new TreeNode(node->n, new_queens);
            
                    if (node->left == nullptr) {
                        node->left = new_node;
                    }     
            
                    else {
                        node->right = new_node;
                    }
                    solveNQueens(new_node);
                }
            }
        }
    }

int main() {

    int n;
    cout<<"Enter size of board: "<<endl;
    cin>>n;
    
    std::vector<int> queens;
    TreeNode* root = new TreeNode(n, queens);

    solveNQueens(root);
    // Clean up the allocated memory
    delete root;
    
    return 0;
}