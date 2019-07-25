#include "sdkdemo.h"
#include "ui_sdkdemo.h"
#include <windows.h>
#include <QFileDialog>

//SDKDemo 다이얼로그 컨트롤 코드 구역

//다이얼로그 생성자
SDKDemo::SDKDemo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SDKDemo)
{
    //SDKDemo 다이얼로그 초기화///////////////////////////////////////////////////////////////////////////////
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);//다이얼로그 리사이즈 금지
    setWindowFlags(windowFlags() | Qt::WindowMinimizeButtonHint);//다이얼로그 최소화 버튼

    //사진 테스트 모드 초기화/////////////////////////////////////////////////////////////////////////////////
    ispictureinit=false;
    picturemode = 0;

    //이미지 사진 라벨 중앙정렬
    ui->imgtxt1->setAlignment(Qt::AlignCenter);
    ui->imgtxt2->setAlignment(Qt::AlignCenter);

    //모드 선택 콤보박스 아이템 추가
    ui->picmodcombo->addItem("CPU Mode");
    ui->picmodcombo->addItem("CUDA GPU Mode");
    ui->picmodcombo->addItem("MyRIAD VPU Mode");

    //실행파일 경로
    execPath = QApplication::applicationDirPath();
    sltPath = execPath.left(execPath.lastIndexOf("/"));
    sltPath = sltPath.left(sltPath.lastIndexOf("/"));
    imgPath = sltPath+"/Dependencies/image";

    //사진1 경로 텍스트
    imgName1 = imgPath+"/"+"i000qa-fn.jpg";
    imgchosen1 = "";

    //사진2 경로 텍스트
    imgName2 = imgPath+"/"+"i000ra-fn.jpg";
    imgchosen2 = "";

    ui->imgtxt1->setText(imgName1.right((imgName1.length()-imgName1.lastIndexOf("/"))-1));
    ui->imgtxt2->setText(imgName2.right((imgName2.length()-imgName2.lastIndexOf("/"))-1));

    ui->label_1->setPixmap(QPixmap(imgName1));//사진 이미지 출력
    ui->label_1->setScaledContents(true);//사진 크기에 맞추기

    ui->label_2->setPixmap(QPixmap(imgName2));//사진 이미지 출력
    ui->label_2->setScaledContents(true);//사진 크기에 맞추기

    //init 이전 비활성화
    ui->btestbtn->setEnabled(false);
    ui->ptestbtn->setEnabled(false);
    ui->extestbtn->setEnabled(false);



    //CAM테스트 모드 초기화/////////////////////////////////////////////////////////////////////////////////
    iscaminit=false;
    iscamon=false;
    iscapture = false;
    cammode = 0;

    //모드 선택 콤보박스 아이템 추가
    ui->cammodcombo->addItem("CPU Mode");
    ui->cammodcombo->addItem("CUDA GPU Mode");
    ui->cammodcombo->addItem("MyRIAD VPU Mode");

    //camimg text 중앙정렬
    ui->camimg->setAlignment(Qt::AlignCenter);

    //init 이전 숨길 요소
    ui->camtestbtn->hide();
    ui->captureimg->hide();

    //camtest 이전 비활성화
    ui->capturebtn->setEnabled(false);
    ui->capturetext->setEnabled(false);

    //capture 이전 비활성화
    ui->assignbtn->setEnabled(false);

}

//다이얼로그 소멸자
SDKDemo::~SDKDemo()
{
    delete ui;
}


//공용 함수/////////////////////////////////////////////////////////////////////



//사진 모드 이벤트///////////////////////////////////////////////////////////////
void SDKDemo::on_pictureinit_clicked()
//init 버튼 클릭
{
    picinittoggle(ispictureinit);
}

void SDKDemo::on_pushButton_clicked()
//사진 1 선택
{
    imgchosen1 = QFileDialog::getOpenFileName(this, tr("사진 1 선택"), imgPath);//파일 선택 다이얼로그 생성(실행영역, 다이얼로그 제목, 초기 경로)
    if(QString::compare(imgchosen1, "")){//다이얼로그 반환값이 있는지 검증. 사진 선택 안할시 변화 없음.
        ui->imgtxt1->setText(imgchosen1.right((imgchosen1.length()-imgchosen1.lastIndexOf("/"))-1));//우측 파일명만을 라벨에 출력
        ui->pictureconsole->append("사진1 : "+imgchosen1);
        ui->label_1->setPixmap(QPixmap(imgchosen1));
    }
}

void SDKDemo::on_pushButton_2_clicked()
//사진 2 선택
{
    imgchosen2 = QFileDialog::getOpenFileName(this, tr("사진 2 선택"), imgPath);//파일 선택 다이얼로그 생성(실행영역, 다이얼로그 제목, 초기 경로)
    if(QString::compare(imgchosen2, "")){//다이얼로그 반환값이 있는지 검증. 사진 선택 안할시 변화 없음.
        ui->imgtxt2->setText(imgchosen2.right((imgchosen2.length()-imgchosen2.lastIndexOf("/"))-1));//우측 파일명만을 라벨에 출력
        ui->pictureconsole->append("사진2 : "+imgchosen2);
        ui->label_2->setPixmap(QPixmap(imgchosen2));
    }
}
void SDKDemo::on_btestbtn_clicked()
//기본 테스트
{
    ui->pictureconsole->append(ui->btestbtn->text());
}
void SDKDemo::on_ptestbtn_clicked()
//성능 테스트
{
    ui->pictureconsole->append(ui->ptestbtn->text());
}

void SDKDemo::on_extestbtn_clicked()
//확장 테스트
{
    ui->pictureconsole->append(ui->extestbtn->text());
}


//사진 모드 함수
void SDKDemo::picinittoggle(bool ispictureinit)
{
    if(!ispictureinit){
        ui->pictureinit->setText("UnInit");
        ui->btestbtn->setEnabled(true);
        ui->ptestbtn->setEnabled(true);
        ui->extestbtn->setEnabled(true);
        ui->picmodcombo->setEnabled(false);

        ui->pictureconsole->setText(ui->picmodcombo->currentText());

        //각 모드 인덱스에 따른 작동.
        if(picturemode == 0){

        }else if(picturemode == 1){

        }else if(picturemode == 2){

        }

        this->ispictureinit=true;//플래그 변경
    }else{
        ui->pictureinit->setText("Init");
        ui->btestbtn->setEnabled(false);
        ui->ptestbtn->setEnabled(false);
        ui->extestbtn->setEnabled(false);
        ui->picmodcombo->setEnabled(true);
        ui->pictureconsole->setText("");

        this->ispictureinit=false;//플래그 변경
    }
}


//CAM 모드 이벤트///////////////////////////////////////////////////////////////

void SDKDemo::on_caminit_clicked()
    //init 버튼 클릭
{
    caminittoggle(iscaminit);

    if(iscamon){
        cambtntoggle(iscamon);
    }
    if(iscapture){
        capturebtnOff();
    }
}

void SDKDemo::on_camtestbtn_clicked()
    //CAM테스트 버튼 클릭
{
    cambtntoggle(iscamon);
    if(iscapture){
        capturebtnOff();
    }
}

void SDKDemo::on_cammodcombo_currentIndexChanged(int index)
    //CAM 모드 콤보 인덱스 변화 이벤트
{
    cammode = index;
}

void SDKDemo::on_capturebtn_clicked()
    //Capture 버튼 이벤트
{
    captureName = ui->capturetext->text();
    if(captureName != NULL){
        if(!iscapture){
            //캡쳐된 상황이 아니라면,
            capturebtnOn();
            iscapture = true;
        }
        ui->captureimg->setEnabled(true);
        ui->camconsole->append("캡쳐 : "+captureName);
    }else{
        ui->camconsole->append("캡쳐명을 입력해주세요.");
    }
}

void SDKDemo::on_assignbtn_clicked()
    //Capture 등록 버튼 이벤트
{
    captureName = ui->capturetext->text();
        if(captureName != NULL){
            ui->camconsole->append("등록 : "+captureName);
        }else{
            ui->camconsole->append("캡쳐명을 입력해주세요.");
        }

}


//CAM 모드 함수
void SDKDemo::caminittoggle(bool iscaminit)
    //CAM init 버튼 토글
{
    if(!iscaminit){
        //cam이 init 되지 않았으면
        ui->caminit->setText("UnInit");
        ui->camtestbtn->show();
        ui->cammodcombo->setEnabled(false);
        ui->camconsole->setText(ui->cammodcombo->currentText());

        //각 모드 인덱스에 따른 작동.
        if(cammode == 0){

        }else if(cammode == 1){

        }else if(cammode == 2){

        }
        this->iscaminit=true;
    }else{
        ui->caminit->setText("Init");
        ui->camtestbtn->hide();
        ui->cammodcombo->setEnabled(true);
        ui->camconsole->setText("");
        this->iscaminit=false;
    }
}

void SDKDemo::cambtntoggle(bool iscamon)
{
    //CAM테스트 버튼 토글
    if(!iscamon){
        //cam이 on 되지 않았으면.
        ui->capturebtn->setEnabled(true);
        ui->capturetext->setEnabled(true);
        ui->camimg->setText("");
        ui->capturetext->setPlaceholderText("(캡쳐명을 입력해주세요.)");

        ui->camconsole->append("CAM ON");

        this->iscamon=true;
    }else{
        ui->capturebtn->setEnabled(false);
        ui->capturetext->setEnabled(false);
        ui->camimg->setText("CAM");
        ui->capturetext->setPlaceholderText("");
        ui->capturetext->setText("");

        ui->camconsole->append("CAM OFF");

        this->iscamon=false;
    }
}

void SDKDemo::capturebtnOn()
    //캡쳐 버튼 활성화
{
        ui->assignbtn->setEnabled(true);
        this->iscapture = true;
}
void SDKDemo::capturebtnOff()
    //캡쳐 버튼 비활성화
{
    ui->assignbtn->setEnabled(false);
    this->iscapture = false;
}
