#!/usr/bin/env python

print "Please enter a word:",

word = raw_input()

length = len(word)

if (length % 2) == 0:
    center = length / 2
else:
    center = (length - 1) / 2

length -= 1

for i in xrange(center):
    if (word[i] !=  word[length - i]):
        print "The word", word, "is not a palindrome"
        exit()

print "The word", word, "is a palindrome"

