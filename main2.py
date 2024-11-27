employees = [ 
    {"name": "Иван Иванов", "salary": 50000}, 
    {"name": "Мария Петрова", "salary": 60000}, 
    {"name": "Алексей Сидоров", "salary": 45000}, 
    {"name": "Наталья Смирнова", "salary": 70000}, 
    {"name": "Дмитрий Кузнецов", "salary": 55000}, 
    {"name": "Ольга Попова", "salary": 65000}, 
    {"name": "Владимир Ефимов", "salary": 52000} 
] 
 
 
print(list(filter(lambda x: x['salary'] > 50000, employees))) 
print('\n') 
 
books = [ 
    {"title": "Война и мир", "pages": 1225}, 
    {"title": "Преступление и наказание", "pages": 671}, 
    {"title": "Мастер и Маргарита", "pages": 470}, 
    {"title": "Анна Каренина", "pages": 864}, 
    {"title": "1984", "pages": 328}, 
    {"title": "Убить пересмешника", "pages": 384}, 
    {"title": "Гарри Поттер и философский камень", "pages": 223} 
] 
 
 
print(list(filter(lambda x: x['pages'] > 300, books))) 
print('\n') 
 
 
products = [ 
    {"name": "Яблоко", "price": 50}, 
    {"name": "Хлеб", "price": 15}, 
    {"name": "Молоко", "price": 70}, 
    {"name": "Сыр", "price": 400}, 
    {"name": "Шоколад", "price": 120}, 
    {"name": "Кофе", "price": 250}, 
    {"name": "Сок", "price": 20} 
] 
 
 
 
print(list(filter(lambda x: x['price'] < 30, products))) 
print('\n') 
 
 
students = [ 
    {"name": "Андрей", "grade": 4}, 
    {"name": "Мария", "grade": 5}, 
    {"name": "Иван", "grade": 3}, 
    {"name": "Елена", "grade": 5}, 
    {"name": "Сергей", "grade": 4}, 
    {"name": "Ольга", "grade": 5}, 
    {"name": "Дмитрий", "grade": 3} 
] 
 
 
print(list(filter(lambda x: x['grade'] > 3, students))) 
print('\n') 
 
 
movies = [ 
    {"title": "Inception", "rating": 8.8}, 
    {"title": "The Matrix", "rating": 8.7}, 
    {"title": "Interstellar", "rating": 8.6}, 
    {"title": "The Godfather", "rating": 9.2}, 
    {"title": "Pulp Fiction", "rating": 8.9}, 
    {"title": "The Dark Knight", "rating": 9.0}, 
    {"title": "Fight Club", "rating": 8.8} 
] 
 
 
print(list(filter(lambda x: x['rating'] >= 9.0, movies))) 
print('\n')