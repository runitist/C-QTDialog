#ifndef SDKDEMO_H
#define SDKDEMO_H

#include <QDialog>

namespace Ui {
class SDKDemo;
}

class SDKDemo : public QDialog
{
    Q_OBJECT

public:
    explicit SDKDemo(QWidget *parent = nullptr);//SDKDemo 생성자
    ~SDKDemo();//SDKDemo 소멸자

private slots:
    //화면 요소 이벤트
    void on_pictureinit_clicked();
    void on_caminit_clicked();
    void on_camtestbtn_clicked();
    void on_cammodcombo_currentIndexChanged(int index);
    void picinittoggle(bool ispictureinit);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void cambtntoggle(bool iscamon);
    void caminittoggle(bool iscaminit);
    void capturebtnOn();
    void capturebtnOff();

    void on_btestbtn_clicked();

    void on_ptestbtn_clicked();

    void on_extestbtn_clicked();

    void on_capturebtn_clicked();

    void on_assignbtn_clicked();

private:
    Ui::SDKDemo *ui;//화면 객체

    QString execPath; //실행파일 경로
    QString sltPath; //QT 루트 경루
    QString imgPath; //파일 다이얼로그 이미지 경로
    QString imgName1;//초기 이미지1 경로
    QString imgchosen1;//선택 이미지1 경로
    QString imgName2;//초기 이미지2 경로
    QString imgchosen2;//선택 이미지2 경로
    QString captureName;

    bool iscapture;//capture 여부
    bool iscaminit;//cam모드 init 여부
    bool iscamon;//cam 기동 여부
    bool ispictureinit;//picture모드 init 여부
    int cammode;//CAM 테스트 init 모드 0 : CPU Mode, 1 : CUDA GPU Mode, 2 : MyRIAD VPU Mode
    int picturemode;//Picture 테스트 init 모드 0 : CPU Mode, 1 : CUDA GPU Mode, 2 : MyRIAD VPU Mode
};

#endif // SDKDEMO_H
