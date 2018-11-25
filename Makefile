memeat: main.c
	gcc -Werror -Wall main.c -o memeat

clean:
	rm -rf ./memeat
	rm -rf memeat_$$(uname -s)_$$(uname -m).zip

zip: memeat
	zip memeat_$$(uname -s)_$$(uname -m).zip memeat

.PHONY: clean zip
