FROM ubuntu:24.04

WORKDIR /app

RUN apt-get update

RUN apt-get install -y nyancat figlet

COPY mensagem.txt /app/

COPY entrypoint.sh /

RUN chmod +x /entrypoint.sh

CMD [ "/entrypoint.sh" ]