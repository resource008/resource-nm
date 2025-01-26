import java.net.*;

public class UDPEchoClient {
    public static void main(String[] args) {
        final String SERVER_IP = "127.0.0.1";
        final int SERVER_PORT = 12345;
        try {
            DatagramSocket clientSocket = new DatagramSocket();
            InetAddress serverAddress = InetAddress.getByName(SERVER_IP);
            byte[] sendData;
            byte[] receiveData = new byte[1024];
            while (true) {
                System.out.print("Enter message: ");
                String message = System.console().readLine();
                sendData = message.getBytes();
                DatagramPacket sendPacket = new DatagramPacket(sendData, sendData.length, serverAddress, SERVER_PORT);
                clientSocket.send(sendPacket);
                DatagramPacket receivePacket = new DatagramPacket(receiveData, receiveData.length);
                clientSocket.receive(receivePacket);
                String receivedMessage = new String(receivePacket.getData(), 0, receivePacket.getLength());
                System.out.println("From Server: " + receivedMessage);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
