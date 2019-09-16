/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package PTI18;

/**
 *
 * @author jack
 */
public class Kursi {
    private int jumlahKaki;
    private String bhnRangka;
    private String bhnAlas;
    private String bhnSandar;
    private boolean adaMeja;
    private int warnaRangka;
    private int warnaAlasDuduk;
    private boolean tmpTas;
    private boolean kondisi;

    public void viewChair(int jumlahKaki, String bhnRangka, String bhnAlas, String bhnSandar, boolean adaMeja, int warnaAlasDuduk){
        String ket1, warna;
        
    System.out.println("berikut ini adalah data Kursi");
        System.out.println("Jumlah Kaki : " + jumlahKaki);
        System.out.println("Bahan Rangka : " + bhnRangka);
        System.out.println("Bahan Alas : " + bhnAlas);
        System.out.println("Bahan Sandar : " + bhnSandar);
        if(adaMeja == true)
            ket1="memiliki meja";
        else
            ket1 ="tidak memiliki meja";
        System.out.println("Ada Meja : " + ket1);
        if(warnaAlasDuduk==1)
            warna="merah";
        else if(warnaAlasDuduk==2)
            warna="biru";
        else
            warna="putih";
        System.out.println("Warna Alas Duduk : " + warna);
    }
    
    /**
     * @return the jumlahKaki
     */
    public int getJumlahKaki() {
        return jumlahKaki;
    }

    /**
     * @param jumlahKaki the jumlahKaki to set
     */
    public void setJumlahKaki(int jumlahKaki) {
        this.jumlahKaki = jumlahKaki;
    }

    /**
     * @return the bhnRangka
     */
    public String getBhnRangka() {
        return bhnRangka;
    }

    /**
     * @param bhnRangka the bhnRangka to set
     */
    public void setBhnRangka(String bhnRangka) {
        this.bhnRangka = bhnRangka;
    }

    /**
     * @return the bhnAlas
     */
    public String getBhnAlas() {
        return bhnAlas;
    }

    /**
     * @param bhnAlas the bhnAlas to set
     */
    public void setBhnAlas(String bhnAlas) {
        this.bhnAlas = bhnAlas;
    }

    /**
     * @return the bhnSandar
     */
    public String getBhnSandar() {
        return bhnSandar;
    }

    /**
     * @param bhnSandar the bhnSandar to set
     */
    public void setBhnSandar(String bhnSandar) {
        this.bhnSandar = bhnSandar;
    }

    /**
     * @return the adaMeja
     */
    public boolean isAdaMeja() {
        return adaMeja;
    }

    /**
     * @param adaMeja the adaMeja to set
     */
    public void setAdaMeja(boolean adaMeja) {
        this.adaMeja = adaMeja;
    }

    /**
     * @return the warnaRangka
     */
    public int getWarnaRangka() {
        return warnaRangka;
    }

    /**
     * @param warnaRangka the warnaRangka to set
     */
    public void setWarnaRangka(int warnaRangka) {
        this.warnaRangka = warnaRangka;
    }

    /**
     * @return the warnaAlasDuduk
     */
    public int getWarnaAlasDuduk() {
        return warnaAlasDuduk;
    }

    /**
     * @param warnaAlasDuduk the warnaAlasDuduk to set
     */
    public void setWarnaAlasDuduk(int warnaAlasDuduk) {
        this.warnaAlasDuduk = warnaAlasDuduk;
    }

    /**
     * @return the tmpTas
     */
    public boolean isTmpTas() {
        return tmpTas;
    }

    /**
     * @param tmpTas the tmpTas to set
     */
    public void setTmpTas(boolean tmpTas) {
        this.tmpTas = tmpTas;
    }

    /**
     * @return the kondisi
     */
    public boolean isKondisi() {
        return kondisi;
    }

    /**
     * @param kondisi the kondisi to set
     */
    public void setKondisi(boolean kondisi) {
        this.kondisi = kondisi;
    }
}
