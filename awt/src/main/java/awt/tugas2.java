/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package awt;

import java.awt.Button;
import java.awt.Frame;
import java.awt.Label;
import java.awt.TextField;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

/**
 *
 * @author jack
 */
public class tugas2 {
    
    public static void main(String[] args) {
        //make frame
           Frame f=new Frame("Tugas 2"); 
           //make textfield source
           final TextField source1=new TextField();  
            source1.setBounds(50,50, 150,20);  
            
           final TextField source2=new TextField();  
            source2.setBounds(50,75, 150,20);  
            //make button 
         Button b=new Button("Tekan");  
         b.setBounds(50,100,100,30);  
           //make textfield result
           
           //make label
           final Label resultLabel = new Label();
           resultLabel.setBounds(250, 50, 125, 30);
           
         final TextField result=new TextField();  
           result.setBounds(50,150, 150,20);  
           //make listener for button
         b.addActionListener(new ActionListener(){  
        public void actionPerformed(ActionEvent e){  
            resultLabel.setText(source1.getText() + " " + source2.getText());  
        }  
    });  
    f.add(b);
    f.add(source1); 
    f.add(source2);  
    f.add(resultLabel);
    f.setSize(400,400);  
    f.setLayout(null);  
    f.setVisible(true);   
    } 
}
