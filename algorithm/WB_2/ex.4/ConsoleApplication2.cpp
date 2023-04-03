#include <iostream>
#include <queue>
#include <stack>


struct Node
{
    int key;
    Node* left;
    Node* right;
    Node* parent;
    int count;
    int balans;
    char color;
};

int height(Node* node) {
    if (node == nullptr) return 0;
    return 1 + std::max(height(node->left), height(node->right));
}

// Функция поворота узла влево
Node* rotateleft(Node* node) {
    Node* temp = node->right;
    node->right = temp->left;
    if (temp->left != nullptr) {
        temp->left->parent = node;
    }
    temp->left = node;
    temp->parent = node->parent;
    node->parent = temp;
    if (temp->parent != nullptr) {
        if (temp->parent->left == node) {
            temp->parent->left = temp;
        }
        else {
            temp->parent->right = temp;
        }
    }
    node->balans = height(node->right) - height(node->left);
    temp->balans = height(temp->right) - height(temp->left);
    return temp;
}


// Функция поворота узла вправо
Node* rotateright(Node* node) {
    Node* temp = node->left;
    node->left = temp->right;
    if (temp->right != nullptr) {
        temp->right->parent = node;
    }
    temp->right = node;
    temp->parent = node->parent;
    node->parent = temp;
    if (temp->parent != nullptr) {
        if (temp->parent->left == node) {
            temp->parent->left = temp;
        }
        else {
            temp->parent->right = temp;
        }
    }
    node->balans = height(node->right) - height(node->left);
    temp->balans = height(temp->right) - height(temp->left);
    return temp;
}


// Функция балансировки узла
Node* balance(Node* node) {
    if (node->balans == 2) {
        if (node->right->balans < 0) {
            node->right = rotateright(node->right);
        }
        return rotateleft(node);
    }
    if (node->balans == -2) {
        if (node->left->balans > 0) {
            node->left = rotateleft(node->left);
        }
        return rotateright(node);
    }
    return node;
}


void Colorize(Node* root) {
    if (root == NULL) {
        return;
    }

    if (root->color == 'B') {
        if (root->left != NULL) {
            root->left->color = 'R';
        }
        if (root->right != NULL) {
            root->right->color = 'R';
        }
    }

    Colorize(root->left);
    Colorize(root->right);
}



// Функция добавления узла в дерево
Node* addNode(int key, Node* root)
{
    if (!root)
    {
        root = new Node;
        root->key = key;
        root->left = nullptr;
        root->right = nullptr;
        root->parent = nullptr;
        root->count = 1;
        root->balans = 0;
        root->color = 'B';
    }
    else if (key == root->key)
    {
        root->count++;
    }
    else if (key < root->key)
    {
        root->left = addNode(key, root->left);
        root->left->parent = root;
    }
    else if (key > root->key)
    {
        root->right = addNode(key, root->right);
        root->right->parent = root;
    }

    root->balans = height(root->right) - height(root->left);

    return balance(root);
}


// Обход и печать данных дерева (Обратный)
void printTree(Node* root)
{
    if (root != nullptr)
    {
        printTree(root->left);
        std::cout << root->key << " (count = " << root->count << ")" << ", Balans: " << root->balans << std::endl;
        printTree(root->right);
    }
}

// Обход и печать данных дерева (Обратный)
void print(Node* root, int level = 0)
{
    if (root != nullptr) {
        print(root->left, level + 1);
        for (int i = 0; i < level; i++) {
            std::cout << "     ";
        }
        // std::cout << root->key << " (bal = " << root->balans << ") ";
        std::cout << root->key << " (color = " << root->color << ")" << std::endl;
        print(root->right, level + 1);
    }
}

// Генератор случайных чисел
int random(int min = -100, int max = 100)
{
    return min + rand() % (max - min + 1);
}


int main()
{
    Node* root = nullptr;
    root = addNode(2, root);
    root = addNode(1, root);
    root = addNode(4, root);
    root = addNode(3, root);
    root = addNode(6, root);
    root = addNode(15, root);
    root = addNode(7, root);
    root = addNode(11, root);
    root = addNode(5, root);

    //root = addNode(1, root);
    //root = addNode(2, root);
    //root = addNode(3, root);

    //root = addNode(13, root);
    //root = addNode(8, root);
    //root = addNode(17, root);
    //root = addNode(1, root);
    //root = addNode(11, root);
    //root = addNode(15, root);
    //root = addNode(25, root);
    //root = addNode(6, root);
    //root = addNode(22, root);
    //root = addNode(27, root);

    std::cout << std::endl;
    printTree(root);
    std::cout << std::endl;
    print(root);
    std::cout << std::endl;

    Colorize(root);

    std::cout << std::endl;
    print(root);
    std::cout << std::endl;
}