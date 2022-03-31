//
// Created by zqq83 on 2022/3/31.
//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define DataType int
#define Num 10
typedef struct treeNode{
    DataType data;
    struct treeNode* lchild;
    struct treeNode* rchild;

}Node;
typedef struct binaryTree
{
    struct treeNode* treeHead;
    int nodeNum;

}Btree;
int  test()
{
    return 0;
}
