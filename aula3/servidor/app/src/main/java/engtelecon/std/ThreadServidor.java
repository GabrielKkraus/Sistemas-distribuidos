package engtelecon.std;
import java.net.Socket;

public class ThreadServidor  implements Runnable{
    private Socket cliente;
    public ThreadServidor(Socket cliente){
        this.cliente = cliente;

    }
@Override
public void run(){
    System.out.println( "Cliente conectado" + cliente.getInetAddress());

}
    
}
