#!/usr/bin/env python

print "Enter the diamond width, which must be a positive odd integer:",

size = int(raw_input())

# shouldnt really be nessisary as usually you are guarenteed valid input
if (size % 2) == 0:
    print "Error: Number must be an odd number"
    exit(1)

for count in xrange(1, size+1):
    print " " * (size-count),
    print "* " * count

for count in xrange(1, size):
    print " " * count,
    print "* " * (size-count)

