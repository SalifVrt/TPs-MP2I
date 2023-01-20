(*TP 2 OCAML 
VERET Salif MP2I
05/01/2023*)

(*Exercice 1*)

let a = 2;;
let f x = a*x ;;
let a = 3 in f 1;;
let a = 3 ;;
f 1;;

let a =
	let a = 3 and b = 2 in
		let a = a+b and b = a-b in
			a-b;;

let b = 2 in a-b*b;;


(*Exercice 2*)
(*1*)

let x = 
	sqrt(7.)
	in (1. +. x +. x*.x*.x)/.(1. +. exp(x));;

let x = cos(1.)
	and y = log(5.)
	in (log(x) +. sin(y))/.(x +. y);;

(*2*)

let th x =
	let y = exp(-.2.*.x)
	in (1. -. y)/.(1. +. y);;
	
th 3.;;

(*Exercice 3*)

let choix x y z =
	(*val choix : bool -> 'a -> 'a -> 'a = <fun>*)
	match x with
	|true -> y
	|_-> z;;
	
choix true 1. 2.;;
choix false "b" "bon";;	
choix true 2 3;;

(*Exercice 4*)

let sinc x = 
	match x with
	(*division par 0 : message d'erreur*)
	|0. -> failwith "division par 0 impossible"
	|_-> sin(x) /. x;;
	
sinc 0.;;
sinc 1.6;;
