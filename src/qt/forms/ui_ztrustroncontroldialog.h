/********************************************************************************
** Form generated from reading UI file 'ztrustroncontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZTRUSTRONCONTROLDIALOG_H
#define UI_ZTRUSTRONCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZTrustronControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZTrustron;
    QLabel *labelZTrustron_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZTrustronControlDialog)
    {
        if (ZTrustronControlDialog->objectName().isEmpty())
            ZTrustronControlDialog->setObjectName(QStringLiteral("ZTrustronControlDialog"));
        ZTrustronControlDialog->resize(681, 384);
        ZTrustronControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZTrustronControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZTrustronControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZTrustronControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZTrustron = new QLabel(ZTrustronControlDialog);
        labelZTrustron->setObjectName(QStringLiteral("labelZTrustron"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZTrustron);

        labelZTrustron_int = new QLabel(ZTrustronControlDialog);
        labelZTrustron_int->setObjectName(QStringLiteral("labelZTrustron_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZTrustron_int);

        pushButtonAll = new QPushButton(ZTrustronControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZTrustronControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zTrustron Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZTrustronControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZTrustronControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZTrustronControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZTrustronControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZTrustronControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZTrustronControlDialog)
    {
        ZTrustronControlDialog->setWindowTitle(QApplication::translate("ZTrustronControlDialog", "Select zTrustron to Spend", 0));
        labelQuantity->setText(QApplication::translate("ZTrustronControlDialog", "Quantity", 0));
        labelQuantity_int->setText(QApplication::translate("ZTrustronControlDialog", "0", 0));
        labelZTrustron->setText(QApplication::translate("ZTrustronControlDialog", "zTrustron", 0));
        labelZTrustron_int->setText(QApplication::translate("ZTrustronControlDialog", "0", 0));
        pushButtonAll->setText(QApplication::translate("ZTrustronControlDialog", "Select/Deselect All", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZTrustronControlDialog", "Is Spendable", 0));
    } // retranslateUi

};

namespace Ui {
    class ZTrustronControlDialog: public Ui_ZTrustronControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZTRUSTRONCONTROLDIALOG_H
