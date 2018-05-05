# Compteur
Permet de naviguer à travers un menu.  

-----------

#### Compteur(min, max)
Instancie l'objet Compteur.
 
Paramètres	  | Type | Requis | Description
------------- | ---- | ------ | -----------
min		      | int  | Oui	  | Valeur minimum du menu.
max		      | int  | Oui	  | Valeur maximum du menu.


-------------

#### run(key)
Incrémente le menu.
 
Paramètres	  | Type | Requis | Description
------------- | ---- | ------ | -----------
key		      | int  | Oui	  | Valeur correspondant à une touche du keypad. Voire la classe **ReadKey**.


-------------

#### index()
Renvoie sous la forme d'un entier la position actuelle dans le menu.


-------------

#### setIndex(index)
Modifier l'index du menu.
 
Paramètres	  | Type | Requis | Description
------------- | ---- | ------ | -----------
index		  | int  | Oui	  | Nouvelle valeur de du menu.


-------------

#### isSelect()
Renvoie `true` si le menu est sélectionné. Sinon `false`.


-------------

#### setSelect(value)
Sélectionne ou désélectionne le menu.
 
Paramètres	  | Type | Requis | Description
------------- | ---- | ------ | -----------
value		  | bool | Non	  | Par défaut égal `true`. Nouvelle valeur.


-------------

# CompteurBool
Compteur permettant la saisi d'un booléen.

-----------

#### CompteurBool(value)
Instancie l'objet CompteurBool.
 
Paramètres | Type | Requis | Description
---------- | ---- | ------ | -----------
value	   | bool | Non	   | Par défaut égal `false`. Valeur de début.


-------------

#### start(value)
Réinitialise l'objet CompteurBool.
 
Paramètres | Type | Requis | Description
---------- | ---- | ------ | -----------
value	   | bool | Non	   | Par défaut égal `false`. Valeur souhaité.


-------------

#### run(key)
Incrémente le menu.
 
Paramètres	  | Type | Requis | Description
------------- | ---- | ------ | -----------
key		      | int  | Oui	  | Valeur correspondant à une touche du keypad. Voire la classe **ReadKey**.


-------------

#### value()
Renvoie sous la forme d'un booléen la saisi.


-------------

#### isSelect()
Renvoie `true` si le saisi est validée. Sinon `false`.


-------------

# CompteurDate
Compteur permettant la saisi d'une date (année, mois et jour).

## Constantes
* `YEAR` = 0
* `MONTH` = 1
* `DAY` = 2

-----------

#### CompteurDate(annee, mois, jour)
Instancie l'objet CompteurDate.
 
Paramètres | Type | Requis | Description
---------- | ---- | ------ | -----------
annee	   | int  | Non	   | Par défaut égal `2017`. Valeur de début.
mois	   | int  | Non	   | Par défaut égal `01`. Valeur de début.
jour	   | int  | Non	   | Par défaut égal `01`. Valeur de début.


-------------

#### start(annee, mois, jour)
Réinitialise l'objet CompteurDate.
 
Paramètres | Type | Requis | Description
---------- | ---- | ------ | -----------
annee	   | int  | Non	   | Par défaut égal `2017`. Valeur de début.
mois	   | int  | Non	   | Par défaut égal `01`. Valeur de début.
jour	   | int  | Non	   | Par défaut égal `01`. Valeur de début.


-------------

#### run(key)
Incrémente le menu.
 
Paramètres	  | Type | Requis | Description
------------- | ---- | ------ | -----------
key		      | int  | Oui	  | Valeur correspondant à une touche du keypad. Voire la classe **ReadKey**.


-------------

#### annee()
Renvoie sous la forme d'un entier l'année saisi.


-------------

#### mois()
Renvoie sous la forme d'un entier le mois saisi.


-------------

#### jour()
Renvoie sous la forme d'un entier le jour saisi.


-------------

#### isSelect()
Renvoie `true` si le saisi est validée. Sinon `false`.


-------------

#### selected()
Renvoie `YEAR` si le saisi est sur l'année.
Renvoie `MONTH` si le saisi est sur le mois.
Renvoie `DAY` si le saisi est sur le jour.


-------------

# CompteurFloat
Compteur permettant la saisi d'un nombre décimal.

-----------

#### CompteurFloat(value)
Instancie l'objet CompteurFloat.
 
Paramètres | Type  | Requis | Description
---------- | ----- | ------ | -----------
value	   | float | Non	| Par défaut égal `0`.


-------------

#### start(value)
Réinitialise l'objet CompteurFloat.
 
Paramètres | Type  | Requis | Description
---------- | ----- | ------ | -----------
value	   | float | Non	| Par défaut égal `0`.


-------------

#### run(key)
Incrémente le menu.
 
Paramètres	  | Type | Requis | Description
------------- | ---- | ------ | -----------
key		      | int  | Oui	  | Valeur correspondant à une touche du keypad. Voire la classe **ReadKey**.


-------------

#### value()
Renvoie sous la forme d'un nombre décimal.


-------------

#### entier()
Renvoie sous la forme d'un entier.


-------------

#### decimal()
Renvoie sous la forme d'un entier les decimal.


-------------

#### isSelect()
Renvoie `true` si le saisi est validée. Sinon `false`.


-------------

#### selected()
Renvoie `true` si le saisi est sur l'heure.
Renvoie `false` si le saisi est sur les minutes.


-------------

# CompteurHeure
Compteur permettant la saisi de l'heure (heure et minute).

-----------

#### CompteurHeure(time)
Instancie l'objet CompteurHeure.
 
Paramètres | Type | Requis | Description
---------- | ---- | ------ | -----------
time	   | int  | Non	   | Par défaut égal `0`. Nombre de minute depuis minuit.


-------------

#### start(time)
Réinitialise l'objet CompteurHeure.
 
Paramètres | Type | Requis | Description
---------- | ---- | ------ | -----------
time	   | int  | Non	   | Par défaut égal `0`. Nombre de minute depuis minuit.


-------------

#### run(key)
Incrémente le menu.
 
Paramètres	  | Type | Requis | Description
------------- | ---- | ------ | -----------
key		      | int  | Oui	  | Valeur correspondant à une touche du keypad. Voire la classe **ReadKey**.


-------------

#### time()
Renvoie sous la forme d'un entier l'heure en minute depuis minuit.


-------------

#### heure()
Renvoie sous la forme d'un entier l'heure saisi.


-------------

#### minute()
Renvoie sous la forme d'un entier la minute saisi.


-------------

#### isSelect()
Renvoie `true` si le saisi est validée. Sinon `false`.


-------------

#### selected()
Renvoie `true` si le saisi est sur l'heure.
Renvoie `false` si le saisi est sur les minutes.


-------------

# CompteurInt
Compteur permettant la saisi d'un entier.

-----------

#### CompteurInt(min, max)
Instancie l'objet CompteurInt.
 
Paramètres | Type | Requis | Description
---------- | ---- | ------ | -----------
min		   | int  | Non	   | Par défaut égal `0`. Valeur minimum.
max		   | int  | Non	   | Par défaut égal `100`. Valeur maximum.


-------------

#### start(min, max)
Réinitialise l'objet CompteurInt.
 
Paramètres | Type | Requis | Description
---------- | ---- | ------ | -----------
min		   | int  | Non	   | Par défaut égal `0`. Valeur minimum.
max		   | int  | Non	   | Par défaut égal `100`. Valeur maximum.


-------------

#### run(key)
Incrémente le menu.
 
Paramètres	  | Type | Requis | Description
------------- | ---- | ------ | -----------
key		      | int  | Oui	  | Valeur correspondant à une touche du keypad. Voire la classe **ReadKey**.


-------------

#### value()
Renvoie sous la forme d'un entier la valeur saisi.


-------------

#### isSelect()
Renvoie `true` si le saisi est validée. Sinon `false`.


-------------

# CompteurSeconde
Compteur permettant la saisi d'un nombre de seconde.
Modification de l’incrémentation avec les touches `btnLEFT` et `btnRIGHT`.

-----------

#### CompteurSeconde(value)
Instancie l'objet CompteurSeconde.
 
Paramètres | Type		   | Requis | Description
---------- | ------------- | ------ | -----------
value	   | unsigned long | Non    | Par défaut égal `0`. Valeur de début.


-------------

#### start(value)
Réinitialise l'objet CompteurSeconde.
 
Paramètres | Type		   | Requis | Description
---------- | ------------- | ------ | -----------
value	   | unsigned long | Non	| Par défaut égal `0`. Valeur de début.


-------------

#### run(key)
Incrémente le menu.
 
Paramètres	  | Type | Requis | Description
------------- | ---- | ------ | -----------
key		      | int  | Oui	  | Valeur correspondant à une touche du keypad. Voire la classe **ReadKey**.


-------------

#### seconde()
Renvoie sous la forme d'un long non signé la valeur saisi.


-------------

#### isSelect()
Renvoie `true` si le saisi est validée. Sinon `false`.


-------------

#### increment()
Renvoie sous forme d'entier la valeur de l'incrémentation en seconde. **1**, **60** (1 minute) ou **3600** (1 heure).

-------------
