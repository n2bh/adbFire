#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

class MyClass;

private slots:

    void on_actionAbout_triggered();

    void on_connButton_clicked();

    void on_astart_Button_clicked();

    void on_akill_Button_clicked();

    void TimerEvent();

    void readInc();

    void on_sideload_Button_clicked();

    void on_disButton_clicked();

    void on_actionQuit_triggered();

    void on_uninstall_Button_clicked();

    void on_actionHelp_triggered();

    void on_backupButton_clicked();

    void on_rootButton_clicked();

    void on_fpushButton_clicked();

    void on_fpullButton_clicked();

    void on_restoreButton_clicked();

    void on_pushRemote_clicked();

    void on_consoleButton_clicked();

    void on_actionPreferences_triggered();


    void getpackage();


    void on_actionReboot_triggered();

    void on_actionRecovery_triggered();

    void on_screenshotButton_clicked();

    void on_actionInstall_busybox_triggered();

    void on_actionUninstall_Busybox_triggered();

    void on_fdellButton_clicked();

    void on_actionFirmware_install_triggered();

    void on_mntButton_clicked();

    void on_umntButton_clicked();

    void on_rwButton_clicked();

    void on_roButton_clicked();

    void on_pushSplash_clicked();

    void on_llamaButton_clicked();

    void on_donate_clicked();

    void get_data();

    void onReqCompleted();

    void on_actionCredits_triggered();

    void on_actionInstall_Recovery_triggered();

    void on_actionInstall_SSH_triggered();

    void on_actionUninstall_SSH_triggered();

    void on_puttyButton_clicked();

    void on_sftpButton_clicked();

    void on_actionView_Log_triggered();

    void on_actionSwap_data_triggered();

    void on_actionUnlock_Bootloader_triggered();

    // void on_actionBuild_mount_script_triggered();

    void on_actionConsole_triggered();

    void on_actionMount_CIFS_triggered();


    // void on_usbmode_toggled();

    void on_actionVideo_Help_triggered();

    void on_actionDownload_Kodi_triggered();

    void on_pushButton_clicked();

    void on_actionInstall_Stock_Recovery_triggered();

    void on_actionInstall_Samba_triggered();

    void on_actionUninstall_Samba_triggered();

    void on_actionInstallBootmenu_triggered();

    void on_actionUninstall_Boot_Menu_triggered();

    void data_external();

    void data_internal();

    void external_thumb();

    void internal_thumb();


    void on_actionMove_Restore_Data_triggered();






    void on_usbmode_clicked();

    void on_override_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
