/*
 * week4_2_struct_student.c
 * Author: [Abhidev Sreeragam Nair]
 * Student ID: [241ADB110]
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Students should define a 'Student' struct with fields like name, id, and
 * grade. Then create a few instances and print them.
 */

#include <stdio.h>
#include <string.h>

// Define struct Student with fields: name (char[]), id (int), grade (float)
struct Student {
  char name[50];
  int id;
  float grade;
};

int main(void) {
  // Declare and assign values to Student variables
  struct Student s1, s2;

  // Assign values manually
  strcpy(s1.name, "Alice");
  s1.id = 101;
  s1.grade = 89.5f;

  strcpy(s2.name, "Bob");
  s2.id = 102;
  s2.grade = 92.0f;

  // Print struct contents
  printf("Student 1:\n");
  printf("  Name: %s\n", s1.name);
  printf("  ID: %d\n", s1.id);
  printf("  Grade: %.2f\n", s1.grade);

  printf("\nStudent 2:\n");
  printf("  Name: %s\n", s2.name);
  printf("  ID: %d\n", s2.id);
  printf("  Grade: %.2f\n", s2.grade);

  return 0;
}