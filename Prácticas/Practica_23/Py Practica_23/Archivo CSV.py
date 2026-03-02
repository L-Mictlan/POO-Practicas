import csv


class ArchivoCSV:

    def escribir(self):
        with open("datos.csv", mode="w", newline="") as archivo:
            writer = csv.writer(archivo)
            writer.writerow(["Nombre", "Edad"])
            writer.writerow(["Ana", 22])
            writer.writerow(["Luis", 18])

    def leer(self):
        print("Contenido del CSV:")
        with open("datos.csv", mode="r") as archivo:
            reader = csv.reader(archivo)
            for fila in reader:
                print(fila)


# MAIN
if __name__ == "__main__":
    a = ArchivoCSV()
    a.escribir()
    a.leer()