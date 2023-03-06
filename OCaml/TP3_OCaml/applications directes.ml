(*TP 3 OCaml
VERET Salif MP2I
26/01/2023*)


let rec fibo n =
	match n with
	|0 -> 1
	|1 -> 1
	|_-> fibo (n - 1) + fibo (n - 2);;

fibo 7;;

let rec mystere1 n = 
	match n with
	|0 -> print_newline()
	|_->
		print_int n;
		print_char ' ';
		mystere1 (n-1);
		print_int n;
		print_char ' ';;
		
mystere1 5;;

let minuscule c =
	char_of_int (32 + int_of_char c);;

let rec mystere2 s i =
	if i = String.length s then print_newline()
	else begin
		print_char s.[i];
		s.[i] <- minuscule s.[i];
		mystere2 s (i+1);
		print_char s.[i];
	end;;
	
mystere2 "BONJOUR" 0;;