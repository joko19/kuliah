/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package PTI18;

import java.io.BufferedReader;
import java.io.InputStreamReader;

/**
 *
 * @author jack
 */
public class Utama {
    
    private boolean hasilMeja;
static InputStreamReader inputStreamReader = new InputStreamReader(System.in);
    static BufferedReader input = new BufferedReader(inputStreamReader);
    private static int jmlKaki;
    BufferedReader dataIn = new BufferedReader(new InputStreamReader( System.in) );
    
    public static void main(String[] args){
        System.out.println("silahkan pilih");
        System.out.println("1.Kursi");
        System.out.println("2.Meja");
        
        try {
            int pilihan = Integer.parseInt(input.readLine());
            switch(pilihan){
            case 1:
                showKursi();
                break;
            case 2:
                showTable();
                break;
            
            default:
                System.out.println("Pilihan salah!");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
    
public static void showKursi(){
    System.out.println("masukkan data Kursi");
    BufferedReader dataIn = new BufferedReader(new InputStreamReader( System.in) );
     try {
            System.out.print("Berapa Jumlah Kaki Kursi : ");
            int jumlah = Integer.parseInt(input.readLine());
            System.out.print("Bahan Rangka : ");
            String bahanRangka = input.readLine().trim();
            System.out.print("Bahan Alas : ");
            String bahanAlas = input.readLine().trim();
            System.out.print("Bahan Sandar : ");
            String bahanSandar = input.readLine().trim();
            System.out.print("Kode Warna Alas Duduk ");
            int warnaAlasDuduk = Integer.parseInt(input.readLine());
            System.out.print("Apakah ada meja(1/0) ");
            boolean isMeja = Boolean.parseBoolean(input.readLine());
        Kursi inikursi = new Kursi();
        inikursi.setJumlahKaki(jumlah);
        inikursi.setBhnRangka(bahanRangka);
        inikursi.setBhnAlas(bahanAlas);
        inikursi.setBhnSandar(bahanSandar);
        inikursi.setWarnaAlasDuduk(warnaAlasDuduk);
        inikursi.setAdaMeja(isMeja);
        inikursi.viewChair(inikursi.getJumlahKaki(), inikursi.getBhnRangka(), inikursi.getBhnAlas(), inikursi.getBhnSandar(), inikursi.isAdaMeja(), inikursi.getWarnaAlasDuduk());
        } catch (Exception e) {
            e.printStackTrace();
        }
}
    
public static void showTable(){
    BufferedReader dataIn = new BufferedReader(new InputStreamReader( System.in) );
     try {
            System.out.print("Berapa Jumlah Kaki Meja : ");
            int jumlahkaki = Integer.parseInt(input.readLine());
            System.out.print("Bahan Rangka : ");
            String bahanRangka = input.readLine().trim();
            System.out.print("Bahan Meja : ");
            String bahanAlas = input.readLine().trim();
            System.out.print("Berapa Panjang : ");
            int panjang = Integer.parseInt(input.readLine());
            System.out.print("Berapa Lebar : ");
            int lebar = Integer.parseInt(input.readLine());
            System.out.print("Berapa Tinggi : ");
            int tinggi = Integer.parseInt(input.readLine());
            System.out.print("Berapa Tebal : ");
            int tebal = Integer.parseInt(input.readLine());
            System.out.print("Warna Meja : ");
            String warnaMeja = input.readLine().trim();
            
            
            
        Meja iniMeja = new Meja();
        iniMeja.setJmlKaki(jmlKaki);
        iniMeja.setBhnMeja(bahanAlas);
        iniMeja.setBhnRangka(bahanRangka);
        iniMeja.setPanjang(panjang);
        iniMeja.setLebar(lebar);
        iniMeja.setTinggi(tinggi);
        iniMeja.setTebal(tebal);
        iniMeja.setWarnaMeja(warnaMeja);
        iniMeja.viewTable(iniMeja.getJmlKaki(),  iniMeja.getBhnRangka(), iniMeja.getBhnMeja(), iniMeja.getPanjang(), iniMeja.getLebar(), iniMeja.getTinggi(), iniMeja.getTebal(), iniMeja.getWarnaMeja());
        } catch (Exception e) {
            e.printStackTrace();
        }
}
    
}

