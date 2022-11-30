// A nice place for you to mess with the functions, while you're developing.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "search_util.h"

int main(void) {
	char words[10][6] = {"stalk", "scrap", "shear", "batch", "motif", "tense", "ultra", "vital", "ether", "nadir" };

  // make a dynamically-allocated vocabulary that you can mess with, including
  // freeing elements of it when necessary.
	char **vocabulary = calloc(10, sizeof(char *));
	for (int i=0; i < 10; i++) {
		vocabulary[i] = strdup(words[i]);
	}
	size_t num_words = 10;

	int letter_scores[26];

	for (int i = 0; i < 26; i++) { //makes an array of scores
		letter_scores[i] = score_letter('a' + i, vocabulary, num_words);
	}


	int filtered = filter_vocabulary_green('s', 0, vocabulary, num_words);
	printf("%d\n", filtered);

	for(int j = 0; j < 10; j++) {
		printf("%s\n", vocabulary[j]);
	}

	//int result = score_letter('e', vocabulary, num_words);
	//printf("%d\n", result); 

  // You don't have to mess with your functions in here, but you might like to
  // do that.
	free_vocabulary(vocabulary, num_words);
  
	return 0;
}
