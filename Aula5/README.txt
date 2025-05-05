comandos 

rpcgen calculadora.x
rpcgen -a -C calculadora.x
gcc Servidor.c calculadora_svc.c calculadora_xdr.c -lnsl -o servidor ./servidor
gcc cliente.c calculadora_clnt.c calculadora_xdr.c -lnsl -o cliente ./cliente