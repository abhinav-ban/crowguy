#pragma once
#include "tokenizer.h"

typedef int (*builtin_func)(char **args);


typedef struct {
	const char *name;
	builtin_func fun;
} builtin_t;


int shell_cd(char **tok);
int shell_exit(char **tok);
int shell_help(char **tok);
int shell_ls(char **tok);
int shell_history(char **tok);

extern builtin_t builtins[];
extern int builtin_count;
