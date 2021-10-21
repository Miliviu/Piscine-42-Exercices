cat  /etc/passwd | grep -v "#" | sed -n 'n;p'  | cut -f1 -d":" | rev | sort -r | awk -v l1="$FT_LINE1" -v l2="$FT_LINE2" 'NR>l1 && NR<=l2' |tr '\n' ',' | sed 's/,$/./' | sed 's/, */, /g' | tr -d '\n'
