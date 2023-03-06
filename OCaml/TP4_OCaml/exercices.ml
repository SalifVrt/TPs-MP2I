(*VERET Salif MP2I
TP4 OCaml - Listes
03/02/2023*)

let ls1 = [1;2;3];;
let ls2 = [4;5;6];;

(*EXERCICE 1*)
(*calcul de la longueur d'une liste*)

let rec longueur liste =
	match liste with
		|[] -> 0
		|_ :: r -> 1 + longueur r;;

longueur [1;2;3;4;5];;

(*EXERCICE 2*)
(*concaténation de deux listes*)

let rec concatene l1 l2 =
	match l2 with
		|[] -> l1
		|x :: tl -> concatene (l1 @ [x]) tl ;;

concatene ls1 ls2;;

(*EXERCICE 3*)
(*renvoie l'avant-dernier élément d'une liste*)

let rec avant_dernier liste =
	match liste with
		|[] -> failwith "liste vide"
		|liste when longueur liste = 1 -> failwith "liste trop petite"
		|liste when longueur liste = 2 -> List.hd liste
		|x :: tl -> avant_dernier tl;;
		
avant_dernier (concatene ls2 ls1);;


let avant_dernier2 liste =
	match liste with
		|[] -> failwith "trop petit"
		|liste when List.tl liste = [] -> failwith "trop petit"
		|_-> List.hd (List.tl (reverse (liste)));;
avant_dernier2 ls1;;


(*EXERCICE 4*)
(*renvoie tous les préfixes d'une liste
exemple : [1; 2; 3] -> [[1]; [1; 2]; [1; 2; 3]]*)

let rec reverse liste =
	match longueur liste with
		|1 -> (List.tl liste) @ [List.hd liste]
		|_ -> (reverse (List.tl liste)) @ [List.hd liste];;

let prefixes liste = 
	let rec aux liste =
		match liste with
			|[] -> []
			|x :: tl -> aux (tl) @ [reverse liste]
	in aux (reverse liste);;

prefixes ls1;;

(*EXERCICE 5*)
(*aplatit une liste de listes 
exemple [[1]; [2; 3]] -> [1; 2; 3]*)

let rec flatten liste =
	let rec aux acc l1 l2 =
		match l1 with
			|x :: tl -> aux (x :: acc) tl l2
			|[] ->
				match l2 with
					|[] -> reverse acc
					|x :: tl -> aux acc x tl
	in aux [] [] liste;;


let ls3 = [[3;4];[5;7;9];[0];[6;8]];;

flatten ls3;;


(*EXERCICE 6*)
(*ocsmin renvoie un couple (v,n) où v est la valeur minimale d'une liste, et 
n son nombre d'apparitions dans la liste*)

let ocsmin liste =
	let rec min l e =
	(*première fonction récursive qui cherche le min de la liste*)
		match l with
			|[] -> e
			|x :: tl -> 
				match x with
					|x when x < e -> min tl x
					|_ -> min tl e
					
	and cpt acc l e =
	(*deuxième fonction récursive qui compte le nb d'occurrences d'un élément 
	dans une liste*)
		match l with
			|[] -> acc
			|x :: tl ->
				match x with
					|x when x = e -> cpt (acc + 1) tl e
					|_ -> cpt acc tl e
					
	in match liste with
		|[] -> failwith "liste vide"
		|_-> (min liste (List.hd liste), cpt 0 liste (min liste (List.hd liste)));;


let ls4 = [1;2;3;4;1;1;6;1];;
ocsmin ls4;;