package game;

public class Player {
	
	private int hitPoints = 0;	
	private String name;
	private Weapon playerWeapon;
	
	
	public Weapon getPlayerWeapon() {
		return playerWeapon;
	}
	public void setPlayerWeapon(Weapon playerWeapon) {
		this.playerWeapon = playerWeapon;
	}
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
	
	
}
