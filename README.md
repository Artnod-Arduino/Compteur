# Compteur
Permet de naviguer à travers un menu.

## Méthodes
* [Compteur()](#compteurmin-max)
* [run()](#runkey)
* [index()](#index)
* [setIndex()](#setindexindex)
* [isSelect()](#isselect)
* [setSelect()](#setselectvalue)


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

