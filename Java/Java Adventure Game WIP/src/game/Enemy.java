package game;

public class Enemy {
	
	private int hitPoints = 0;
	private String name;
	private Weapon monsterWeapon;
	
	public int getHitPoints() {
		return hitPoints;
	}
	public void setHitPoints(int hitPoints) {
		this.hitPoints = hitPoints;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public Weapon getMonsterWeapon() {
		return monsterWeapon;
	}
	public void setMonsterWeapon(Weapon monsterWeapon) {
		this.monsterWeapon = monsterWeapon;
	}
	
	

}
