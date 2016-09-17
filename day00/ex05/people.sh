ldapsearch -xLLL  "(uid=z*)" cn | grep cn | sort -f -r | sed "s/cn: //g"
