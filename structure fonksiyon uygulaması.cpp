#include <stdio.h>

// creating a student structure template
struct student{
  char firstname[10];
  char lastname[10];
  int  id;
  int score;
};

  
// function declaration
struct student getDetail(void);
void displayDetail(struct student std);

int main(void){
  
  // creating a student structure array variable
  struct student stdArr;
  
  // taking user input
    printf("Enter detail of student \n");
    stdArr = getDetail();
  
  // output
    printf("\nStudent  Detail:\n");
    displayDetail(stdArr);
  
  return 0;
}

struct student getDetail(void){
  // temp structure variable
  struct student std;
  
  printf("Enter First Name: ");
  scanf("%s", std.firstname);
  
  printf("Enter Last Name: ");
  scanf("%s", std.lastname);
  
  printf("Enter ID: ");
  scanf("%d", &std.id);
  
  printf("Enter Score: ");
  scanf("%d", &std.score);
  
  return std;
}

void displayDetail(struct student std){
  
  char *Myfirstname;
  char *Mylastname;
  int   Myid;
  int   Myscore;
	  
	  Myfirstname=std.firstname;
      Mylastname =std.lastname;
      Myid       =std.id;
      Myscore    =std.score;
	
  printf("MyFirstname: %s\n", Myfirstname);
  printf("MyLastname:  %s\n", Mylastname);
  printf("MyID:        %d\n", Myid);
  printf("MyScore:     %d\n", Myscore);
}
