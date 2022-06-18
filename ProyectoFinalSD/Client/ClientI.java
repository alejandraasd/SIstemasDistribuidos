
import java.rmi.*;

//interface for ClientImpl
public interface ClientI extends java.rmi.Remote {

    /**
     *
     * @param file: Nombre del archivo
     * @param piece: El numero de la pieza a obtener
     * @return un arreglo de bytes, con la pieza
     * @throws RemoteException
     */
    public byte[] obtain(String file,int piece) 
		throws RemoteException;
        
    /**
     *Sirve para probar la conexion
     * @return
     * @throws RemoteException
     */
    public boolean probe()
                throws RemoteException;
        
    /**
     *Obtiene el objeto progreso para el archivo indicado
     * @param filename: el nombre del archivo del cual se quiere obtener su progreso
     * @return
     * @throws RemoteException
     */
    public Progreso getProgress(String filename) 
                throws RemoteException;
        
    /**
     * Esta funcion ya no se utilizo, sin embargo, serviria para crear nuevas conexiones y evitar conectarse con los que ya conectados
     * @return
     * @throws RemoteException
     */
    public int getId() 
                throws RemoteException;
	
}