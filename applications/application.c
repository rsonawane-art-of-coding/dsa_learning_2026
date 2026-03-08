#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "application.h"
#include "../data_structure/dll/dll.h"

dll_t *student_db = NULL;
dll_t *employee_db = NULL;


void print_student_data (dll_t *student_db)
{
    int index = 0;

    student_t *student_record = NULL;

    node_t *curr_node = student_db->head;

    printf("%6s %12s %8s %8s %4s\n", "Sr.No", "Roll Number", "Name", "Class", "Age");
    while (curr_node)
    {
        student_record = (student_t *)curr_node->data;

        printf("%6d %12d %8s %8d %4d\n",
                index,
                student_record->roll_num,
                student_record->name,
                student_record->class,
                student_record->age);
        index++;
        curr_node = curr_node->next;
    }
}

int main(void) {

    /* Lets create student database using dll */
    student_t *student = NULL;
  
    student_db = create_dll();
    student = calloc(1, sizeof(student_t));
    student->roll_num  = 10;
    strncpy(student->name, "bob", sizeof("bob"));
    student->class  = 1;
    student->age = 6;

    dll_insert_node(student_db, student);
    
    student = calloc(1, sizeof(student_t));
    student->roll_num  = 20;
    strncpy(student->name, "joe", sizeof("bob"));
    student->class  = 1;
    student->age = 6;

    dll_insert_node(student_db, student);
    
    student = calloc(1, sizeof(student_t));
    student->roll_num  = 11;
    strncpy(student->name, "ron", sizeof("bob"));
    student->class  = 1;
    student->age = 6;

    dll_insert_node(student_db, student);
    
    student = calloc(1, sizeof(student_t));
    student->roll_num  = 30;
    strncpy(student->name, "sami", sizeof("sami"));
    student->class  = 1;
    student->age = 6;

    dll_insert_node(student_db, student);
    
    
    print_student_data(student_db);

    return 0;
}
