# Joko Slamet | 18050974030
# Teknik Komputasi  S1 Pendidikan Teknologi Informasi

# mengimport library yang dibutuhkan
from tkinter import *
import re

#membuat class calculator dengan menggunakan method frame
class Calculator(Frame):
    #merender atau membuat widget diclass constructor
    def __init__(self, master=None):
        master = self.main_window()
        super().__init__(master)
        self.pack()
        self.create_widgets()
        self.render_widgets()

    #membuat jendela utama aplikasi
    def main_window(self):
        root = Tk()
        root.title("Aplikasi Kalkulator")
        return root

#method yang digunakan untuk proses penghitungan
    def calculate(self):
        input_val = self.input.get()
        # self.result.delete(0, END)
        # self.result.insert(0, eval(input_val))
        print(eval(input_val))
        self.result.config(text=input_val)
        # self.input.config(text=eval(input_val))
        self.input.delete(0, END)
        self.input.insert(0, eval(input_val))

#membuat widget
    def create_widgets(self):
        self.create_controls()
        self.create_digits()

        #4 width widgets
        four_width = ['clear_all', 'clear', 'div', 'mult', 'min', 'plus', 'equal', 'seven', 'eight', 'nine', 'four',
                      'five', 'six', 'one', 'two', 'three', 'dot']
        self.set_width(four_width, 4)

        #30 width widgets
        thirty_width = ['result', 'input']
        self.set_width(thirty_width, 30)

#method yang digunakan untuk mengontrol operasi perhitungan seperti tambah, kurang, kali, bagi
    def create_controls(self):
        self.result = Label(self, text='Result', bg='gray', height=2)
        self.input = Entry(self)
        self.clear_all = Button(self, bg='#393939', fg='white', text='C', height=2)
        self.clear = Button(self, bg='#393939', fg='white', text='X', height=2)
        self.div = Button(self, bg='#393939', fg='white', text='/', height=2, command=lambda : self.appent_input('/'))
        self.mult = Button(self, bg='#393939', fg='white', text='*', height=2, command=lambda : self.appent_input('*'))
        self.min = Button(self, bg='#393939', fg='white', text='-', height=2, command=lambda : self.appent_input('-'))
        self.plus = Button(self, bg='#393939', fg='white', text='+', height=2, command=lambda : self.appent_input('+'))
        self.equal = Button(self, bg='red', fg='white', text='=', height=5, command=self.calculate)

#method yang berfungsi untuk menghasilkan digit angka di kalkulator
    def create_digits(self):
        self.seven = Button(self, bg='#1f1f1f', fg='white', text='7', height=2, command=lambda : self.appent_input('7'))
        self.eight = Button(self, bg='#1f1f1f', fg='white', text='8', height=2, command=lambda : self.appent_input('8'))
        self.nine = Button(self, bg='#1f1f1f', fg='white', text='9', height=2, command=lambda : self.appent_input('9'))

        self.four = Button(self, bg='#1f1f1f', fg='white', text='4', height=2, command=lambda : self.appent_input('4'))
        self.five = Button(self, bg='#1f1f1f', fg='white', text='5', height=2, command=lambda : self.appent_input('5'))
        self.six = Button(self, bg='#1f1f1f', fg='white', text='6', height=2, command=lambda : self.appent_input('6'))

        self.one = Button(self, bg='#1f1f1f', fg='white', text='1', height=2, command=lambda : self.appent_input('1'))
        self.two = Button(self, bg='#1f1f1f', fg='white', text='2', height=2, command=lambda : self.appent_input('2'))
        self.three = Button(self, bg='#1f1f1f', fg='white', text='3', height=2, command=lambda : self.appent_input('3'))

        self.zero = Button(self, bg='#1f1f1f', fg='white', text='0', width=12, height=2, command=lambda : self.appent_input('0'))
        self.dot = Button(self, bg='#1f1f1f', fg='white', text='.', height=2, command=lambda : self.appent_input('.'))

#mengatur lebar jendala 
    def set_width(self, widgets, width):
        # total_widgets = len(widgets)
        for widget in widgets:
            getattr(self, widget)['width']= width

#mengatur tinggi jendela aplikasi
    def set_hieght(self, widgets, height):
        # total_widgets = len(widgets)
        for widget in widgets:
            getattr(self, widget)['height'] = height

    def render_widgets(self):
        self.result.grid(row=0, column=0, columnspan=4)
        self.input.grid(row=1, column=0, columnspan=4)

        self.clear_all.grid(row=2, column=0)
        self.clear.grid(row=2, column=1)
        self.div.grid(row=2, column=2)
        self.mult.grid(row=2, column=3)
        self.min.grid(row=3, column=3)
        self.plus.grid(row=4, column=3)
        self.equal.grid(row=5, column=3, rowspan=2)

        self.seven.grid(row=3, column=0)
        self.eight.grid(row=3, column=1)
        self.nine.grid(row=3, column=2)

        self.four.grid(row=4, column=0)
        self.five.grid(row=4, column=1)
        self.six.grid(row=4, column=2)

        self.one.grid(row=5, column=0)
        self.two.grid(row=5, column=1)
        self.three.grid(row=5, column=2)

        self.zero.grid(row=6, column=0, columnspan=2)
        self.dot.grid(row=6, column=2)

# menambahkan karakter tertentu di kolom input. Anda dapat menambahkan lebih banyak validasi sesuai dengan skenario, ini hanya untuk tujuan deskriptif.
    def appent_input(self, val):
        old_val = self.input.get()
        new_val = old_val + val
        # if()
        self.input.delete(0, END)
        self.input.insert(0, self.validate_input(new_val))

#Untuk memvalidasi input tombol yang diklik. Seperti dalam ekspresi karakter apa yang diperbolehkan dan apa yang tidak.
    def validate_input(self, input):
        first_char = input[0]
        wront_char = re.match('[^0-9\-\+\(\)]', first_char)
        if(wront_char == None):
            return input
        elif(len(input) == 1):
            return ""
        else:
            return self.validate_input(input[1:])


app = Calculator()
app.mainloop()