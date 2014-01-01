package stuff;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Menu {
	int selection;
	String[] options;
	
	public void scrollDown() {
		if (selection + 1 < options.length)
			selection++;
	}
	
	public void scrollUp() {
		if (selection > 0)
			selection--;
	}
	
	public static Menu read(String fn) {
		Menu m = null;
		
		fn = "res/menus/" + fn;
		
		try {
			Scanner sc = new Scanner(new File(fn));
			
			m = new Menu();
			m.options = new String[sc.nextInt()];
			sc.nextLine();
			
			for (int i=0; i<m.options.length; i++)
				m.options[i] = sc.nextLine();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		}
		
		return m;
	}
}
