Kazuma Takahashi
Feb 26th, 2022

## Purpose of the program
The purpose of our problem is to implement an AI that solves worlde efficiently.
## Layout/Structure of the programh
The solver.c will run the program using the functions from search\_util.c.
## Explanation of how each program works
* int score\_letter - Returns the number of words in a vocabulary that has a chosen letter.
* int score\_word - Calculates the score for a given word.

* size\_t filter\_vocabulary\_gray - Filters the vocabulary list based on the knowledge that the letter does not occur in that secret word.
* size\_t filter\_vocabulary\_yellow - Filters the vocabulary list based on the knowledge that the specified letter occurs in the word but not at this particular position.
* size\_t filter\_vocabulary\_green - Filters down the vocabulary based ont he knowlege that the specified letter definitely occurs at the specified position.
## Supporting pseudocode
int score\_letter { Keep track of number of words that has the letter whole looping the vocabulary. Return the word when done looping through. }

int score\_word { Have an array that contain used letters. Loop through word and add to the score accordingly to letter\_scores. Return when done looping.

size\_t filter\_vocabulary\_gray { Loop through the vocabulary and filter out any words that does not contain that letter. Keep track of the number of filtered words. }

size\_t filter\_vocabulary\_yellow { Loop through the vocabulary and filter out any words that either don't contain the letter at all or do contain it but is at the specified position. }

size\_t filter\_vocabulary\_green { Loop through the vocabulary and filkter out any words that doesn't contain that letter in that specific position. }
