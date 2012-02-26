#ifndef CLIENT_MASTER_H
#define CLIENT_MASTER_H
#include <QtNetwork/QtNetwork>

class Client_Master
{
public:
    Client_Master();
    Client_Master();
    virtual ~Client_Master()=0;
private slots:
    //Checks the password
    virtual void check_login(std::string pass);

    // This gets called when you press enter
    virtual void on_Enter();

    // This is a function that will connect to a socket's readyRead()
    virtual void readyRead();

    // This function gets called when the socket tells us it's connected.
    virtual void connected();

protected:
    //Holds the message & the socket
    std::string message;
    QTcpSocket *ClientSocket;

    enum ClientType {
        admin,
        standard
    };
    ClientType Type;

    std::string RoomName;
private:
    std::string Realname;
    void setupUSR(std::string USRNAME, std::string LegalName);
};

#endif // CLIENT_MASTER_H
