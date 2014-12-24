// ~CryptAxe

#ifndef CONFCREATIONWIDGET_H
#define CONFCREATIONWIDGET_H

#include <QWidget>

namespace Ui {
class ConfCreationWidget;
}

class ConfCreationWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit ConfCreationWidget(QWidget *parent = 0);
    ~ConfCreationWidget();
    QString detectDataDir();
    QString detectOperatingSystem();
    
private slots:
    void on_pushButton_browse_clicked();

    void on_radioButton_linux_toggled(bool checked);

    void on_radioButton_mac_toggled(bool checked);

    void on_radioButton_windows_toggled(bool checked);

    void on_checkBox_server_toggled(bool checked);

    void on_checkBox_generate_toggled(bool checked);

    void on_radioButton_addNodes_toggled(bool checked);

    void on_radioButton_connectOnly_toggled(bool checked);

    void on_checkBox_testnet_toggled(bool checked);

    void on_checkBox_startMini_toggled(bool checked);

    void on_checkBox_startTrayed_toggled(bool checked);

    void on_checkBox_receiveByIP_toggled(bool checked);

    void on_comboBox_selectCoin_currentIndexChanged(int index);

    void on_pushButton_cancel_clicked();

    void on_pushButton_Save_clicked();

private:
    Ui::ConfCreationWidget *ui;
    int selectCoinIndex;
    QString confDirectory;
    bool serverEnabled;
    int RPCPort;
    QString RPCUser;
    QString RPCPassword;
    bool generateEnabled;
    bool addNodesEnabled;
    bool connectOnlyEnabled;
    QString node1;
    QString node2;
    QString node3;
    QString node4;
    QString node5;
    QString node6;
    QString node7;
    bool testnetEnabled;
    bool startMinEnabled;
    bool startTrayedEnabled;
    bool receiveByIPEnabled;
    int maxConnections;
    int rpcTimeout;
    QString coinName;

    // String representing operating system detected
    QString osString;
};

#endif // CONFCREATIONWIDGET_H
