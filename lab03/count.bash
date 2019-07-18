
#!/bin/bash

for k in * ; do
words=$(wc -wl "$k" )
echo $words | awk '{print $3 " "$1 " " $2}'
done


