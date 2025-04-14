#include <stdlib.h>
#include <stdio.h>
#include "ast.h"

// create a node of a given category with a given lexical symbol
struct node *newnode(enum category category, char *token) {
    struct node *new = malloc(sizeof(struct node));
    new->category = category;
    new->token = token;
    new->children = malloc(sizeof(struct node_list));
    new->children->node = NULL;
    new->children->next = NULL;
    new->siblings = malloc(sizeof(struct node_list));
    new->siblings->node = NULL;
    new->siblings->next = NULL;
    return new;
}

// append a node to the list of children of the parent node
void addchild(struct node *parent, struct node *child) {
    struct node_list *new = malloc(sizeof(struct node_list));
    new->node = child;
    child->parent=parent;
    new->next = NULL;
    struct node_list *children = parent->children;
    while(children->next != NULL)
        children = children->next;
    children->next = new;
}
void addsibling(struct node *node, struct node *sibling) {
    struct node_list *new = malloc(sizeof(struct node_list));
    new->node = sibling;
    sibling->parent=NULL;
    new->next = NULL;
    struct node_list *siblings = node->siblings;
    while(siblings->next != NULL)
        siblings = siblings->next;
    siblings->next = new;
}

// get a pointer to a specific child, numbered 0, 1, 2, ...
struct node *getchild(struct node *parent, int position) {
    struct node_list *children = parent->children;
    while((children = children->next) != NULL)
        if(position-- == 0)
            return children->node;
    return NULL;
}

// count the children of a node
int countchildren(struct node *node) {
    int i = 0;
    while(getchild(node, i) != NULL)
        i++;
    return i;
}

// category names #defined in ast.h
char *category_name[] = names;

// traverse the AST and print its content
void show(struct node *node, int depth) {
    int i;
    for(i = 0; i < depth; i++)
        printf("..");
    if(node->token == NULL)
        printf("%s\n", category_name[node->category]);
    else
        printf("%s(%s)\n", category_name[node->category], node->token);

    //print childrem
    struct node_list *child = node->children;
    while((child = child->next) != NULL)
        show(child->node, depth+1);

    //print siblings
    struct node_list *sibling = node->siblings;
    while((sibling = sibling->next) != NULL)
        show(sibling->node, depth);    
}

// free the AST
void deallocate(struct node *node) {
    if(node != NULL) {
        struct node_list *child = node->children;
        while(child != NULL) {
            deallocate(child->node);
            struct node_list *tmp = child;
            child = child->next;
            free(tmp);
        }
        if(node->token != NULL)
            free(node->token);
        free(node);
    }
}



int countSiblings(struct node *node) {
    int count = 0;
    struct node_list *siblings = node->siblings;
    if(siblings==NULL)
        return count;
        
    while (siblings->next != NULL) {
        count++;
        siblings = siblings->next;
    }
    return count;
}

void deleteNode(struct node *node) {
    if (node->parent != NULL) {
        struct node_list *parent_children = node->parent->children;
        
        // Find the node in the parent's children list
        while (parent_children->next != NULL && parent_children->next->node != node) {
            parent_children = parent_children->next;
        }

        // Remove the node from the parent's children list
        if (parent_children->next != NULL) {
            struct node_list *temp = parent_children->next;
            parent_children->next = temp->next;

            // Pass children to the parent
            struct node_list *children = node->children;
            while (children->next != NULL) {
                struct node_list *temp_child = children->next;
                children->next = temp_child->next;
                addchild(node->parent,temp_child->node);
            }

            free(temp); // Free the node that was deleted
        }
    }
}
