# Build an executable using the following:
#
# clang barebones.s -o barebones  # clang is another compiler like gcc
#
.text
_barebones:

.data
	
.globl main

main: 
				# (1) What are we setting up here? Push the current value of the pointer rbp to the stack and moving the stack pointer rsp to the base pointer
				# Ans:
	pushq %rbp		#
	movq  %rsp, %rbp	#

				# (2) What is going on here? Initialize two general purpose registers with values 1 and load address of a string label hello.str into register %rsi
				# Ans:
	movq $1, %rax		# 
	movq $1, %rdi		#
	leaq .hello.str,%rsi	#


			# (3) What is syscall? We did not talk about this. A unix-like operating system makes requests to the kernel of the operating system. 
			# in class.
			# Ans:
			#
	syscall			# Which syscall is being run? Not specified as the specific number for syscall is not given.
				# Ans:

				# (4) What would another option be instead of 
				# using a syscall to achieve this? write()
				# Ans:

	movq	$60, %rax	# (5) We are again setting up another syscall
	movq	$0, %rdi	# What command is it? exit the system call
				# Ans:	
	syscall

	popq %rbp		# (Note we do not really need
			 	# this command here after the syscall)

.hello.str:
	.string "Hello World!\n"
	.size	.hello.str,13		# (6) Why is there a 13 here? the length of Hello World!\n. it is used for allocating memory for the string.
					# Ans:	