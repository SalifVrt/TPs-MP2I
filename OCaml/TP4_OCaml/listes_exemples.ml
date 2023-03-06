(*VERET SALIF MP2I
TP4 OCaml - Listes
03/02/2023*)


let liste0 = 1 :: 2 :: 3 :: [];;
let liste1 = [1;2;3];;
let liste2 = [1,2,3];;
let liste3 = 1 :: 'a' :: (1,2,3) [];;

let liste_4 = [];;
2 :: liste_4;;
2. :: liste_4;;
liste_4;;
'a' :: liste_4;;
liste_4;;

let liste = [5;4;3;2;1];;
let a = List.hd liste;;
liste;;

let l = [];;
let b = List.hd l;;

let t = List.tl liste;;

let liste = [5;4;6;2;1;3];;
let a = List.nth liste 4;;
let b = List.nth liste 7;;

let liste_5 = [[1;2];[1;2;3];[1;2;3;4;5;6]];;


let liste_6 = [];;
let liste_6 = 5 :: liste_6;;
let liste_6 = 2 :: liste_6;;
liste_6;;

let l1 = [1;2;3];;
let l2 = [4;5;6];;
let l3 = [7;8;9];;
let l = List.append l2 l1;;

let ll = l @ l3;;

let l_1 = List.map (function x -> x*x)[1;2;3;4];;
let a = List.length [1;2;3;4];;

(*Récursivité*)

let rec somme liste = 
	match liste with
		|[] -> 0
		|x :: r -> x + somme r ;;
		
let liste = [1;2;3];;
let s = somme liste;;