#include "csjtableview.h"
#include "ui_csjtableview.h"
#include <QDebug>

CSJTableView::CSJTableView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CSJTableView)
{
    ui->setupUi(this);
    setWindowTitle("TableView");
    resize(1024,576);


    //1,创建表单
    table = new QTableWidget(50,5,this);
    table->setFixedSize(550,300);
    table->move(38,88);
    //2，设置列宽
    table->setColumnWidth(0,100);
    table->setColumnWidth(1,100);
    table->setColumnWidth(2,100);
    table->setColumnWidth(3,100);
    table->setColumnWidth(4,100);

    //3,设置水平标题标签（列标签）
    QStringList header;
    //添加数据
    header <<"场次" <<"主次" <<"客队" <<"让球" <<"比赛时间";
    //设置标题
    table->setHorizontalHeaderLabels(header);


    //4，设置表单水平滚动条
    table->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    /*

        ScrollBarAsNeeded,  需要时显示
        ScrollBarAlwaysOff, 隐藏
        ScrollBarAlwaysOn 一直显示
    */
    //5，设置表单垂直滚动条
    table->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    //6,设置框架的形状
    table->setFrameShape(QFrame::NoFrame);  // 设置一个无框架的表单

    //7，编辑触发器
    table->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置用户不能编辑表单，内容只读

    //8，设置焦点策略
    table->setFocusPolicy(Qt::NoFocus); //没有焦点策略

    //9，设置选择模式
    table->setSelectionMode(QAbstractItemView::SingleSelection); //设置不能选择
    /*

        NoSelection,          不能选择
        SingleSelection,      选中单格
        MultiSelection,       多选选中单格
        ExtendedSelection,    选中单格
        ContiguousSelection
    */

    //10，设置显示网格
    table->setShowGrid(true); //不显示网格

    //11,设置垂直头不可见
    table->verticalHeader()->setVisible(false);



    for(int i = 0; i<50;i++){
        for(int y = 0;y<5;y++){

            QString itemStr = "Item";

            //12，设置表格内容
            table->setItem(i,y,new QTableWidgetItem(itemStr)); //设置表格内容

            //13,设置单元格文字居中
            table->item(i,y)->setTextAlignment(Qt::AlignCenter);
        }


    }

    //14，设置最后一行拉伸
    table->horizontalHeader()->setStretchLastSection(true);

    //15,设置表头文字居中
    table->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);

    //16,设置表头颜色， 字体加粗
    table->setStyleSheet(QString("QTableWidget QHeaderView::section{background:#2a9ee4;font-weight:bold;"
                                 "border:none;height:35px;color:white;}"                          // 设置表头格式
                                 "QTableWidget{gridline-color:#2aaee4;color:#000000;bordernone;}"));   //设置表格颜色


    //17，开启各行颜色
    table->setAlternatingRowColors(true);
    table->setStyleSheet(QString("QTableWidget{alternate-background-color:lightblue}"));


    //18,获取item中的文字
    qDebug()<<table->item(5,2)->text();

    //19,判断是否选中行
    bool focus = table->isItemSelected(table->currentItem());

    qDebug()<<"是否选中"<<focus;

    if(focus){

        int row1 = table->currentItem()->row(); //当前选中行

        qDebug()<<"当前选中行"<<row1;
    }





}

CSJTableView::~CSJTableView()
{
    delete ui;
}

void CSJTableView::on_pushButton_clicked()
{
    emit backToMain();
}
