# Exercice 1 – Enseignant Chercheur

## Objectif
Modéliser un enseignant chercheur à partir de deux classes de base (`Personne` et `Chercheur`) et résoudre les ambiguïtés d’héritage.

## Classes
- **Personne** : attributs `nom`, `prenom` ; méthode `afficher()`.
- **Chercheur** : attribut `domaineRecherche` ; méthode `afficher()`.
- **EnseignantChercheur** : hérite de `Personne` et `Chercheur` ; méthode `afficher()` combinant les deux.

## Sortie attendue
```markdown
=== Informations Enseignant-Chercheur ===
Nom : Bennani
Prénom : Omar
Domaine de recherche : Intelligence Artificielle
Grade : Professeur
========================================

```
<img width="811" height="195" alt="image" src="https://github.com/user-attachments/assets/76c07053-8489-46cc-ba97-e3a415bee61a" />


# Exercice 2 – Employé Polyvalent

## Objectif
Modéliser un employé pouvant être à la fois technicien et comptable, et résoudre les ambiguïtés de méthode commune `afficherSalaire()`.

## Classes
- **Technicien** : attribut `salaireTech` ; méthode `afficherSalaire()`.
- **Comptable** : attribut `salaireCompta` ; méthode `afficherSalaire()`.
- **EmployePolyvalent** : hérite de `Technicien` et `Comptable` ; méthode `afficherTousSalaires()`.
  
## Sortie attendue
  ```
=== Détails des salaires ===
Salaire du technicien : 7000 DH
Salaire du comptable : 8500 DH
============================

```
<img width="565" height="270" alt="image" src="https://github.com/user-attachments/assets/b5666dd6-c975-4009-ad25-0602c92e0ac7" />

# Exercice 3 – Véhicule Hybride

## Objectif
Créer un véhicule pouvant être à la fois thermique et électrique, en utilisant l’héritage virtuel pour éviter le diamond problem.

## Classes
- **Vehicule** : attributs `marque`, `modele` ; méthode `afficherVehicule()`.
- **Thermique** : héritage virtuel de `Vehicule` ; attribut `consommationCarburant` ; méthode `afficherThermique()`.
- **Electrique** : héritage virtuel de `Vehicule` ; attribut `autonomieBatterie` ; méthode `afficherElectrique()`.
- **Hybride** : hérite de `Thermique` et `Electrique` ; méthode `afficherCaracteristiques()`.

  ## Sortie attendue
  
```
=== Informations Véhicule Hybride ===
Marque : Toyota
Modèle : Prius
Consommation carburant : 4.5 L/100km
Autonomie batterie : 50 km
===================================

```
  
 <img width="597" height="198" alt="image" src="https://github.com/user-attachments/assets/bbe00325-232d-4cc3-8b56-a1647eadcd38" />
 
# Exercice 4 – SuperUtilisateur

## Objectif
Créer un utilisateur pouvant être à la fois administrateur et modérateur, et résoudre les ambiguïtés d’héritage.

## Classes
- **Utilisateur** : attributs `id`, `login` ; méthode `afficherUtilisateur()`.
- **Administrateur** : héritage virtuel de `Utilisateur` ; attribut `droitsAcces` ; méthode `gererSysteme()`.
- **Moderateur** : héritage virtuel de `Utilisateur` ; attribut `niveauModeration` ; méthode `modererContenu()`.
- **SuperUtilisateur** : hérite de `Administrateur` et `Moderateur` ; méthode `afficherSuperUtilisateur()`.


 ## Sortie attendue
 ###  Exemple d’entrées :
```
=== Informations SuperUtilisateur ===
ID : 1
Login : salma
Gestion du système avec droits : admin
Modération du contenu avec niveau : 5
===================================
```
 ## Sortie attendue
 ```
=== Informations SuperUtilisateur ===
ID : 1
Login : salma
Gestion du système avec droits : admin
Modération du contenu avec niveau : 5


```
 
<img width="641" height="388" alt="image" src="https://github.com/user-attachments/assets/0409564d-b6e0-49ab-89c5-f18b32009bf7" />
