(*VERET Salif MP2I
TP1 OCaml*)

(*Exercice 1*)


let a = ref 9;;
a := 1 ; 2 + !a ;;
3* (a := 7 ; 2 + !a);;

(*Exercice 2*)

(*1*) let x = 2 in x + 2;;
(*2*) let x = 1 and y = 3 in let x = 2 in x + y;;
(*3*) let x, y, z = 1, 2, 3 in x + y + z;;
(*4*) let x, y, z = true, 2, 3 in x || y = z;;
(*5*) let x, y, z = true, 2, 3 in x and y < z;;

(*1c*) let y = 3 in let x = 2 in x + y;;
(*5c*) let x, y, z = true, 2, 3 in x && y < z;;

(*Exercice 3*)
let bissextile a =
	if ((a mod 4 = 0) && (a mod 100 != 0)) || (a mod 400 = 0) then
		(true)
	else 
		(false);;
		
bissextile 2016;;
bissextile 1600;;
bissextile 2023;; 

(*Exercice 4*)

let pi = 3.14;;
let perimetre r =
	2. *. r *. pi;;

let surface r =
	pi *. r*.r;;
	
let volume r h = 
	let s = surface r in
	h *. s;;
	
let surface_ext_0 r h= 
	(2.*.pi*.r*.h) +. 2.*.pi *. r*.r;;
	
let surface_ext r h =
	let s = surface r and p = perimetre r in
	p*.h +. 2.*.s;;