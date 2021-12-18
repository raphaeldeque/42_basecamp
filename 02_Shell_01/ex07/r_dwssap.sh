#!/bin/sh
cat /etc/passwd | awk -F: 'FNR%2==0 {print $1}' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed -z 's/\n/, /g' | sed 's/, $/./'