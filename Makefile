          #Author  : VLADCRACK
          #Contact : t.me/TheVLADCRACK_237
          #License :  Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/> 
          #[Attention] Je ne suis en rien responsable de l'usage de ce programme [Attention]

all : horloge

horloge: horloge.c
	gcc horloge.c -o horloge
	
run: 
	./horloge
	
update:
	sudo apt-get update
	sudo apt-get install build-essential
	sudo apt-get install figlet
	
remove: 
	rm -f horloge
