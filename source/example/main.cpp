#include <QDateTime>
#include <QApplication>

#include <graphics/numericscale.h>
#include <graphics/sectionscale.h>
#include <graphics/datetimescale.h>
#include <graphics/standardplotitem.h>
#include <graphics/standardplotlayout.h>
#include <graphics/standardplotscene.h>
#include <graphics/infiniteplotscene.h>
#include <graphics/valueadapter.h>
#include <graphics/datetimescaleplotitem.h>
#include <graphics/interactiveplotitem.h>
#include <graphics/standardplotview.h>

using namespace Graphics;


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    StandardPlotView *view = new StandardPlotView();
    view->setAttribute(Qt::WA_DeleteOnClose);
    view->setWindowTitle("Graphics Plot Test");

    DateTimeValueAdapter adapter;

    DateTimeScale *x_scale = new DateTimeScale();
    x_scale->setOrientation(Qt::Horizontal);
    x_scale->setLength(3000);
    x_scale->setRange(adapter.toAdapted(QDateTime(QDate(2014, 9, 30), QTime(0, 0, 0))),
                      adapter.toAdapted(QDateTime(QDate(2014, 10, 1), QTime(0, 0, 0))));

    SectionScale *y_scale = new SectionScale();
    y_scale->setOrientation(Qt::Vertical);
    y_scale->setLength(500);
    y_scale->setSectionsCount(5);

    StandardPlotLayout *layout = new StandardPlotLayout();

    InfinitePlotScene *scene = new InfinitePlotScene(view);
    scene->setXScale(x_scale);
    scene->setYScale(y_scale);
    scene->setLayout(layout);

    DateTimeScalePlotItem *scale_item = new DateTimeScalePlotItem(x_scale);
    scale_item->setBeginCoordinates(x_scale->minimum(), 0);
    scale_item->setEndCoordinates(x_scale->maximum(), 0);
    scale_item->setWidthCalculated(true);
    scale_item->setHeightCalculated(true);

    scene->addPlotItem(scale_item);

    StandardPlotItem *plot_item_1 = new StandardPlotItem();
    plot_item_1->setBeginCoordinates(adapter.toAdapted(QDateTime(QDate(2014, 10, 1), QTime(0, 20, 0))), 1);
    plot_item_1->setEndCoordinates(adapter.toAdapted(QDateTime(QDate(2014, 10, 1), QTime(3, 13, 0))), 1);
    plot_item_1->setWidthCalculated(true);
    plot_item_1->setHeightCalculated(true);

    scene->addPlotItem(plot_item_1);

    StandardPlotItem *plot_item_2 = new StandardPlotItem();
    plot_item_2->setBeginCoordinates(adapter.toAdapted(QDateTime(QDate(2014, 10, 1), QTime(3, 43, 20))), 1);
    plot_item_2->setEndCoordinates(adapter.toAdapted(QDateTime(QDate(2014, 10, 1), QTime(13, 13, 13))), 1);
    plot_item_2->setWidthCalculated(true);
    plot_item_2->setHeightCalculated(true);

    scene->addPlotItem(plot_item_2);

    StandardPlotItem *plot_item_3 = new StandardPlotItem();
    plot_item_3->setBeginCoordinates(adapter.toAdapted(QDateTime(QDate(2014, 10, 1), QTime(1, 10, 0))), 2);
    plot_item_3->setEndCoordinates(adapter.toAdapted(QDateTime(QDate(2014, 10, 1), QTime(9, 0, 0))), 2);
    plot_item_3->setWidthCalculated(true);
    plot_item_3->setHeightCalculated(false);
    plot_item_3->setHeight(20);

    scene->addPlotItem(plot_item_3);

    StandardPlotItem *plot_item_4 = new StandardPlotItem();
    plot_item_4->setBeginCoordinates(adapter.toAdapted(QDateTime(QDate(2014, 10, 1), QTime(15, 0, 0))), 1);
    plot_item_4->setEndCoordinates(adapter.toAdapted(QDateTime(QDate(2014, 10, 1), QTime(19, 0, 0))), 4);
    plot_item_4->setWidthCalculated(true);
    plot_item_4->setHeightCalculated(true);

    scene->addPlotItem(plot_item_4);

    StandardPlotItem *plot_item_5 = new StandardPlotItem();
    plot_item_5->setBeginCoordinates(adapter.toAdapted(QDateTime(QDate(2014, 10, 1), QTime(1, 10, 0))), 3);
    plot_item_5->setEndCoordinates(adapter.toAdapted(QDateTime(QDate(2014, 10, 1), QTime(9, 0, 0))), 3);
    plot_item_5->setWidthCalculated(true);
    plot_item_5->setHeightCalculated(false);
    plot_item_5->setHeight(20);

    scene->addPlotItem(plot_item_5);

    StandardPlotItem *plot_item_6 = new StandardPlotItem();
    plot_item_6->setBeginCoordinates(adapter.toAdapted(QDateTime(QDate(2014, 10, 1), QTime(1, 10, 0))), 4);
    plot_item_6->setEndCoordinates(adapter.toAdapted(QDateTime(QDate(2014, 10, 1), QTime(9, 0, 0))), 4);
    plot_item_6->setWidthCalculated(true);
    plot_item_6->setHeightCalculated(false);
    plot_item_6->setHeight(20);

    scene->addPlotItem(plot_item_6);

    scene->refresh();

    view->setPlotScene(scene);
    view->setZoomEnabled(true);

    view->resize(1500, 600);
    view->show();

    return app.exec();
}
