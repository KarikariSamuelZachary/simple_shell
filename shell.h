#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <sys/wait.h>
#include <dirent.h>
#include <sys/stat.h>
char *readline(int *eof);
char **token(char *line);
int launch(char **args, char **env, char *argv);
int hsh_execute(char **args, char **env, char *argv);
char *file_check(char *args);
void *_realloc(void *ptr, size_t old_size, size_t new_size);
void our_printf(const char *input, ...);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);

int _strlen(char *s);
int _strcmp(char *s1, char *s2);
int hsh_exit(char **args);
int hsh_env(char **args);
int hsh_cd(char **args);

#endif
