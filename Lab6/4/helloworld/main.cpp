#include <QApplication>
#include <QPushButton>



int main(int argc, char **argv)
{
 QApplication app (argc, argv);
 QFont font ("Courier");
 QIcon icon ("C:/Users/Kenneth Tran/Documents/CSE 165 Shit stuff/Lab6/4/clownery_2.png");
 QPushButton button;
 button.setIcon(icon);
 button.setFont(font);
 button.setText("The world that god only knows");
 button.setToolTip("A tooltip");
 button.show();
 return app.exec();
}
