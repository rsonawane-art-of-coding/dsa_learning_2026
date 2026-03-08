#include<stdio.h>
#include<applicatio.h>
#include "../DLL/dll.h"

dll_t *student_db = NULL;
dll_t *employee_db = NULL;


void print_student_data (ddl_t *student_db)
{
    int index = 0;

    student_t *student_record = NULL;

    node_t *curr_node = student_db->head;
    while (curr_node)
    {
        student_record = (student_t *)curr_node->data;

        printf("No.: %d \t Roll Number : %d \t Name %s \t Class %d \t Age %d", 
                index,
                student_record->roll_num,
                student_record->class,
                student_record->name,
                student_record->age);
        index++;
        student_record = curr_student->next;
    }
}

int main(void) {

    /* Lets create student database using dll */
    student_db = create_dll();

    student_t student_1  = {
        .roll_num = 1,
        .class = 1,
        .name = 'bob',
        .age = 6,
    };
    
    student_t student_2  = {
        .roll_num = 2,
        .class = 1,
        .name = 'rob',
        .age = 5,
    };
    
    student_t student_3  = {
        .roll_num = 3,
        .class = 1,
        .name = 'eli',
        .age = 7,
    };
    
    student_t student_1  = {
        .roll_num = 4,
        .class = 1,
        .name = 'arine',
        .age = 5,
    };
    

    dll_insert_node(student_db, student_1);
    dll_insert_node(student_db, student_2);
    dll_insert_node(student_db, student_3);
    dll_insert_node(student_db, student_4);

    print_student_data(student_db);

    return 0;
}
