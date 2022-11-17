class Todolist:

    def __init__(self):

        self.hari = {
            "senin":(),
            "selasa:":(),
            "Rabu":(),
            "Kamis":(),
            "Jumat":(),
            "Sabtu":(),
            "Minggu":()
        }
    def terima_agenda(self):
        for i in list(self.hari.keys()):
            agenda = input(f'masukan agenda anda hari {i} dipisahkan koma:  ')
            agenda = set(agenda.split(","))
            self.hari[i] = agenda

    def tulis(self):
        with open('src/text.txt',"a") as buka:
            for i in  list(self.hari.keys()):
                print(f'hari {i} ini agenda anda = {self.hari[i]}', file = buka) 
            print('\n', 59*'-', '\n',file=buka)
            
def main():
    instance = Todolist()
    instance.terima_agenda()
    instance.tulis()
    
main()
    