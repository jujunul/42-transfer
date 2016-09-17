cat /etc/passwd | grep -v '\#' | sed '1d;n;d' | rev | sort -r | awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' | sed 's/,/, /g' | tr -d '\n'
