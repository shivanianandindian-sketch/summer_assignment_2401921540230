package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {
        
        System.out.println("**********case 1: Creating and using Veena instance **********");
        Veena veena = new Veena();
        veena.play();
        
        System.out.println("\n**********case 2: Creating and using Saxophone instance**********");
        Saxophone saxophone = new Saxophone();
        saxophone.play();
        
        System.out.println("\n**********case 3: Using polymorphism**********");
        Playable playableInstrument;
        
        playableInstrument = veena;
        playableInstrument.play();
        
        playableInstrument = saxophone;
        playableInstrument.play();
    }
}
