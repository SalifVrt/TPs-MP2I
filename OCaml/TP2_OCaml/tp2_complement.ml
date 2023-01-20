(*TP 2 OCAML - Complement
VERET Salif MP2I
12/01/2023*)

(*EXERCICE 1*)
(*1*)

(*Les deux fonctions renvoient -1 si l'entier est strictement négatif et 1 
sinon*)
let negatif x =
	if x < 0 then
		-1
	else
		1;;
	
let negatif2 x =
	match x with
		|x when x < 0 -> -1
		|_ -> 1;;
	
negatif2 (5);;

(*2*)

(*Les deux fonctions renvoient la valeur absolue d'un entier x*)
let abs x =
	if x < 0 then
		-x
	else 
		x;;
	
let abs2 x =
	match negatif2 x with
		|(-1) -> -x
		|1 -> x;;
	
abs2 (-5);;

(*3*)

(*Les deux fonctions renvoient true si l'entier est pair, et false sinon*)
let pair x =
	match abs2 x with
		|x when abs2 x mod 2 = 0 -> true
		|_ -> false;;
	
pair (-7);;

let pair2 x =
	let y = 
		match x with
			|x when x < 0 -> (-x)
			|_ -> x;
	in match y with
		|y when y mod 2 = 0 -> true
		|_ -> false;;

pair2 8;;





(*Exercice 2*)
(*1*)

(*Les 4 fonctions renvoient le maximum entre 2 ou 3 entiers*)
let max2 x y =
	match (x, y) with
		|(x, y) when x < y -> y
		|_ -> x;;


(*2*)
let max3 x y z =
	match (x, y, z) with
		|(x, y, z) when x > y && x > z -> x
		|(x, y, z) when y > x && y > z -> y
		|_ -> z;;

max3 (-1) (-3) (-3);;


(*3*)
let max32 x y z =
	let m = max2 x y
		in match (m, z) with
			|(m, z) when m < z -> z
			|_ -> m;; 
		
		
max32 23 5 18;;


(*4*)
let max33 x y z =
	let m = 
		match (x, y) with
			|(x, y) when x < y -> y
			|_ -> x;
		
	in match (m, z) with
		|(m, z) when m < z -> z
		|_ -> m;;
	
max33 23 5 48;;





(*Exercice 3*)

(*On definit une fonction qui calcule le discriminant d'une equation de
degre 2 et une autre qui calcule les racines dans le cas ou le discriminant
est positif pour ne pas avoir a tout recalculer*)

let discr a b c =
	b*.b -. 4.*.a*.c;;

let sol_d_pos a b c =
	let delta = discr a b c in
		((((-.b) -. sqrt(delta)) /. (2. *. a)), 
		(((-.b) +. sqrt(delta)) /. (2. *. a)));;

(*1*)

(*la fonction nb_sol renvoie le nombre de racines reelles d'une equation de
degre 2*)
let nb_sol a b c =
	if a = 0. then
		failwith "l'equation est du premier degre"
	
	else
		let delta = discr a b c in
			match delta with
				|delta when delta > 0. -> 2
				|0. -> 1
				|_ -> 0;;

nb_sol 0. 2. 0.;;


(*2*)

(*la fonction resolution1 affiche les solutions reelles d'une equation de
degre 2, si elles existent*)
let resolution1 a b c =
	if a = 0. then
		failwith "l'equation est du premier degre"
	else
		let delta = discr a b c
		and sol = nb_sol a b c in
	
			match sol with
				|2 -> print_float (((-.b) -. sqrt(delta)) /. (2. *. a));
					print_newline ();
					print_float (((-.b) +. sqrt(delta)) /. (2. *. a))
				|1 -> print_float ((-.b) /. (2. *. a))
				|0 -> failwith "pas de solution reelle" ;;
			
resolution1 1. 0. (-1.);;


(*3*)
(*la fonction resolution2 renvoie les solutions reelles d'une equation de
degre 2, si elles existent*)
(*les solutions sont renvoyees sous la forme d'un couple de flottants*)
let resolution2 a b c =
	if a = 0. then
		failwith "l'equation est du premier degre"
	else
		let sol = nb_sol a b c in
		
			match sol with
				|2 -> sol_d_pos a b c
				|1 -> (((-.b) /. (2. *. a)), ((-.b) /. (2. *. a)))
				|0 -> failwith "pas de solution reelle" ;;

resolution2 1. 0. (-1.);;











 
