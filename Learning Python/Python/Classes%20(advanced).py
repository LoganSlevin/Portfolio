class classFilm:
    def createFilmName (self ,name):
        self.name=name
    def displayFilmName (self):
        return self .name
    def createAgeRating (self ,age):
        self .age=age
    def displayAgeRating (self):
        return self .age
    def createGenre (self ,genre):
        self .genre=genre
    def displayGenre (self):
        return self .genre

first=classFilm()
second=classFilm()
third=classFilm()
fourth=classFilm()
fith=classFilm()

first.createFilmName(input("what is the film's name?"))
first.createAgeRating(input("what is the film's rating?"))
first.createGenre(input("What is the film's genre?"))
print(first.displayFilmName())
print(first.displayAgeRating())
print(first.displayGenre())

second.createFilmName(input("what is the film's name?"))
second.createAgeRating(input("what is the film's rating?"))
second.createGenre(input("What is the film's genre?"))
print(second.displayFilmName())
print(second.displayAgeRating())
print(second.displayGenre())

third.createFilmName(input("what is the film's name?"))
third.createAgeRating(input("what is the film's rating?"))
third.createGenre(input("What is the film's genre?"))
print(third.displayFilmName())
print(third.displayAgeRating())
print(third.displayGenre())

fourth.createFilmName(input("what is the film's name?"))
fourth.createAgeRating(input("what is the film's rating?"))
fourth.createGenre(input("What is the film's genre?"))
print(fourth.displayFilmName())
print(fourth.displayAgeRating())
print(fourth.displayGenre())

fith.createFilmName(input("what is the film's name?"))
fith.createAgeRating(input("what is the film's rating?"))
fith.createGenre(input("What is the film's genre?"))
print(fith.displayFilmName())
print(fith.displayAgeRating())
print(fith.displayGenre())

