////////////////////////////
// Nicholas Chrysanthou
// NChrysanthou@myseneca.ca
// 161264197
// IPC-NEE
////////////////////////////

#ifndef HELPER_H
#define HELPER_H
int currentYear(void);
void clearStandardInputBuffer(void);

int getInteger();
int getPositiveInteger();
double getDouble();
double getPositiveDouble();
int getIntFromRange(int min, int max);
char getCharOption(const char *entries);
char getCString(char *str, int min, int max);

#endif