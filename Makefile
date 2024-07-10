Prime: Prime.c
	@gcc Prime.c -o Prime
	@./Prime
Prime.c:
	@touch Prime.c	
clean:
	rm -f *Prime*	