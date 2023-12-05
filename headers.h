#ifndef HEADER_
#define HEADER_

int main(void);

void comandex(char *arg[]);

void printpids();

char *get_path(char *command);

void exitshell(char *args[]);

void listfiles(char *args[]);

void builtin(char *args[]);

#endif
