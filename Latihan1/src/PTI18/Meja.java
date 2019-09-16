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
public class Meja {
    private int jmlKaki;
    private String bhnRangka;
    private String bhnMeja;
    private int panjang;
    private int lebar;
    private int tinggi;
    private int tebal;
    private String warnaMeja;
    
    public void viewTable(int jumlahKaki, String bhnRangka, String bhnMeja, int panjang, int lebar, int tinggi, int tebal, String warnaMeja){
        System.out.println("Jumlah Kaki : " + jumlahKaki);
        System.out.println("Bahan Rangka : " + bhnRangka);
        System.out.println("Bahan Meja : " + bhnMeja);
        System.out.println("Panjang : " + panjang);
        System.out.println("Lebar: " + lebar);
        System.out.println("Tinggi : " + tinggi);
        System.out.println("Tebal: " + tebal);
        System.out.println("Warna : " + warnaMeja);
    }

    /**
     * @return the jmlKaki
     */
    public int getJmlKaki() {
        return jmlKaki;
    }

    /**
     * @param jmlKaki the jmlKaki to set
     */
    public void setJmlKaki(int jmlKaki) {
        this.jmlKaki = jmlKaki;
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
     * @return the bhnMeja
     */
    public String getBhnMeja() {
        return bhnMeja;
    }

    /**
     * @param bhnMeja the bhnMeja to set
     */
    public void setBhnMeja(String bhnMeja) {
        this.bhnMeja = bhnMeja;
    }

    /**
     * @return the panjang
     */
    public int getPanjang() {
        return panjang;
    }

    /**
     * @param panjang the panjang to set
     */
    public void setPanjang(int panjang) {
        this.panjang = panjang;
    }

    /**
     * @return the lebar
     */
    public int getLebar() {
        return lebar;
    }

    /**
     * @param lebar the lebar to set
     */
    public void setLebar(int lebar) {
        this.lebar = lebar;
    }

    /**
     * @return the tinggi
     */
    public int getTinggi() {
        return tinggi;
    }

    /**
     * @param tinggi the tinggi to set
     */
    public void setTinggi(int tinggi) {
        this.tinggi = tinggi;
    }

    /**
     * @return the tebal
     */
    public int getTebal() {
        return tebal;
    }

    /**
     * @param tebal the tebal to set
     */
    public void setTebal(int tebal) {
        this.tebal = tebal;
    }

    /**
     * @return the warnaMeja
     */
    public String getWarnaMeja() {
        return warnaMeja;
    }

    /**
     * @param warnaMeja the warnaMeja to set
     */
    public void setWarnaMeja(String warnaMeja) {
        this.warnaMeja = warnaMeja;
    }

    
}
