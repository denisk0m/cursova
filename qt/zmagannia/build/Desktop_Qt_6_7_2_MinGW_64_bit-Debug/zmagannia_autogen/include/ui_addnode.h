/********************************************************************************
** Form generated from reading UI file 'addnode.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNODE_H
#define UI_ADDNODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_addNode
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit_name;
    QDoubleSpinBox *spinBox_weight;
    QDoubleSpinBox *spinBox_jumpHeight;
    QDoubleSpinBox *spinBox_runTime;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *addNode)
    {
        if (addNode->objectName().isEmpty())
            addNode->setObjectName("addNode");
        addNode->resize(591, 459);
        buttonBox = new QDialogButtonBox(addNode);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(50, 400, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        lineEdit_name = new QLineEdit(addNode);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(140, 160, 113, 28));
        spinBox_weight = new QDoubleSpinBox(addNode);
        spinBox_weight->setObjectName("spinBox_weight");
        spinBox_weight->setGeometry(QRect(140, 210, 111, 29));
        spinBox_jumpHeight = new QDoubleSpinBox(addNode);
        spinBox_jumpHeight->setObjectName("spinBox_jumpHeight");
        spinBox_jumpHeight->setGeometry(QRect(140, 260, 111, 29));
        spinBox_runTime = new QDoubleSpinBox(addNode);
        spinBox_runTime->setObjectName("spinBox_runTime");
        spinBox_runTime->setGeometry(QRect(140, 320, 111, 29));
        label = new QLabel(addNode);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 160, 63, 20));
        label_2 = new QLabel(addNode);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 220, 63, 20));
        label_3 = new QLabel(addNode);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 260, 81, 20));
        label_4 = new QLabel(addNode);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(32, 320, 81, 20));

        retranslateUi(addNode);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addNode, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addNode, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addNode);
    } // setupUi

    void retranslateUi(QDialog *addNode)
    {
        addNode->setWindowTitle(QCoreApplication::translate("addNode", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addNode", "\320\206\320\274'\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("addNode", "\320\222\320\260\320\263\320\260(\320\272\320\263)", nullptr));
        label_3->setText(QCoreApplication::translate("addNode", "\320\241\321\202\321\200\320\270\320\261\320\276\320\272(\320\274)", nullptr));
        label_4->setText(QCoreApplication::translate("addNode", "\320\247\320\260\321\201 \320\261\321\226\320\263\321\203(\321\201)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addNode: public Ui_addNode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNODE_H
