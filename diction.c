#include<stdio.h>
//1
typedef struct dic{
	char *english;
	char *korean[3];
}dic;

typedef struct list{
	char *dic_list;
	dic diction;
	struct list *next;
}list;

FILE* flist, *fdic;

list *list_node, *list_head;
dic *node, *head;

int main(){
	int sel;

	printf(">>영어 단어 암기 프로그램<<"\n);
	printf("1. 영어 단어 맞추기\t 2.플래쉬카드\n 3.행맨\t 4.단어장 관리\n 5.프로그램 종료\n");

	printf("번호를 선택하세요:");
	scanf("%d", &sel);
	while(1){
		switch(sel){
			case 1:
				eng_quiz();
				break;
			case 2:
				fla_card();
				break;
			case 3:
				hangman();
				break;
			case 4:
				dic_man();
				break;
			case 5:
				return 0;
		}
	}
}

dic load_file(){
	int dic_num;
	int i;
	char buf[10];

	flist = fopen("dic.list", "at");
	fclose(a);
	flist = fopen("dic.list", "r");

	printf("파일명(일차):");
	scanf("%d", dic_num);

	list_head  = (list*)calloc(1, sizeof(list));
	list_head->next = NULL;

	list_node = (list*)calloc(1, sizeof(list));
	list_node = list_head;						//dic.list 불러오기
	
	list _newnode = (list*)calloc(1, sizeof(list));
	list_newnode->next = NULL;

	for(i=0;i<dic;i++){
		fscanf(flist, "%s\n", buf);
		
		list_newnode->dic_list = (char*)calloc(strlen(buf), sizeof(char));

		strcpy(newnode->dic_list, buf);

		node->next = newnode

	head = (dic*)calloc(1, sizeof(dic));
	head->next = NULL;

	node = (dic*)calloc(1, sizeof(dic));
	node = head;
		

void hangman(){
	load_file();
	select_word();

	char buf[30];
	
	strcpy(buf, english);

