(*TP3 OCaml
VERET Salif MP2I
26/01/2023*)


(*EXERCICE 1 - somme des entiers*)
(*som_chiffres calcule la somme des chiffres d'un entier positif*)
let rec som_chiffres n =
	match n with
		|n when n < 10 -> n
		|_-> n mod 10 + som_chiffres (n / 10);;
	
som_chiffres 2023;;

(*EXERCICE 2 - division par 2**k*)
let rec log2 n =
	match n with
		|n when n/2 < 2 -> 1
		|_-> 1 + log2 (n/2);;
		
log2 15;;


(*EXERCICE 3 - coefficients binomiaux*)
let bin n k =
	let rec aux prod n k acc =
		match acc with
			|acc when acc = k -> prod
			|_ -> aux ((prod * (n - acc)) / (acc + 1)) n k (acc + 1)
	in aux 1 n k 0;;

let rec bin_2 n k =
	match (n,k) with
		|(n,k) when n < k -> 0
		|(n,k) when n = k -> 1
		|_ -> n/k * bin (n-1) (k-1);;

bin 6 2;;
bin_2 6 2;;

(*let bin n k =
	let rec fact n = 
		match n with
			|1 -> 1
			|_ -> n * fact (n-1)
	in (fact n)/((fact k)*(fact (n-k)));;
	
bin 5 2;;*)


(*EXERCICE 4 - nombres parfaits*)
(*un nombre est dit parfait lorsqu'il est la somme de ses diviseurs positifs*)
(*est_parfait renvoie un booléen indiquant si le nombre est parfait ou non*)
let est_parfait n =
	let rec aux n m acc =
		match m with
			|m when m = n -> acc
			|m when (n mod m = 0) -> aux n (m+1) (acc + m)
			|m when (n mod m != 0) -> aux n (m+1) acc
	in (n = (aux n 1 0));;

est_parfait 8128;;