(*VERET Salif MP2I - Lycée Clemenceau Nantes
	TP5 OCaml
	11/02/2023*)

(*EXERCICES*)



(*EXERCICE 1*)
(*inverse d'une chaîne de caractères*)

(*cette fonction transforme un caractère de type char en caractère de type string*)
let string_of_char c =
	String.make 1 c;;

string_of_char 's';;

(*cette fonction inverse une chaîne de caractères*)
let inverse s =
	let rec aux s n acc =
		match n with
			|n when n < 0 -> acc
			|_ -> aux s (n - 1) (acc^string_of_char (s.[n]))
	in aux s ((String.length s) - 1) "";;


inverse "repus";;



(*EXERCICE 2*)

(*cette fonction met entre crochets chacun des caractères d'une chaîne
exemple : "chaîne" -> "[c][h][a][î][n][e]"*)
let crochets s =
	let m = String.length s 
	in let rec aux s n acc =
			match n with
				|n when n = m -> acc
				|_ -> aux s (n + 1) (acc^"["^(string_of_char (s.[n]))^"]")
		in aux s 0 "";;

let cr = crochets "chaine";;

(*cette fonction retire les crochets d'une chaîne de la forme
ci-dessus*)
let decrochets s = 
	(*retire les crochets pour les chaînes de la forme ci-dessus uniquement*)
	let m = String.length s
	in let rec aux s n acc =
		match n with
			|n when n = m -> acc
			|_ -> aux s (n + 3) acc^(string_of_char s.[n + 1])
		in inverse (aux s 0 "");;

(*cette fonction retire tous les crochets d'une chaîne de caractères*)
let d2 s =
	(*retire tous les crochets d'une chaîne de caractères*)
	let m = String.length s
	in let rec aux s n acc = 
		match n with
			|n when n = m -> acc
			|n when s.[n] == '[' || s.[n] == ']' -> aux s (n+1) acc
			|_ -> aux s (n+1) acc^(string_of_char s.[n])
	in inverse (aux s 0 "");;

d2 (cr);;
decrochets (cr);;



(*EXERCICE 3 - Sous-chaînes*)

(*renvoie la sous-chaîne d'une chaîne (qui commence à l'indice debut et 
de longueur longueur*)
let sous_chaine chaine debut longueur =
	let m = String.length chaine
	in let rec aux s d l acc=
		match l with
			|l when l + d > m -> failwith "longueur incompatible"
			|l when d < 0 -> failwith "debut incompatible"
			|l when l = 0 -> acc
			|_ -> aux s (d+1) (l-1) acc^(string_of_char s.[d])
		in inverse (aux chaine debut longueur "");;

sous_chaine "chaine" 2 4;;



(*EXERCICE 4*)

(*renvoie le nombre de jours d'un mois passé en paramètre*)
let nb_jours n = 
	let nbj = [|31; 28; 31; 30; 31; 30; 31; 31; 30; 31; 30; 31|]
	in match n with
		|n when n > 12 || n < 1 -> failwith "mois incorrect"
		|_ -> nbj.(n - 1);;

nb_jours 7;;
nb_jours 2;;



(*EXERCICE 5*)

(*renvoie un tableau contenant les occurrences de chaque caractère
de la table ASCII dans une chaîne*)
let occ s =
	let tab_oc = Array.make 127 0
	in let rec aux s n =
		match n with
			|n when n = String.length s -> tab_oc
			|_ ->let i = int_of_char(s.[n]) in
						tab_oc.(i) <- 1 + tab_oc.(i);
						aux s (n+1)
		in aux s 0;;

occ "ccca";;
(occ "ccca").(99);;