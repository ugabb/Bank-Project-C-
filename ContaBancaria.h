/* 
	Entrega 04
	POO CC Grupo01 Trab Entrega04
	Nomes: 
		2D/1: 
			Eduardo Mendes Machado - 27879062;
			Maurício Pereira da Silva Junior - 29612161;
			
			
		3D/1: 
			Gabriel Silva Barros - 30349044;
			Gustavo Tiburcio Maia da Silva - 26052130;
			Iago Vinícius Alves Diniz - 25073656;
			Willian Wagner Xavier Ramos da Silva - 26523426; 


	Integração do programa: Willian;	
*/

// Arquivo: ContaBancaria.h


class Cliente {
	private:
             char cpf [12];
             char nome [60];
             int dtNascDia;
             int dtNascMes;
             int dtNascAno;
             char endereco [60];
             
      static int  qtdClientes;
            
      static Cliente* VerificarExistenciaCliente (char cpfTitular[12]);
	  static int      RecuperarQtdClientes (void);    
  	  static void     IncrementarQtdClientes (void);
  	    	       
    public:
                      Cliente (char cpfTitular[12]);
	         void     RecuperarCliente (char cliCpf[12], char cliNome[60], 
			                            int* cliNascDia, int* cliNascMes, int* cliNascAno, 
										char cliEnder[60]);
             int      VerificarCliente (char cpfTitular [12]);
             
      static Cliente* ObterCliente (void);  
};

class ContaBancaria {
	private:
               int  numAgencia;
               int  numConta;
               int  dtAbDia;
               int  dtAbMes;
               int  dtAbAno;
             float  saldo;
           Cliente* titular;
           
        static int  qtdContas;
        
 	    static int  RecuperarQtdContas (void);        // abstrato
        static void IncrementarQtdContas (void);      // abstrato

   public:
   	             ContaBancaria (Cliente* titular);
   	 virtual void RecuperarConta (int* ag, int* ct, 
		                          int* dAbDia, int* dAbMes, int* dAbAno, 
								  float* sdo, char titCpf[12], char titNome[60],  
								  int* titNascDia, int* titNascMes, int* titNascAno, 
								  char titEndereco[60]);
   	        
   	 static void AberturaConta (void);               // abstrato
   	 static void Listagem (void);	                 // abstrato
};

class ContaCorrente: public ContaBancaria {
	private:
        static int  qtdContas;
        
        static void AbrirConta (Cliente* titular);
 
 	    static int  RecuperarQtdContas (void);  		 	         
 	    static void IncrementarQtdContas (void);
   public:
   	         ContaCorrente (Cliente* titular);
   	    
   	   static void AberturaConta (void);
   	   static void Listagem (void);	 
};

class ContaPoupanca: public ContaBancaria {
	private:
                int  diaRendimento;		
        static float txRendimento;
        
        static int   qtdContas;
        
        static void AbrirConta (Cliente* titular);

	    static int  RecuperarQtdContas (void);                   
	    static void IncrementarQtdContas (void);
            
    public:
    	             ContaPoupanca (Cliente* titular);
	           void  RecuperarConta (int* ag, int* ct, 
                                     int* dAbDia, int* dAbMes, int* dAbAno,
                                     float* sdo, 
									 char titCpf [12], char titNome [60],             
                                     int* titNascDia, int* titNascMes, int* titNascAno, 
                                     char titEndereco [60], 
									 int* diaRend, float* taxa);
	       
	    static float ObterTxRendimento (void);
	   
        static void  AberturaConta (void);
        static void  Listagem (void);
};     	
