#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table.
 * @key: The key to look for.
 *
 * Return: The value associated with the key, or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Calculate the index using the key_index function */
	index = key_index((unsigned char *)key, ht->size);

	/* Traverse the linked list at the calculated index */
	current = ht->array[index];
	while (current != NULL)
	{
		/* Check if the current node's key matches the target key */
		if (strcmp(current->key, key) == 0)
			return (current->value); /* Return the value if key is found */

		current = current->next;
	}

	/* Key not found */
	return (NULL);
}

