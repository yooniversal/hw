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
    else  printf("\n �̹� ���� Ű�� �ֽ��ϴ�! \n");

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
    printf("\n ã�� Ű�� �����ϴ�!");
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

    printf("\n\t1 : Ʈ�� ���");
    printf("\n\t2 : ���� �˻�");
    printf("\n\t3 : ����");

    printf("\n> ");
}

int main()
{
    treeNode* root = NULL;
    treeNode* foundedNode = NULL;

    int choice, key;

    root = insertNode(root, 2);  //Ʈ�� ����� 
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

        case 1: printf("\t����Ʈ�� ���:  ");
            displayInorder(root);  printf("\n");
            break;

        case 2: printf("ã�� ���ڸ� �Է��ϼ��� : ");
            scanf("%d", &key);
            getchar();
            foundedNode = searchBST(root, key);
            if (foundedNode != NULL)
                printf("\n %d �� ã�ҽ��ϴ�! \n", foundedNode->key);
            else
                printf("\n ���ڸ� ã�� ���߽��ϴ�. \n");

            break;

        case 3:  return 0;

        default: printf("���� �޴��Դϴ�. �޴��� �ٽ� �����ϼ���! \n");
            break;
        }
    }
}