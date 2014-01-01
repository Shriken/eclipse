package stuff;

import java.io.File;
import java.io.IOException;
import javax.imageio.ImageIO;
import java.awt.image.BufferedImage;

public class Util {
	public static BufferedImage loadImage(String fn) {
		BufferedImage image = null;
		
		fn = "res/images/" + fn;
		
		try {
			image = ImageIO.read(new File(fn));
		} catch (IOException e) {
			e.printStackTrace();
		}
		
		return image;
	}
}
