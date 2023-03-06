
let a = 'a';;
a = 'b';;
a := 'b';;

let c = ref 'a';;
c := 'd';;
print_char(c);;
print_char(!c);;

"Bonjour les MP2I";;
let chaine = "Bonjour les MP2I";;
chaine;;

print_string(chaine);;

print_string(chaine.[0]);;
print_char(chaine.[0]);;
chaine.[14] <- 'I';;
print_char(chaine.[16]);;


let carre_0 x = x*x in
	Array.init 11 carre_0;;

let carre_1 x = x*x;;
let tableau_1 = Array.init 4 carre_1;;
let tableau_2 = Array.init 3 carre_1;;

Array.init 3 carre_1;;

let rire = Array.make 7 "ha";;
rire.(2) <- "ho";;

let affiche_premier tab =
	print_int tab.(0);
	print_newline();
	in let t1 = [|4;6;-3|] in
		affiche_premier t1;
		let t2 = Array.make 23 -2 in affiche_premier t2;;


let t3 = Array.make 3 2;;
t3;;
let t4 = t3;;
t3.(0) <- 0;;
t3;;
t4;;
let a = Array.length t3;;
a;;

let t5 = Array.copy t4;;
t4;;
t5;;
t4.(1)<-4;;
t3;;
t4;;
t5;;

let ts1 = Array.make 3 "baba";;
let ts2 = Array.make 3 ts1.(0);;
ts1;;
ts2;;

ts2.(0)<-"bibi";;

ts1;;ts2;;


[|1;2;3|] = [|1;2;3|];;
[|1;2;3|] = [|3;2;1|];;
let t = [|1;2;3|] in
t = Array.copy t;;

let t = [|1;2;3|] in let s = t in t == s;;




(*fonction double elts avec nv tab*)
let double_elements t =
	let n = Array.length t in
	let t1 = Array.make n 0 in
	
	for i = 0 to n - 1 do
		t1.(i) <- 2 * t.(i)
	done;
	t1;;

let tab = Array.make 3 2;;
let tab_bis = double_elements tab;;

(*fonction double elts dans le meme tab*)

let doubler_elements t =
	let n = Array.length t in
	for i = 0 to n - 1 do
		t.(i) <- 2 * t.(i)
	done;;

let table = Array.make 3 4;;
doubler_elements table;;
table;;



let t = [|4;2|];;
match t with
	|[||] -> "Vide"
	|[|1;_|] -> "Commence par 1"
	|[|2;_|] -> "Commence par 2"
	|[|x;y|] -> "t commence par "^string_of_int(x)
	|_ -> "Autre cas";;




(*Tableaux à plusieurs dimensions*)

let matrice_1 = 
[| [| (0,0);(0,1);(0,2)|];
	[| (1,0);(1,1);(1,2)|];
	[| (2,0);(2,1);(2,2)|];
	[| (3,0);(3,1);(3,2)|]|];;


(*Array.make*)
let mat_1 = 
	let t = Array.make 4 [||] in
	for i = 0 to 3 do
		let ligne = Array.make 3 (0,0) in
		for j = 0 to 2 do
			ligne.(j) <- (i,j)
		done;
		t.(i) <- ligne
	done;
t;;

(*Array.init*)
let mat_2 =
	let elt i j = (i, j) in
	let ligne i = Array.init 3 (elt i) in
	Array.init 4 ligne;;

(*Array.make_matrix*)
let mat_3 = 
	Array.make_matrix 2 3 (1,1);;

mat_2.(1).(1);;
mat_2.(1) <- [|(0, 0); (0, 0); (0, 0)|];;
mat_2;;


(*pb de valeurs partagées*)
let mat_4 =
	let t = Array.make 3 (Array.make 4 (0, 0)) in
	for i = 0 to 2 do
		for j = 0 to 3 do
			t.(i).(j) <- (i, j)
		done
	done;
t;;

mat_4.(1).(0) <- (0, 0);;
mat_4;;
mat_4.(0) == mat_4.(1);;