#ifndef PREFERENCESDIALOG_H
#define PREFERENCESDIALOG_H

#include <QDialog>

namespace Ui {
class preferencesDialog;
}

class preferencesDialog : public QDialog
{
    Q_OBJECT





public:
    explicit preferencesDialog(QWidget *parent = 0 );

      void setPackagename(const QString &packagename);
      void setSSHpassword(const QString &sshpassword);
      void setPulldir(const QString &pulldir);
      void setftvUpdate(const bool &updatecheck);  
      void setsshBoot(const bool &sshcheck);
      void setversioncheck(const bool &versioncheck);
      void setversionLabel(const QString &versiontext);
      void setdaddr(const QString &daddr);


      void setbuffermode(const int &buffermode);
      void setbuffersize(const QString &buffersize);
      void setbufferfactor(const QString &bufferfactor);



    ~preferencesDialog();

public:
   QString xbmcpackageName();
   QString sshpassword();
   int buffermode();
   QString buffersize();
   QString bufferfactor();
   QString pulldir();

   bool updatecheck();
   bool sshcheck();
   bool versioncheck();

int returnval1();

private slots:
   void on_pfolderButton_clicked();


   void on_getUpdate_clicked();


   void onRequestCompleted();


   void on_writexml_clicked();

   void on_resetxml_clicked();

   void on_pushButton_clicked();

private:
    Ui::preferencesDialog *ui;



};

#endif // PREFERENCESDIALOG_H
