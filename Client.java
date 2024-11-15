import java.net.*;

import java.io.*;


class Client
{

    public static void main(String Arg[]) throws Exception
    {
   System.out.println("Client application is runing");

   Socket sobj=new Socket("localhost",2100);  // Request to Server
   System.out.println("Connection establish with the client..");

   PrintStream ps=new PrintStream(sobj.getOutputStream());
    BufferStream br=new BufferedReader(new InputStreamReader(sobj.getInputStream()));

}

}