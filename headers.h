#ifndef HEADER_
#define HEADER_

int main(void);

void comandex(char *arg[]);

void printpids();

char *get_path(char *command);

void exit_shell(void);

void list_files(void);

void builtin(char *args[]);

#endif
