import os
import shutil
import re

def organize_files_by_number(directory):
    os.chdir(directory)
    
    for filename in os.listdir(directory):
        if filename.startswith("CF_") and "." in filename:
            match = re.match(r'CF_(\d+)', filename)
            if match:
                number = match.group(1)
                print(number)
                
                folder_name = os.path.join(directory,"CF_"+number)
                if not os.path.exists(folder_name):
                    os.mkdir(folder_name)
                
                shutil.move(os.path.join(directory, filename), os.path.join(folder_name, filename))

def organize_folders(directory):
    os.chdir(directory)
    
    for item in os.listdir(directory):
        if os.path.isdir(item):
            if 'XX' in item:
                continue
            match = re.match(r'CF_(\d+)', item)
            if match:
                number = int(match.group(1))
                hundreds_group = number // 100
                target_folder = f"CF_{hundreds_group}XX"
                
                if not os.path.exists(target_folder):
                    os.mkdir(target_folder)
                
                shutil.move(os.path.join(directory, item), os.path.join(target_folder, item))

def remove_exe_files(directory):
    # Walk through the directory
    for root, dirs, files in os.walk(directory):
        for file in files:
            if file.endswith('.exe'):
                file_path = os.path.join(root, file)
                os.remove(file_path)
                print(f"Removed: {file_path}")


organize_files_by_number(r'C:\Users\janah\Desktop\Code\CompetitiveProgramming\CodeForces')

organize_folders(r'C:\Users\janah\Desktop\Code\CompetitiveProgramming\CodeForces')

remove_exe_files(r'C:\Users\janah\Desktop\Code\CompetitiveProgramming\CodeForces')
