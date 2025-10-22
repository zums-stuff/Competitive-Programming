#!/usr/bin/env python3

import sys
import os
import subprocess

# Intenta importar pyperclip, si falla, da un error claro.
try:
    import pyperclip
except ImportError:
    print("Error: La librería 'pyperclip' no está instalada.")
    print("Por favor, instálala con: pip install pyperclip")
    sys.exit(1)

def get_problem_name():
    """ 
    Pide el nombre del problema y lo formatea reemplazando
    espacios con guiones bajos.
    """
    name = input("Nombre del problema (ej: Stair Peak or Neither): ")
    # Reemplaza espacios y quita caracteres extraños
    formatted_name = "_".join(name.strip().split())
    return formatted_name

def run_git_commands(commit_message):
    """ 
    Ejecuta la secuencia de Git: add, commit, push.
    Maneja errores comunes.
    """
    try:
        print("Ejecutando 'git add .'")
        subprocess.run(["git", "add", "."], check=True)
        
        print(f"Ejecutando 'git commit -m \"{commit_message}\"'")
        subprocess.run(["git", "commit", "-m", commit_message], check=True)
        
        print("Ejecutando 'git push'")
        subprocess.run(["git", "push"], check=True)
        
        print("\n¡Éxito! Solución subida a GitHub.")
        
    except subprocess.CalledProcessError as e:
        print(f"\nError durante la ejecución de Git: {e}")
        print("Es posible que necesites hacer 'git pull' primero si hay conflictos.")
    except FileNotFoundError:
        print("\nError: El comando 'git' no se encontró.")
        print("Asegúrate de que Git esté instalado y en tu PATH.")

def handle_codeforces():
    """ Maneja la lógica para un problema de Codeforces """
    contest_id = input("ID del Contest/Gym (ej: 1950): ")
    problem_id = input("ID del Problema (ej: A): ").upper()
    
    # Valida si es contest o gym
    try:
        path_type = "Gym" if int(contest_id) >= 100000 else "Contest"
    except ValueError:
        print("Error: El ID del contest debe ser un número.")
        return

    problem_name = get_problem_name()
    
    # 1. Crear la ruta del directorio
    dir_path = os.path.join("Codeforces", path_type, contest_id, f"{problem_id}_{problem_name}")
    
    # 2. Crear directorios (no falla si ya existen)
    os.makedirs(dir_path, exist_ok=True)
    
    # 3. Obtener código del portapapeles
    print("\nObteniendo código de tu portapapeles...")
    code = pyperclip.paste()
    
    if not code:
        print("Error: No se encontró código en el portapapeles. ¿Olvidaste copiarlo?")
        return

    # 4. Guardar el archivo
    file_path = os.path.join(dir_path, "main.cpp")
    with open(file_path, "w", encoding="utf-8") as f:
        f.write(code)
    
    print(f"Archivo guardado exitosamente en: {file_path}")
    
    # 5. Ejecutar Git
    commit_msg = f"Solución: Codeforces {contest_id}{problem_id} - {problem_name}"
    run_git_commands(commit_msg)

def handle_cses():
    """ Maneja la lógica para un problema de CSES """
    category_map = {
        "1": "Introductory_Problems",
        "2": "Sorting_and_Searching",
        "3": "Dynamic_Programming",
        "4": "Graph_Algorithms",
        "5": "Range_Queries",
        "6": "Tree_Algorithms",
        "7": "Mathematics",
        "8": "String_Algorithms",
        "9": "Geometry",
        "10": "Advanced_Techniques",
        "11": "Additional_Problems"
    }
    
    print("\nCategorías de CSES:")
    for k, v in category_map.items():
        print(f"  {k}: {v}")
    
    cat_choice = input("Elige el número de la categoría (ej: 1): ")
    category = category_map.get(cat_choice)
    
    if not category:
        print("Error: Opción inválida.")
        return
        
    problem_name = get_problem_name() # ej: Weird_Algorithm
    
    dir_path = os.path.join("CSES", category, problem_name)
    os.makedirs(dir_path, exist_ok=True)
    
    print("\nObteniendo código de tu portapapeles...")
    code = pyperclip.paste()
    
    if not code:
        print("Error: No se encontró código en el portapapeles. ¿Olvidaste copiarlo?")
        return
        
    file_path = os.path.join(dir_path, "main.cpp")
    with open(file_path, "w", encoding="utf-8") as f:
        f.write(code)
        
    print(f"Archivo guardado exitosamente en: {file_path}")
    
    commit_msg = f"Solución: CSES {category} - {problem_name}"
    run_git_commands(commit_msg)


# --- Bucle Principal ---
if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Uso: ./push.py [codeforces|cses]")
        sys.exit(1)
        
    platform = sys.argv[1].lower()
    
    if platform == "codeforces":
        handle_codeforces()
    elif platform == "cses":
        handle_cses()
    else:
        print(f"Plataforma '{platform}' no reconocida. Usa 'codeforces' o 'cses'.")