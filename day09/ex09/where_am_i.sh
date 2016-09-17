if [[ -z `ifconfig -a | grep "inet " | cut -d ' ' -f2` ]]; 
then
	echo "Je suis perdu!"
else
	ifconfig -a | grep "inet " | cut -d ' ' -f2
fi
