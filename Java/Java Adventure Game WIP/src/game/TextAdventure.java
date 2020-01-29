package game;
import javax.swing.JOptionPane;

public class TextAdventure {

	
	public static void main(String[] args) {
		//String initialWeapon;
		String charName;
		String checker;
		
		Weapon stick = new Weapon();
		Weapon sword = new Weapon();
		Weapon pistol = new Weapon();		
		Weapon sniper = new Weapon();
		Weapon banana = new Weapon();
		
		Player character = new Player();
		
		Enemy minor = new Enemy();
		Enemy major = new Enemy();
		
		//Weapon creation		
		//Stick
		stick.setName("Stick");
		stick.setDamage(2);
		//Sword
		sword.setName("Sword");
		sword.setDamage(5);
		//Pistol
		pistol.setName("Pistol");
		pistol.setDamage(10);
		//Sniper_rifle
		sniper.setName("Sniper Rifle");
		sniper.setDamage(25);
		//Banana
		banana.setName("Banana");
		sniper.setDamage(2);
		System.out.println("Weapon generation complete.");
		
		//Creating the player with weapon
		charName = JOptionPane.showInputDialog("What is your name player?");
		character.setName(charName);
		character.setHitPoints(10);
		character.setPlayerWeapon(stick);
		System.out.println("Player name: " + character.getName());
		System.out.println("Player hit points: " + character.getHitPoints());
		/*
		initialWeapon = JOptionPane.showInputDialog("Please select a weapon: STICK,SWORD,PISTOL,SNIPER,BANANA");
		initialWeapon = initialWeapon.toUpperCase();
		
		switch (initialWeapon){
		
		case "STICK":			
			character.setPlayerWeapon(stick);
			break;
		case "SWORD":
			character.setPlayerWeapon(sword);
			break;
		case "PISTOL":			
			character.setPlayerWeapon(pistol);
			break;
		case "SNIPER":			
			character.setPlayerWeapon(sniper);
			break;
		case "BANANA":			
			character.setPlayerWeapon(banana);
			break;
		default: 
			System.out.println("Invalid");
			System.exit(1);
		}
		*/
		System.out.println("Player tool: " + character.getPlayerWeapon().getName());
		
		//Creating "Minor" class enemy
		System.out.println("Generating low class enemy...");
		minor.setName("Minor");
		minor.setHitPoints(5);
		minor.setMonsterWeapon(stick);
	/*	System.out.println("Enemy name: " + minor.getName());
		System.out.println("Enemy health: " + minor.getHitPoints());
		System.out.println("Enemy weapon: " + minor.getMonsterWeapon().getName());*/
		
		//Creating "Major" class enemy
		System.out.println("Generating high class enemy...");
		major.setName("Major");
		major.setHitPoints(15);
		major.setMonsterWeapon(pistol);
	/*	System.out.println("Enemy name: " + major.getName());
		System.out.println("Enemy health: " + major.getHitPoints());
		System.out.println("Enemy weapon: " + major.getMonsterWeapon().getName());*/
		
		checker = JOptionPane.showInputDialog("Do you want to begin your journey? [Y/N]");
		checker = checker.toUpperCase();
		if (checker.equals("Y")){
			
			JOptionPane.showMessageDialog(null, "Great, your journey awaits");
			
		}else{
			
			System.out.println("ERROR: USER TERMINATED");
			System.exit(1);
			
		}
		JOptionPane.showMessageDialog(null, "Level 1...");
		JOptionPane.showMessageDialog(null, character.getName() + " wake up... WAKE UP.");
		JOptionPane.showMessageDialog(null, "err, who is it?");
		JOptionPane.showMessageDialog(null, "Come NOW QUICKLY, its a horde, they are finally here! QUICKLY!");
		checker = JOptionPane.showInputDialog("Follow the voice? [Y/N]");
		checker = checker.toUpperCase();
		
		if(checker.equals("Y")){
			
			JOptionPane.showMessageDialog(null,"You decide to follow the voice.");
			
		}else{
			
			JOptionPane.showMessageDialog(null,"You stay where you are, a bomb explodes and you are severly injured. you loose 5hp!");
			JOptionPane.showMessageDialog(null,"You follow the voice");
			character.setHitPoints(character.getHitPoints() - 5);
			
		}
		
		JOptionPane.showMessageDialog(null, "Kate: Took you long enough");
		JOptionPane.showMessageDialog(null, character.getName() + ": What do you mean the horde?");
		JOptionPane.showMessageDialog(null, "Kate: Do you not remember? Well you got hit pretty hard and you were unconcious for ages.");
		JOptionPane.showMessageDialog(null, "If I had not found you then you would have been captured.");
		JOptionPane.showMessageDialog(null, character.getName() + ": Captured by who?");
		JOptionPane.showMessageDialog(null, "Kate: You will know more later. Follow me, we have to reach Tom at Alpha base.");
		
		checker = JOptionPane.showInputDialog("Kate: Are you coming? [Y/N]");
		checker = checker.toUpperCase();
		
		if(checker.equals("Y")){
			
			JOptionPane.showMessageDialog(null, character.getName() + ": Okay I will come");
						
		}else{
			
			JOptionPane.showMessageDialog(null, "Kate: There here...");
			JOptionPane.showMessageDialog(null, "...");
			System.exit(1);
			
		}
		JOptionPane.showMessageDialog(null, "You follow Kate for a few hours, no trouble...");
		JOptionPane.showMessageDialog(null, character.getName() + " look out! There here");
		JOptionPane.showMessageDialog(null, "Kate: We can't sneak past this group we must fight and hold our ground.");
		JOptionPane.showMessageDialog(null, "Kate: You take the one on the left and I will take the one on the right.");
		checker = JOptionPane.showInputDialog("Fight? [Y/N]");
		checker = checker.toUpperCase();
		
		if(checker.equals("Y")){
			
			
			
		}
		
		
	}

}
