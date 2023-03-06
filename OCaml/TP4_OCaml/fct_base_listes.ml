(*Fonctions de base sur les listes - OCaml
VERET Salif MP2I*)
(*pour des fonctions plus complexes, voir TP4 OCaml*)

(*Mapping*)
let rec map f liste =
	match liste with
		|[] -> []
		|x :: tl -> f x :: map f tl;;

(*Cat*)
let rec cat l l2 =
	match l2 with
		|[] -> l
		|x :: tl -> cat (l @ [x]) tl;;

(*Length*)
let len liste =
	let rec aux acc liste =
		match liste with
			|[] -> acc
			|x :: tl -> aux (acc+1) tl
	in aux 0 liste;;
	


(*Head / tail*)
let hd liste =
	match liste with
		|[] -> failwith "liste vide"
		|x :: tl -> x;;

let tl liste = 
	match liste with
		|[] -> failwith "liste vide"
		|x :: tl -> tl;;

(*Reverse*)
let rec reverse liste =
	match len liste with
		|1 -> (List.tl liste) @ [List.hd liste]
		|_ -> (reverse (List.tl liste)) @ [List.hd liste];;
		


(*Tests*)
let l1 = [1;2;3;4;5];;
let l2 = [6;7;8;9];;

let carre x = 
	x*x;;
map carre l1;;

cat l1 l2;;
len l2;;
reverse l1;;