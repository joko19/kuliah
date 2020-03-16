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

public class Main {
    public static void main(String[] args) {
        //make frame
           Frame f=new Frame("Button Example"); 
           //make textfield source
           final TextField source=new TextField();  
            source.setBounds(50,50, 150,20);  
            //make button 
         Button b=new Button("Click Here");  
         b.setBounds(50,100,100,30);  
           //make textfield result
         final TextField result=new TextField();  
           result.setBounds(50,150, 150,20);  
           //make listener for button
         b.addActionListener(new ActionListener(){  
        public void actionPerformed(ActionEvent e){  
            result.setText(source.getText());  
        }  
    });  
    f.add(b);
    f.add(source);  
    f.add(result);
    f.setSize(400,400);  
    f.setLayout(null);  
    f.setVisible(true);   
    } 
}
