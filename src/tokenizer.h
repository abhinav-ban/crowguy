#pragma once

typedef struct n {
    char *cmd;
    struct n *next;
} node;

node *node_cmd(const char *token);
node *append_cmd(node **head, node *nex);

