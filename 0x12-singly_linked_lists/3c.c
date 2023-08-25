list_t *add_node_end(list_t **head, const char *str) {
  list_t *new_node = malloc(sizeof(list_t));
  if (new_node == NULL) {
    return NULL;
  }

  new_node->str = strdup(str);
  new_node->next = NULL;

  if (*head == NULL) {
    *head = new_node;
  } else {
    list_t *last_node = *head;
    while (last_node->next != NULL) {
      last_node = last_node->next;
    }
    last_node->next = new_node;
  }

  return new_node;
}

