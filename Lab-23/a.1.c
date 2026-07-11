#include <stdio.h>
struct Student {
int roll;
char name[50];
int backlogs;
};
int main() {
struct Student s;
FILE *fp = fopen("student.txt", "w");
if (!fp) return 1;
// Example: read 5 students and write to file
for (int i = 0; i < 5; i++) {
scanf("%d %s %d", &s.roll, s.name, &s.backlogs);
fprintf(fp, "%d %s %d\n", s.roll, s.name, s.backlogs);
}
fclose(fp);
// Read file and print roll numbers with more than 5 backlogs
fp = fopen("student.txt", "r");
if (!fp) return 1;
while (fscanf(fp, "%d %s %d", &s.roll, s.name, &s.backlogs) == 3) {
if (s.backlogs > 5) printf("%d\n", s.roll);
}
fclose(fp);
return 0;
}