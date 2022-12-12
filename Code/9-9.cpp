#include<iostream>
using namespace std;
struct list{
	float data;
	list *next;
};
// stack:ngan xep , LiFO-last in (push(??)) first out (pop(?))

list *them(list *ptr,float x){
	list *ptr1;
	ptr1 =new list;
	ptr1->data=x;
	ptr1->next=ptr;
	return ptr1;
}
int main(){
	list *ptr1,*ptr2;
	ptr1=new list;
	ptr1->data =3.14;
	ptr1->next = NULL;
	
	ptr2=new list;
	ptr2->data=1.21;
	ptr2->next=ptr1;
	
	ptr2=them(ptr2,-3);
	
	list *temp;
	temp=ptr2;
	cout << temp->data<<endl;
	
	temp=temp->next;
	cout<<temp->data;
}
