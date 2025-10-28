#include <stdio.h>
struct student{
    int ID;
    char *name;
    int grade;
}; //Define a structure before you use it!! 

//TODO: define a function that takes a student struct and prints out the student's info
void print_student(struct student s){
    printf("ID: %d, Name: %s, Grade: %d. \n", s.ID, s.name, s.grade);
}

//TODO: define a function that takes an array of student structs and prints out the info of students who have a grade > 40
// one student per line. 
void check_pass(struct student *s, int num_students){
    for (int i = 0; i < num_students; i++){
        if (s[i].grade > 40){
            print_student(s[i]);
        }
    }
}

void main(){
    struct student song; //declare a student variable
    //initialize
    song.ID = 1024; 
    song.name = "song liu";
    song.grade = 70; 

    printf("%s\n", song.name); //displays "song liu"
    
    //declare + initialize in one line. 
    struct student jack = {1, "jack johnson", 71};
    struct student danny = {2, "danny dennis", 72};
    struct student mx = {3, "mx yi", 73};
    struct student jason = {5, "jason jackson", 40};

    printf("%s\n", jason.name); //displays "jason"

    printf("-------------------------\n");
    //TODO: test your print function here. 
    print_student(jason);

    printf("-------------------------\n");
    struct student students[] = {jack, danny, mx, jason};
    check_pass(students, 4);
}