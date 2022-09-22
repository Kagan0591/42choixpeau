#!/usr/bin/python

import sys
import os

if len(sys.argv) == 2:
	try:
		fd = open("user.txt", "r")
	except IOError:
		print "42Choixpeau: user.txt not found"
		sys.exit(1)
	while 1:
		line = fd.readline()
		if not line:
			break
		if line.startswith(sys.argv[1] + " "):
			print line[len(sys.argv[1]) + 1:],
			sys.exit(0)
	print "42Choixpeau: No match found: [%s]" % sys.argv[1]
else:
	print "42Choixpeau: Usage: <./a.out [name]>"