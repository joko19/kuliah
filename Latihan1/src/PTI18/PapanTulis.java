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
public class PapanTulis {
   private String bhnList;
   private String material;
   private int lebar;
   private int panjang;
   private boolean adaKaki;
   private boolean adatmpSpidol;
   private boolean doubleSide;

    public void viewBoard(String bhnList, String material, int lebar, int panjang, boolean adaKaki, boolean adatmpSpidol, boolean doubleSide){
        String keterangan1, warna;
        System.out.println("Bahan List : " + bhnList);
        System.out.println("Material : " + material);
        System.out.println("Panjang : " + panjang);
        System.out.println("Lebar : " + lebar);
        System.out.println("Ad : " + panjang);
        System.out.println("Lebar: " + lebar);
        if(adaKaki == true)
            keterangan1="memiliki kaki";
        else
            keterangan1="tidak memiliki data";
        System.out.println("Apakah memilik kaki = " + keterangan1);
    }

    /**
     * @return the bhnList
     */
    public String getBhnList() {
        return bhnList;
    }

    /**
     * @param bhnList the bhnList to set
     */
    public void setBhnList(String bhnList) {
        this.bhnList = bhnList;
    }

    /**
     * @return the material
     */
    public String getMaterial() {
        return material;
    }

    /**
     * @param material the material to set
     */
    public void setMaterial(String material) {
        this.material = material;
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
     * @return the adaKaki
     */
    public boolean isAdaKaki() {
        return adaKaki;
    }

    /**
     * @param adaKaki the adaKaki to set
     */
    public void setAdaKaki(boolean adaKaki) {
        this.adaKaki = adaKaki;
    }

    /**
     * @return the adatmpSpidol
     */
    public boolean isAdatmpSpidol() {
        return adatmpSpidol;
    }

    /**
     * @param adatmpSpidol the adatmpSpidol to set
     */
    public void setAdatmpSpidol(boolean adatmpSpidol) {
        this.adatmpSpidol = adatmpSpidol;
    }

    /**
     * @return the doubleSide
     */
    public boolean isDoubleSide() {
        return doubleSide;
    }

    /**
     * @param doubleSide the doubleSide to set
     */
    public void setDoubleSide(boolean doubleSide) {
        this.doubleSide = doubleSide;
    }
}
