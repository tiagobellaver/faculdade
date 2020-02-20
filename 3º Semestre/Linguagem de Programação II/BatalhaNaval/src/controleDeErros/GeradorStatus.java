package controleDeErros;

import atributos.ArmazenaPosicao;
import java.util.HashMap;
import java.util.Map;

public class GeradorStatus {
    private static final Map<ArmazenaPosicao, String> BattleshipGameLog = new HashMap<>();
    
    public static boolean consultaPosicaoLog(ArmazenaPosicao pos) {
        return BattleshipGameLog.containsKey(pos);
    }
    
    public static void adicionaLog(ArmazenaPosicao pos, String textoDoLog) {
        BattleshipGameLog.putIfAbsent(pos, textoDoLog);
    }
}
