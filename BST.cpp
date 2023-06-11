#include <iostream>
using namespace std;

struct Bstnode{
	int data;
	Bstnode* left;
	Bstnode* right;
};
Bstnode* GetNewNode(int data){
	Bstnode* newNode = new Bstnode();
	newNode->data=data;
	newNode->left=newNode->right=NUL;
	return newNode;

}

void Insert(Bstnode** root,int data){
	if(root==NULL){
		root=GetNewNode(data);
		return root;
	}
	else if(data <= root->data data){
		root->left = Insert(root->left,data)
	}
	else (data <= root->data data){
		root->right = Insert(root->right,data)
	}
	return root;
}

bool search(Bstnode* root,int data){
	if(root==NULL)return false;
	if(root->data=data)return search(root->left,data);
	else return search(root->right,data);
}
int main(){
	Bstnode* root = NULL;
	root=Insert(root,15);
	root=Insert(root,10);
	root=Insert(root,25);
	root=Insert(root,8);
	root=Insert(root,20);
	root=Insert(root,12);
	
	int number;
	cout<<"ENter the number be searched \n";
	cin>>number;
	if(search(root,number)==true ) cout<<"Found\n";
	else cout<<"Not found\n";
}

