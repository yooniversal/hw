#include<stdio.h> 
#include<stdlib.h> 

typedef struct treeNode
{
    int key;
    struct treeNode* left;
    struct treeNode* right;
} treeNode;

typedef int element;

treeNode* insertNode(treeNode* p, int x)
{
    treeNode* newNode;

    if (p == NULL)
    {
        newNode = (treeNode*)malloc(sizeof(treeNode));
        newNode->key = x;
        newNode->left = NULL;
        newNode->right = NULL;

        return newNode;
    }

    else if (x < p->key)  p->left = insertNode(p->left, x);
    else if (x > p->key)  p->right = insertNode(p->right, x);
    else  printf("\n 이미 같은 키가 있습니다! \n");

    return p;
}

treeNode* searchBST(treeNode* root, int x)
{
    treeNode* p;
    p = root;

    while (p != NULL) {
        if (x < p->key) p = p->left;
        else if (x == p->key) return p;
        else p = p->right;
    }
    printf("\n 찾는 키가 없습니다!");
    return p;
}

void displayInorder(treeNode* root)
{
    if (root)
    {
        displayInorder(root->left);
        printf("%d_", root->key);
        displayInorder(root->right);
    }
}

void menu()
{

    printf("\n\t1 : 트리 출력");
    printf("\n\t2 : 숫자 검색");
    printf("\n\t3 : 종료");

    printf("\n> ");
}

int main()
{
    treeNode* root = NULL;
    treeNode* foundedNode = NULL;

    int choice, key;

    root = insertNode(root, 2);  //트리 만들기 
    insertNode(root, 6);
    insertNode(root, 11);
    insertNode(root, 13);
    insertNode(root, 18);
    insertNode(root, 20);
    insertNode(root, 22);
    insertNode(root, 27);
    insertNode(root, 29);
    insertNode(root, 30);
    insertNode(root, 34);
    insertNode(root, 38);
    insertNode(root, 41);
    insertNode(root, 42);
    insertNode(root, 45);
    insertNode(root, 47);

    while (1)
    {

        menu();

        choice = getchar(); getchar();

        switch (choice - '0') {

        case 1: printf("\t이진트리 출력:  ");
            displayInorder(root);  printf("\n");
            break;

        case 2: printf("찾을 숫자를 입력하세요 : ");
            scanf("%d", &key);
            getchar();
            foundedNode = searchBST(root, key);
            if (foundedNode != NULL)
                printf("\n %d 를 찾았습니다! \n", foundedNode->key);
            else
                printf("\n 문자를 찾지 못했습니다. \n");

            break;

        case 3:  return 0;

        default: printf("없는 메뉴입니다. 메뉴를 다시 선택하세요! \n");
            break;
        }
    }
}