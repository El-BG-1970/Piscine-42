cat /etc/passwd | sed '/^#/ d' | sed -n "n;p" | sed 's/*//' | rev | sed 's/^.*:://' | sort -r | sed -n '$FT_LINE1,$FT_LINE2p' | tr '\n' ' ' | sed 's/. /, /g' | sed 's/, $/./'
