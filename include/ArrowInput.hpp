#ifndef ARROWINPUT_HPP
#define ARROWINPUT_HPP

char getch_linux();
void clear();
void drawMenu(char arr[][10], int size, int line);
void waitForEscape();
void arrowkey(int line);
void stringCopy(char arr1[], char arr2[], int size);
int stringLength(char arr[]);
char* stringCopy2(char arr[]);
#endif