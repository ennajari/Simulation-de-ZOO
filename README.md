<!DOCTYPE html>
<html lang="fr">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Gestion des Animaux</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            margin: 0;
            padding: 0;
            background-color: #f4f4f4;
            color: #333;
            padding: 20px;
        }

        .container {
            max-width: 800px;
            margin: auto;
            background: #fff;
            padding: 20px;
            border-radius: 5px;
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
        }

        h1 {
            color: #333;
        }

        h2 {
            color: #444;
        }

        p {
            margin-bottom: 10px;
        }

        a {
            color: #007bff;
            text-decoration: none;
        }

        a:hover {
            text-decoration: underline;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>Gestion des Animaux</h1>
        <p>Ce projet est une implémentation simple d'une hiérarchie de classes pour gérer différents types d'animaux. Il comprend une classe de base <strong>Animal</strong> ainsi que des classes dérivées pour des types spécifiques d'animaux tels que les mammifères, les oiseaux et les reptiles.</p>

        <h2>Contenu du Projet</h2>
        <p>Le projet est composé des fichiers suivants :</p>
        <ul>
            <li><strong>animal.h</strong>: Définition de la classe <strong>Animal</strong> et de ses méthodes.</li>
            <li><strong>mammifere.h</strong>: Définition de la classe <strong>Mammifere</strong>, dérivée de <strong>Animal</strong>, pour représenter les mammifères.</li>
            <li><strong>oiseau.h</strong>: Définition de la classe <strong>Oiseau</strong>, dérivée de <strong>Animal</strong>, pour représenter les oiseaux.</li>
            <li><strong>reptile.h</strong>: Définition de la classe <strong>Reptile</strong>, représentant les reptiles.</li>
            <li><strong>main.cpp</strong>: Programme principal pour tester les fonctionnalités des différentes classes.</li>
        </ul>

        <h2>Fonctionnalités</h2>
        <p>Les fonctionnalités implémentées dans ce projet incluent :</p>
        <ul>
            <li>Création d'animaux avec des attributs tels que le nom, l'âge, le sexe et l'état de santé.</li>
            <li>Méthodes pour nourrir et soigner les animaux.</li>
            <li>Affichage des détails de chaque animal, y compris des détails spécifiques à chaque type d'animal.</li>
        </ul>

        <h2>Utilisation</h2>
        <p>Pour utiliser ce projet, vous pouvez simplement cloner ce dépôt et compiler le fichier <strong>main.cpp</strong> à l'aide de votre compilateur C++ préféré.</p>
        <pre><code>g++ main.cpp -o gestion_animaux
./gestion_animaux</code></pre>

        <h2>Contributions</h2>
        <p>Les contributions sont les bienvenues! Si vous souhaitez contribuer à ce projet, veuillez ouvrir une nouvelle demande d'extraction avec vos modifications.</p>

        <h2>Auteur</h2>
        <p>Ce projet a été développé par <a href="https://github.com/votre_nom">@ennajari</a>.</p>
    </div>
</body>
</html>
