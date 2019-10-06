/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ccConsole.h>
#include <ccDBRoot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionFullScreen;
    QAction *actionDisplayOptions;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionSetUniqueColor;
    QAction *actionSetColorGradient;
    QAction *actionComputeNormals;
    QAction *actionInvertNormals;
    QAction *actionComputeOctree;
    QAction *actionConsole;
    QAction *actionClose3DView;
    QAction *actionCloseAll3DViews;
    QAction *actionTile3DViews;
    QAction *actionCascade3DViews;
    QAction *actionPrevious3DView;
    QAction *actionNext3DView;
    QAction *actionNew3DView;
    QAction *actionClone;
    QAction *actionMerge;
    QAction *actionDelete;
    QAction *actionRegister;
    QAction *actionCloudCloudDist;
    QAction *actionCloudMeshDist;
    QAction *actionStatisticalTest;
    QAction *actionSamplePointsOnMesh;
    QAction *actionLabelConnectedComponents;
    QAction *actionSegment;
    QAction *actionTranslateRotate;
    QAction *actionShowHistogram;
    QAction *actionComputeStatParams;
    QAction *actionFilterByValue;
    QAction *actionGaussianFilter;
    QAction *actionDeleteScalarField;
    QAction *actionScalarFieldArithmetic;
    QAction *actionColorize;
    QAction *actionSmoothMeshSF;
    QAction *actionEnhanceMeshSF;
    QAction *actionClearColor;
    QAction *actionClearNormals;
    QAction *actionResampleWithOctree;
    QAction *actionComputeMeshAA;
    QAction *actionComputeMeshLS;
    QAction *actionMeasureMeshSurface;
    QAction *actionCPS;
    QAction *actionDeleteAllSF;
    QAction *actionMultiplySF;
    QAction *actionKMeans;
    QAction *actionFrontPropagation;
    QAction *actionApplyScale;
    QAction *actionMatchBBCenters;
    QAction *actionUnroll;
    QAction *actionSFGradient;
    QAction *actionZoomAndCenter;
    QAction *actionSetViewTop;
    QAction *actionSetViewFront;
    QAction *actionSetViewBack;
    QAction *actionSetViewLeft;
    QAction *actionSetViewRight;
    QAction *actionSetViewBottom;
    QAction *actionDisplayMainTools;
    QAction *actionDisplayViewTools;
    QAction *actionDisplayScalarFieldsTools;
    QAction *actionToggleSunLight;
    QAction *actionToggleCustomLight;
    QAction *actionGlobalZoom;
    QAction *actionToggleCenteredPerspective;
    QAction *actionToggleViewerBasedPerspective;
    QAction *actionRefresh;
    QAction *actionTestFrameRate;
    QAction *actionRenderToFile;
    QAction *actionAboutPlugins;
    QAction *actionConvertToRGB;
    QAction *actionShowDepthBuffer;
    QAction *actionExportDepthBuffer;
    QAction *actionModifySensor;
    QAction *actionRasterize;
    QAction *actionAlign;
    QAction *actionSubsample;
    QAction *actionLoadShader;
    QAction *actionDeleteShader;
    QAction *actionPointPicking;
    QAction *actionComputeBestFitBB;
    QAction *actionEditCamera;
    QAction *actionPointListPicking;
    QAction *actionCurvature;
    QAction *actionRoughness;
    QAction *actionFitPlane;
    QAction *actionRenameSF;
    QAction *actionFitQuadric;
    QAction *actionSNETest;
    QAction *actionToggleVisibility;
    QAction *actionToggleNormals;
    QAction *actionToggleColors;
    QAction *actionToggleSF;
    QAction *actionApplyTransformation;
    QAction *actionSmoothMeshLaplacian;
    QAction *actionConvertNormalToHSV;
    QAction *actionSaveViewportAsObject;
    QAction *actionPickRotationCenter;
    QAction *actionComputeDistancesFromSensor;
    QAction *actionBilateralFilter;
    QAction *actionComputeScatteringAngles;
    QAction *actionToggleActiveSFColorScale;
    QAction *actionShowActiveSFPrevious;
    QAction *actionShowActiveSFNext;
    QAction *actionPointPairsAlign;
    QAction *actionAddConstantSF;
    QAction *actionExportCoordToSF;
    QAction *actionSubdivideMesh;
    QAction *actionToggleShowName;
    QAction *actionPrimitiveFactory;
    QAction *actionToggleMaterials;
    QAction *actionSetOrthoView;
    QAction *actionSetCenteredPerspectiveView;
    QAction *actionSetViewerPerspectiveView;
    QAction *actionSetPivotAlwaysOn;
    QAction *actionSetPivotRotationOnly;
    QAction *actionSetPivotOff;
    QAction *actionSetViewIso1;
    QAction *actionSetViewIso2;
    QAction *actionConvertTextureToColor;
    QAction *actionOpenColorScalesManager;
    QAction *actionCrossSection;
    QAction *actionEditGlobalShiftAndScale;
    QAction *actionScalarFieldFromColor;
    QAction *actionComputeKdTree;
    QAction *actionTest;
    QAction *actionAddIdField;
    QAction *actionFitFacet;
    QAction *actionAdjustZoom;
    QAction *actionSetSFAsCoord;
    QAction *actionCloseAll;
    QAction *actionEditGlobalScale;
    QAction *actionViewFromSensor;
    QAction *actionFindBiggestInnerRectangle;
    QAction *actionCreateGBLSensor;
    QAction *actionCreateCameraSensor;
    QAction *actionCheckPointsInsideFrustum;
    QAction *actionProjectUncertainty;
    QAction *actionOrientNormalsMST;
    QAction *actionOrientNormalsFM;
    QAction *actionCNETest;
    QAction *actionApproximateDensity;
    QAction *actionComputeDensity;
    QAction *actionRemoveDuplicatePoints;
    QAction *actionCrop;
    QAction *actionConvertNormalToDipDir;
    QAction *actionExportCloudInfo;
    QAction *actionInterpolateColors;
    QAction *actionDistanceToBestFitQuadric3D;
    QAction *actionChangeColorLevels;
    QAction *actionResetGUIElementsPos;
    QAction *actionConvertToRandomRGB;
    QAction *actionNoiseFilter;
    QAction *actionComputeStatParams2;
    QAction *actionMeasureMeshVolume;
    QAction *actionFlagMeshVertices;
    QAction *actionToggleActivation;
    QAction *actionLockRotationAxis;
    QAction *actionCreateCloudFromEntCenters;
    QAction *actionComputeBestICPRmsMatrix;
    QAction *actionEnterBubbleViewMode;
    QAction *actionExtractSections;
    QAction *actionConvertPolylinesToMesh;
    QAction *actionLevel;
    QAction *actionFitSphere;
    QAction *actionMatchScales;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionDistanceMap;
    QAction *actionSORFilter;
    QAction *actionEnableStereo;
    QAction *actionComputePointsVisibility;
    QAction *actionCompute2HalfDimVolume;
    QAction *actionExclusiveFullScreen;
    QAction *actionEnableVisualDebugTraces;
    QAction *actionRGBToGreyScale;
    QAction *actionTracePolyline;
    QAction *actionEnableQtWarnings;
    QAction *actionGlobalShiftSettings;
    QAction *actionEnableCameraLink;
    QAction *actionShowWaveDialog;
    QAction *actionCreatePlane;
    QAction *actionEditPlane;
    QAction *actionCreateSurfaceBetweenTwoPolylines;
    QAction *actionMeshTwoPolylines;
    QAction *actionFitPlaneProxy;
    QAction *actionEnhanceRGBWithIntensities;
    QAction *actionMeshScanGrids;
    QAction *actionAutoPickRotationCenter;
    QAction *actionShowCursor3DCoordinates;
    QAction *actionDeleteScanGrid;
    QAction *actionCompressFWFData;
    QAction *actionInterpolateSFs;
    QAction *actionExportPlaneInfo;
    QAction *actionLock_rotation_about_arbitrary_axis;
    QAction *actionSamplePointsOnPolyline;
    QAction *actionNoTranslation;
    QAction *actionComputeGeometricFeature;
    QAction *actionBBMinCornerToOrigin;
    QAction *actionBBMaxCornerToOrigin;
    QAction *actionBBCenterToOrigin;
    QAction *actionComputeLocal;
    QAction *actionPOS;
    QAction *actionComputeMeasure;
    QAction *actionCloudSmoothing;
    QAction *actionCloudCheck;
    QAction *actionCloudClassify;
    QAction *actionCloudPickup;
    QAction *actionCloudData;
    QAction *actionDSM;
    QAction *actionDEM;
    QAction *actionDLG;
    QAction *actionDOM;
    QAction *actionDataPreprocessing;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuDisplay;
    QMenu *menuToolbars;
    QMenu *menuLights;
    QMenu *menuActiveScalarField;
    QMenu *menuLanguage;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QMenu *menuScalarFields;
    QMenu *menuColors;
    QMenu *menuNormals;
    QMenu *menuOrientNormals;
    QMenu *menuConvert_to;
    QMenu *menuOctree;
    QMenu *menuMesh;
    QMenu *menuMeshScalarField;
    QMenu *menuSensors;
    QMenu *menuGroundBasedLidar;
    QMenu *menuCameraSensor;
    QMenu *menuToggle;
    QMenu *menuWaveform;
    QMenu *menuPlane;
    QMenu *menuGrid;
    QMenu *menuPolyline;
    QMenu *menu3DViews;
    QMenu *menuTools;
    QMenu *menuSegmentation;
    QMenu *menuProjection;
    QMenu *menuStatistics;
    QMenu *menuDistances;
    QMenu *menuRegistration;
    QMenu *menuOther;
    QMenu *menuSandBox;
    QMenu *menuFit;
    QMenu *menuClean;
    QMenu *menuVolume;
    QMenu *menuBatchExport;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QDockWidget *Dockable;
    QWidget *dockWidgetContents;
    QVBoxLayout *vboxLayout;
    ccCustomQTreeView *dbTreeView;
    QStatusBar *statusBar;
    QToolBar *toolBarView;
    QDockWidget *DockableConsole;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *vboxLayout1;
    ccCustomQListWidget *consoleWidget;
    QToolBar *toolBarMainTools;
    QToolBar *toolBarSFTools;
    QDockWidget *Dockable_2;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *vboxLayout2;
    QTreeView *propertiesTreeView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1163, 709);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setFocusPolicy(Qt::ClickFocus);
        MainWindow->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CC/Icons/images/icon/cc_icon_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(true);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/CC/images/ccOpen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/CC/images/ccSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave->setShortcutContext(Qt::ApplicationShortcut);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionFullScreen = new QAction(MainWindow);
        actionFullScreen->setObjectName(QString::fromUtf8("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/CC/images/ccFullScreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullScreen->setIcon(icon3);
        actionFullScreen->setShortcutContext(Qt::ApplicationShortcut);
        actionDisplayOptions = new QAction(MainWindow);
        actionDisplayOptions->setObjectName(QString::fromUtf8("actionDisplayOptions"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/CC/images/monitor.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisplayOptions->setIcon(icon4);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionSetUniqueColor = new QAction(MainWindow);
        actionSetUniqueColor->setObjectName(QString::fromUtf8("actionSetUniqueColor"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/CC/images/typeRgbCcolor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetUniqueColor->setIcon(icon5);
        actionSetColorGradient = new QAction(MainWindow);
        actionSetColorGradient->setObjectName(QString::fromUtf8("actionSetColorGradient"));
        actionComputeNormals = new QAction(MainWindow);
        actionComputeNormals->setObjectName(QString::fromUtf8("actionComputeNormals"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/CC/images/typeNormal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComputeNormals->setIcon(icon6);
        actionInvertNormals = new QAction(MainWindow);
        actionInvertNormals->setObjectName(QString::fromUtf8("actionInvertNormals"));
        actionComputeOctree = new QAction(MainWindow);
        actionComputeOctree->setObjectName(QString::fromUtf8("actionComputeOctree"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/CC/images/dbOctreeSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComputeOctree->setIcon(icon7);
        actionConsole = new QAction(MainWindow);
        actionConsole->setObjectName(QString::fromUtf8("actionConsole"));
        actionConsole->setCheckable(true);
        actionConsole->setChecked(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/CC/images/ccConsole.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConsole->setIcon(icon8);
        actionConsole->setShortcutContext(Qt::ApplicationShortcut);
        actionClose3DView = new QAction(MainWindow);
        actionClose3DView->setObjectName(QString::fromUtf8("actionClose3DView"));
        actionCloseAll3DViews = new QAction(MainWindow);
        actionCloseAll3DViews->setObjectName(QString::fromUtf8("actionCloseAll3DViews"));
        actionTile3DViews = new QAction(MainWindow);
        actionTile3DViews->setObjectName(QString::fromUtf8("actionTile3DViews"));
        actionCascade3DViews = new QAction(MainWindow);
        actionCascade3DViews->setObjectName(QString::fromUtf8("actionCascade3DViews"));
        actionPrevious3DView = new QAction(MainWindow);
        actionPrevious3DView->setObjectName(QString::fromUtf8("actionPrevious3DView"));
        actionNext3DView = new QAction(MainWindow);
        actionNext3DView->setObjectName(QString::fromUtf8("actionNext3DView"));
        actionNew3DView = new QAction(MainWindow);
        actionNew3DView->setObjectName(QString::fromUtf8("actionNew3DView"));
        actionClone = new QAction(MainWindow);
        actionClone->setObjectName(QString::fromUtf8("actionClone"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/CC/images/ccClone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClone->setIcon(icon9);
        actionMerge = new QAction(MainWindow);
        actionMerge->setObjectName(QString::fromUtf8("actionMerge"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/CC/images/ccMerge.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMerge->setIcon(icon10);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/CC/images/ccDelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon11);
        actionDelete->setShortcutContext(Qt::ApplicationShortcut);
        actionRegister = new QAction(MainWindow);
        actionRegister->setObjectName(QString::fromUtf8("actionRegister"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/CC/images/ccRegister.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRegister->setIcon(icon12);
        actionCloudCloudDist = new QAction(MainWindow);
        actionCloudCloudDist->setObjectName(QString::fromUtf8("actionCloudCloudDist"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/CC/images/ccCloudCloudDistance.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCloudCloudDist->setIcon(icon13);
        actionCloudMeshDist = new QAction(MainWindow);
        actionCloudMeshDist->setObjectName(QString::fromUtf8("actionCloudMeshDist"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/CC/images/ccCloudMeshDistance.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCloudMeshDist->setIcon(icon14);
        actionStatisticalTest = new QAction(MainWindow);
        actionStatisticalTest->setObjectName(QString::fromUtf8("actionStatisticalTest"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/CC/images/ccStatTest.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStatisticalTest->setIcon(icon15);
        actionSamplePointsOnMesh = new QAction(MainWindow);
        actionSamplePointsOnMesh->setObjectName(QString::fromUtf8("actionSamplePointsOnMesh"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/CC/images/ccSamplePoints.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSamplePointsOnMesh->setIcon(icon16);
        actionLabelConnectedComponents = new QAction(MainWindow);
        actionLabelConnectedComponents->setObjectName(QString::fromUtf8("actionLabelConnectedComponents"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/CC/images/ccCCExtract.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLabelConnectedComponents->setIcon(icon17);
        actionSegment = new QAction(MainWindow);
        actionSegment->setObjectName(QString::fromUtf8("actionSegment"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/CC/images/ccSegment.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSegment->setIcon(icon18);
        actionTranslateRotate = new QAction(MainWindow);
        actionTranslateRotate->setObjectName(QString::fromUtf8("actionTranslateRotate"));
        actionTranslateRotate->setCheckable(false);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/CC/images/ccInteractiveTransformation.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTranslateRotate->setIcon(icon19);
        actionShowHistogram = new QAction(MainWindow);
        actionShowHistogram->setObjectName(QString::fromUtf8("actionShowHistogram"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/CC/images/ccHistogram.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowHistogram->setIcon(icon20);
        actionComputeStatParams = new QAction(MainWindow);
        actionComputeStatParams->setObjectName(QString::fromUtf8("actionComputeStatParams"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/CC/images/ccComputeStat.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComputeStatParams->setIcon(icon21);
        actionFilterByValue = new QAction(MainWindow);
        actionFilterByValue->setObjectName(QString::fromUtf8("actionFilterByValue"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/CC/images/ccFilterByValue.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFilterByValue->setIcon(icon22);
        actionGaussianFilter = new QAction(MainWindow);
        actionGaussianFilter->setObjectName(QString::fromUtf8("actionGaussianFilter"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/CC/images/ccGaussianFilter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGaussianFilter->setIcon(icon23);
        actionDeleteScalarField = new QAction(MainWindow);
        actionDeleteScalarField->setObjectName(QString::fromUtf8("actionDeleteScalarField"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/CC/images/ccDeleteSF.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeleteScalarField->setIcon(icon24);
        actionScalarFieldArithmetic = new QAction(MainWindow);
        actionScalarFieldArithmetic->setObjectName(QString::fromUtf8("actionScalarFieldArithmetic"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/CC/images/ccSfArithmetic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionScalarFieldArithmetic->setIcon(icon25);
        actionColorize = new QAction(MainWindow);
        actionColorize->setObjectName(QString::fromUtf8("actionColorize"));
        actionSmoothMeshSF = new QAction(MainWindow);
        actionSmoothMeshSF->setObjectName(QString::fromUtf8("actionSmoothMeshSF"));
        actionEnhanceMeshSF = new QAction(MainWindow);
        actionEnhanceMeshSF->setObjectName(QString::fromUtf8("actionEnhanceMeshSF"));
        actionClearColor = new QAction(MainWindow);
        actionClearColor->setObjectName(QString::fromUtf8("actionClearColor"));
        actionClearColor->setIcon(icon11);
        actionClearNormals = new QAction(MainWindow);
        actionClearNormals->setObjectName(QString::fromUtf8("actionClearNormals"));
        actionClearNormals->setIcon(icon11);
        actionResampleWithOctree = new QAction(MainWindow);
        actionResampleWithOctree->setObjectName(QString::fromUtf8("actionResampleWithOctree"));
        actionComputeMeshAA = new QAction(MainWindow);
        actionComputeMeshAA->setObjectName(QString::fromUtf8("actionComputeMeshAA"));
        actionComputeMeshLS = new QAction(MainWindow);
        actionComputeMeshLS->setObjectName(QString::fromUtf8("actionComputeMeshLS"));
        actionMeasureMeshSurface = new QAction(MainWindow);
        actionMeasureMeshSurface->setObjectName(QString::fromUtf8("actionMeasureMeshSurface"));
        actionCPS = new QAction(MainWindow);
        actionCPS->setObjectName(QString::fromUtf8("actionCPS"));
        actionDeleteAllSF = new QAction(MainWindow);
        actionDeleteAllSF->setObjectName(QString::fromUtf8("actionDeleteAllSF"));
        actionMultiplySF = new QAction(MainWindow);
        actionMultiplySF->setObjectName(QString::fromUtf8("actionMultiplySF"));
        actionKMeans = new QAction(MainWindow);
        actionKMeans->setObjectName(QString::fromUtf8("actionKMeans"));
        actionKMeans->setCheckable(true);
        actionFrontPropagation = new QAction(MainWindow);
        actionFrontPropagation->setObjectName(QString::fromUtf8("actionFrontPropagation"));
        actionFrontPropagation->setEnabled(false);
        actionApplyScale = new QAction(MainWindow);
        actionApplyScale->setObjectName(QString::fromUtf8("actionApplyScale"));
        actionMatchBBCenters = new QAction(MainWindow);
        actionMatchBBCenters->setObjectName(QString::fromUtf8("actionMatchBBCenters"));
        actionUnroll = new QAction(MainWindow);
        actionUnroll->setObjectName(QString::fromUtf8("actionUnroll"));
        actionSFGradient = new QAction(MainWindow);
        actionSFGradient->setObjectName(QString::fromUtf8("actionSFGradient"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/CC/images/ccGradient.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSFGradient->setIcon(icon26);
        actionZoomAndCenter = new QAction(MainWindow);
        actionZoomAndCenter->setObjectName(QString::fromUtf8("actionZoomAndCenter"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/CC/images/search.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomAndCenter->setIcon(icon27);
        actionSetViewTop = new QAction(MainWindow);
        actionSetViewTop->setObjectName(QString::fromUtf8("actionSetViewTop"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/CC/images/ccViewZpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewTop->setIcon(icon28);
        actionSetViewTop->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewFront = new QAction(MainWindow);
        actionSetViewFront->setObjectName(QString::fromUtf8("actionSetViewFront"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/CC/images/ccViewYpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewFront->setIcon(icon29);
        actionSetViewFront->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewBack = new QAction(MainWindow);
        actionSetViewBack->setObjectName(QString::fromUtf8("actionSetViewBack"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/CC/images/ccViewYneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewBack->setIcon(icon30);
        actionSetViewBack->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewLeft = new QAction(MainWindow);
        actionSetViewLeft->setObjectName(QString::fromUtf8("actionSetViewLeft"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/CC/images/ccViewXpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewLeft->setIcon(icon31);
        actionSetViewLeft->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewRight = new QAction(MainWindow);
        actionSetViewRight->setObjectName(QString::fromUtf8("actionSetViewRight"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/CC/images/ccViewXneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewRight->setIcon(icon32);
        actionSetViewRight->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewBottom = new QAction(MainWindow);
        actionSetViewBottom->setObjectName(QString::fromUtf8("actionSetViewBottom"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/CC/images/ccViewZneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewBottom->setIcon(icon33);
        actionSetViewBottom->setShortcutContext(Qt::ApplicationShortcut);
        actionDisplayMainTools = new QAction(MainWindow);
        actionDisplayMainTools->setObjectName(QString::fromUtf8("actionDisplayMainTools"));
        actionDisplayMainTools->setCheckable(true);
        actionDisplayMainTools->setChecked(true);
        actionDisplayViewTools = new QAction(MainWindow);
        actionDisplayViewTools->setObjectName(QString::fromUtf8("actionDisplayViewTools"));
        actionDisplayViewTools->setCheckable(true);
        actionDisplayViewTools->setChecked(true);
        actionDisplayScalarFieldsTools = new QAction(MainWindow);
        actionDisplayScalarFieldsTools->setObjectName(QString::fromUtf8("actionDisplayScalarFieldsTools"));
        actionDisplayScalarFieldsTools->setCheckable(true);
        actionDisplayScalarFieldsTools->setChecked(true);
        actionToggleSunLight = new QAction(MainWindow);
        actionToggleSunLight->setObjectName(QString::fromUtf8("actionToggleSunLight"));
        actionToggleSunLight->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleCustomLight = new QAction(MainWindow);
        actionToggleCustomLight->setObjectName(QString::fromUtf8("actionToggleCustomLight"));
        actionToggleCustomLight->setShortcutContext(Qt::ApplicationShortcut);
        actionGlobalZoom = new QAction(MainWindow);
        actionGlobalZoom->setObjectName(QString::fromUtf8("actionGlobalZoom"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/CC/images/ccGlobalZoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGlobalZoom->setIcon(icon34);
        actionToggleCenteredPerspective = new QAction(MainWindow);
        actionToggleCenteredPerspective->setObjectName(QString::fromUtf8("actionToggleCenteredPerspective"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/CC/images/ccCenteredPerspective32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToggleCenteredPerspective->setIcon(icon35);
        actionToggleCenteredPerspective->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleViewerBasedPerspective = new QAction(MainWindow);
        actionToggleViewerBasedPerspective->setObjectName(QString::fromUtf8("actionToggleViewerBasedPerspective"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/CC/images/ccViewerBasedPerspective32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToggleViewerBasedPerspective->setIcon(icon36);
        actionToggleViewerBasedPerspective->setShortcutContext(Qt::ApplicationShortcut);
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QString::fromUtf8("actionRefresh"));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefresh->setIcon(icon37);
        actionRefresh->setShortcutContext(Qt::ApplicationShortcut);
        actionTestFrameRate = new QAction(MainWindow);
        actionTestFrameRate->setObjectName(QString::fromUtf8("actionTestFrameRate"));
        actionRenderToFile = new QAction(MainWindow);
        actionRenderToFile->setObjectName(QString::fromUtf8("actionRenderToFile"));
        actionAboutPlugins = new QAction(MainWindow);
        actionAboutPlugins->setObjectName(QString::fromUtf8("actionAboutPlugins"));
        actionConvertToRGB = new QAction(MainWindow);
        actionConvertToRGB->setObjectName(QString::fromUtf8("actionConvertToRGB"));
        actionConvertToRGB->setIcon(icon5);
        actionShowDepthBuffer = new QAction(MainWindow);
        actionShowDepthBuffer->setObjectName(QString::fromUtf8("actionShowDepthBuffer"));
        actionExportDepthBuffer = new QAction(MainWindow);
        actionExportDepthBuffer->setObjectName(QString::fromUtf8("actionExportDepthBuffer"));
        actionModifySensor = new QAction(MainWindow);
        actionModifySensor->setObjectName(QString::fromUtf8("actionModifySensor"));
        actionRasterize = new QAction(MainWindow);
        actionRasterize->setObjectName(QString::fromUtf8("actionRasterize"));
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/CC/images/ccGrid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRasterize->setIcon(icon38);
        actionAlign = new QAction(MainWindow);
        actionAlign->setObjectName(QString::fromUtf8("actionAlign"));
        actionSubsample = new QAction(MainWindow);
        actionSubsample->setObjectName(QString::fromUtf8("actionSubsample"));
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/CC/images/ccSampleCloud.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSubsample->setIcon(icon39);
        actionLoadShader = new QAction(MainWindow);
        actionLoadShader->setObjectName(QString::fromUtf8("actionLoadShader"));
        actionLoadShader->setEnabled(false);
        actionDeleteShader = new QAction(MainWindow);
        actionDeleteShader->setObjectName(QString::fromUtf8("actionDeleteShader"));
        actionDeleteShader->setEnabled(false);
        actionPointPicking = new QAction(MainWindow);
        actionPointPicking->setObjectName(QString::fromUtf8("actionPointPicking"));
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/CC/images/ccPointPicking.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPointPicking->setIcon(icon40);
        actionComputeBestFitBB = new QAction(MainWindow);
        actionComputeBestFitBB->setObjectName(QString::fromUtf8("actionComputeBestFitBB"));
        actionEditCamera = new QAction(MainWindow);
        actionEditCamera->setObjectName(QString::fromUtf8("actionEditCamera"));
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/CC/images/photo-camera.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditCamera->setIcon(icon41);
        actionPointListPicking = new QAction(MainWindow);
        actionPointListPicking->setObjectName(QString::fromUtf8("actionPointListPicking"));
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/CC/images/ccPointListPicking.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPointListPicking->setIcon(icon42);
        actionCurvature = new QAction(MainWindow);
        actionCurvature->setObjectName(QString::fromUtf8("actionCurvature"));
        actionRoughness = new QAction(MainWindow);
        actionRoughness->setObjectName(QString::fromUtf8("actionRoughness"));
        actionRoughness->setEnabled(false);
        actionFitPlane = new QAction(MainWindow);
        actionFitPlane->setObjectName(QString::fromUtf8("actionFitPlane"));
        actionRenameSF = new QAction(MainWindow);
        actionRenameSF->setObjectName(QString::fromUtf8("actionRenameSF"));
        actionFitQuadric = new QAction(MainWindow);
        actionFitQuadric->setObjectName(QString::fromUtf8("actionFitQuadric"));
        actionSNETest = new QAction(MainWindow);
        actionSNETest->setObjectName(QString::fromUtf8("actionSNETest"));
        actionToggleVisibility = new QAction(MainWindow);
        actionToggleVisibility->setObjectName(QString::fromUtf8("actionToggleVisibility"));
        actionToggleVisibility->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleNormals = new QAction(MainWindow);
        actionToggleNormals->setObjectName(QString::fromUtf8("actionToggleNormals"));
        actionToggleNormals->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleColors = new QAction(MainWindow);
        actionToggleColors->setObjectName(QString::fromUtf8("actionToggleColors"));
        actionToggleColors->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleSF = new QAction(MainWindow);
        actionToggleSF->setObjectName(QString::fromUtf8("actionToggleSF"));
        actionToggleSF->setShortcutContext(Qt::ApplicationShortcut);
        actionApplyTransformation = new QAction(MainWindow);
        actionApplyTransformation->setObjectName(QString::fromUtf8("actionApplyTransformation"));
        actionSmoothMeshLaplacian = new QAction(MainWindow);
        actionSmoothMeshLaplacian->setObjectName(QString::fromUtf8("actionSmoothMeshLaplacian"));
        actionConvertNormalToHSV = new QAction(MainWindow);
        actionConvertNormalToHSV->setObjectName(QString::fromUtf8("actionConvertNormalToHSV"));
        actionSaveViewportAsObject = new QAction(MainWindow);
        actionSaveViewportAsObject->setObjectName(QString::fromUtf8("actionSaveViewportAsObject"));
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/CC/images/dbViewportSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveViewportAsObject->setIcon(icon43);
        actionSaveViewportAsObject->setShortcutContext(Qt::ApplicationShortcut);
        actionPickRotationCenter = new QAction(MainWindow);
        actionPickRotationCenter->setObjectName(QString::fromUtf8("actionPickRotationCenter"));
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/CC/images/ccPickCenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPickRotationCenter->setIcon(icon44);
        actionPickRotationCenter->setShortcutContext(Qt::ApplicationShortcut);
        actionComputeDistancesFromSensor = new QAction(MainWindow);
        actionComputeDistancesFromSensor->setObjectName(QString::fromUtf8("actionComputeDistancesFromSensor"));
        actionBilateralFilter = new QAction(MainWindow);
        actionBilateralFilter->setObjectName(QString::fromUtf8("actionBilateralFilter"));
        QIcon icon45;
        icon45.addFile(QString::fromUtf8(":/CC/images/ccBilateralFilter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBilateralFilter->setIcon(icon45);
        actionComputeScatteringAngles = new QAction(MainWindow);
        actionComputeScatteringAngles->setObjectName(QString::fromUtf8("actionComputeScatteringAngles"));
        actionToggleActiveSFColorScale = new QAction(MainWindow);
        actionToggleActiveSFColorScale->setObjectName(QString::fromUtf8("actionToggleActiveSFColorScale"));
        actionToggleActiveSFColorScale->setShortcutContext(Qt::ApplicationShortcut);
        actionShowActiveSFPrevious = new QAction(MainWindow);
        actionShowActiveSFPrevious->setObjectName(QString::fromUtf8("actionShowActiveSFPrevious"));
        actionShowActiveSFPrevious->setShortcutContext(Qt::ApplicationShortcut);
        actionShowActiveSFNext = new QAction(MainWindow);
        actionShowActiveSFNext->setObjectName(QString::fromUtf8("actionShowActiveSFNext"));
        actionPointPairsAlign = new QAction(MainWindow);
        actionPointPairsAlign->setObjectName(QString::fromUtf8("actionPointPairsAlign"));
        QIcon icon46;
        icon46.addFile(QString::fromUtf8(":/CC/images/ccAlign.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPointPairsAlign->setIcon(icon46);
        actionAddConstantSF = new QAction(MainWindow);
        actionAddConstantSF->setObjectName(QString::fromUtf8("actionAddConstantSF"));
        QIcon icon47;
        icon47.addFile(QString::fromUtf8(":/CC/images/ccAddConstSF.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddConstantSF->setIcon(icon47);
        actionExportCoordToSF = new QAction(MainWindow);
        actionExportCoordToSF->setObjectName(QString::fromUtf8("actionExportCoordToSF"));
        actionSubdivideMesh = new QAction(MainWindow);
        actionSubdivideMesh->setObjectName(QString::fromUtf8("actionSubdivideMesh"));
        actionToggleShowName = new QAction(MainWindow);
        actionToggleShowName->setObjectName(QString::fromUtf8("actionToggleShowName"));
        actionToggleShowName->setShortcutContext(Qt::ApplicationShortcut);
        actionPrimitiveFactory = new QAction(MainWindow);
        actionPrimitiveFactory->setObjectName(QString::fromUtf8("actionPrimitiveFactory"));
        QIcon icon48;
        icon48.addFile(QString::fromUtf8(":/CC/images/dbMiscGeomSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrimitiveFactory->setIcon(icon48);
        actionToggleMaterials = new QAction(MainWindow);
        actionToggleMaterials->setObjectName(QString::fromUtf8("actionToggleMaterials"));
        actionToggleMaterials->setShortcutContext(Qt::ApplicationShortcut);
        actionSetOrthoView = new QAction(MainWindow);
        actionSetOrthoView->setObjectName(QString::fromUtf8("actionSetOrthoView"));
        QIcon icon49;
        icon49.addFile(QString::fromUtf8(":/CC/images/ccOrthoMode32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetOrthoView->setIcon(icon49);
        actionSetCenteredPerspectiveView = new QAction(MainWindow);
        actionSetCenteredPerspectiveView->setObjectName(QString::fromUtf8("actionSetCenteredPerspectiveView"));
        actionSetCenteredPerspectiveView->setIcon(icon35);
        actionSetViewerPerspectiveView = new QAction(MainWindow);
        actionSetViewerPerspectiveView->setObjectName(QString::fromUtf8("actionSetViewerPerspectiveView"));
        actionSetViewerPerspectiveView->setIcon(icon36);
        actionSetPivotAlwaysOn = new QAction(MainWindow);
        actionSetPivotAlwaysOn->setObjectName(QString::fromUtf8("actionSetPivotAlwaysOn"));
        QIcon icon50;
        icon50.addFile(QString::fromUtf8(":/CC/images/ccPivotOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPivotAlwaysOn->setIcon(icon50);
        actionSetPivotRotationOnly = new QAction(MainWindow);
        actionSetPivotRotationOnly->setObjectName(QString::fromUtf8("actionSetPivotRotationOnly"));
        QIcon icon51;
        icon51.addFile(QString::fromUtf8(":/CC/images/ccPivotAuto.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPivotRotationOnly->setIcon(icon51);
        actionSetPivotOff = new QAction(MainWindow);
        actionSetPivotOff->setObjectName(QString::fromUtf8("actionSetPivotOff"));
        QIcon icon52;
        icon52.addFile(QString::fromUtf8(":/CC/images/ccPivotOff.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPivotOff->setIcon(icon52);
        actionSetViewIso1 = new QAction(MainWindow);
        actionSetViewIso1->setObjectName(QString::fromUtf8("actionSetViewIso1"));
        QIcon icon53;
        icon53.addFile(QString::fromUtf8(":/CC/images/ccViewIso1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewIso1->setIcon(icon53);
        actionSetViewIso1->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewIso2 = new QAction(MainWindow);
        actionSetViewIso2->setObjectName(QString::fromUtf8("actionSetViewIso2"));
        QIcon icon54;
        icon54.addFile(QString::fromUtf8(":/CC/images/ccViewIso2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewIso2->setIcon(icon54);
        actionSetViewIso2->setShortcutContext(Qt::ApplicationShortcut);
        actionConvertTextureToColor = new QAction(MainWindow);
        actionConvertTextureToColor->setObjectName(QString::fromUtf8("actionConvertTextureToColor"));
        actionConvertTextureToColor->setIcon(icon5);
        actionOpenColorScalesManager = new QAction(MainWindow);
        actionOpenColorScalesManager->setObjectName(QString::fromUtf8("actionOpenColorScalesManager"));
        QIcon icon55;
        icon55.addFile(QString::fromUtf8(":/CC/images/typeSF.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenColorScalesManager->setIcon(icon55);
        actionOpenColorScalesManager->setShortcutContext(Qt::ApplicationShortcut);
        actionCrossSection = new QAction(MainWindow);
        actionCrossSection->setObjectName(QString::fromUtf8("actionCrossSection"));
        QIcon icon56;
        icon56.addFile(QString::fromUtf8(":/CC/images/ccClippingBox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCrossSection->setIcon(icon56);
        actionEditGlobalShiftAndScale = new QAction(MainWindow);
        actionEditGlobalShiftAndScale->setObjectName(QString::fromUtf8("actionEditGlobalShiftAndScale"));
        actionScalarFieldFromColor = new QAction(MainWindow);
        actionScalarFieldFromColor->setObjectName(QString::fromUtf8("actionScalarFieldFromColor"));
        actionComputeKdTree = new QAction(MainWindow);
        actionComputeKdTree->setObjectName(QString::fromUtf8("actionComputeKdTree"));
        actionTest = new QAction(MainWindow);
        actionTest->setObjectName(QString::fromUtf8("actionTest"));
        actionAddIdField = new QAction(MainWindow);
        actionAddIdField->setObjectName(QString::fromUtf8("actionAddIdField"));
        actionFitFacet = new QAction(MainWindow);
        actionFitFacet->setObjectName(QString::fromUtf8("actionFitFacet"));
        actionAdjustZoom = new QAction(MainWindow);
        actionAdjustZoom->setObjectName(QString::fromUtf8("actionAdjustZoom"));
        actionSetSFAsCoord = new QAction(MainWindow);
        actionSetSFAsCoord->setObjectName(QString::fromUtf8("actionSetSFAsCoord"));
        actionCloseAll = new QAction(MainWindow);
        actionCloseAll->setObjectName(QString::fromUtf8("actionCloseAll"));
        actionEditGlobalScale = new QAction(MainWindow);
        actionEditGlobalScale->setObjectName(QString::fromUtf8("actionEditGlobalScale"));
        actionViewFromSensor = new QAction(MainWindow);
        actionViewFromSensor->setObjectName(QString::fromUtf8("actionViewFromSensor"));
        actionViewFromSensor->setIcon(icon43);
        actionFindBiggestInnerRectangle = new QAction(MainWindow);
        actionFindBiggestInnerRectangle->setObjectName(QString::fromUtf8("actionFindBiggestInnerRectangle"));
        actionCreateGBLSensor = new QAction(MainWindow);
        actionCreateGBLSensor->setObjectName(QString::fromUtf8("actionCreateGBLSensor"));
        actionCreateCameraSensor = new QAction(MainWindow);
        actionCreateCameraSensor->setObjectName(QString::fromUtf8("actionCreateCameraSensor"));
        actionCheckPointsInsideFrustum = new QAction(MainWindow);
        actionCheckPointsInsideFrustum->setObjectName(QString::fromUtf8("actionCheckPointsInsideFrustum"));
        actionProjectUncertainty = new QAction(MainWindow);
        actionProjectUncertainty->setObjectName(QString::fromUtf8("actionProjectUncertainty"));
        actionOrientNormalsMST = new QAction(MainWindow);
        actionOrientNormalsMST->setObjectName(QString::fromUtf8("actionOrientNormalsMST"));
        actionOrientNormalsFM = new QAction(MainWindow);
        actionOrientNormalsFM->setObjectName(QString::fromUtf8("actionOrientNormalsFM"));
        actionCNETest = new QAction(MainWindow);
        actionCNETest->setObjectName(QString::fromUtf8("actionCNETest"));
        actionApproximateDensity = new QAction(MainWindow);
        actionApproximateDensity->setObjectName(QString::fromUtf8("actionApproximateDensity"));
        actionComputeDensity = new QAction(MainWindow);
        actionComputeDensity->setObjectName(QString::fromUtf8("actionComputeDensity"));
        actionRemoveDuplicatePoints = new QAction(MainWindow);
        actionRemoveDuplicatePoints->setObjectName(QString::fromUtf8("actionRemoveDuplicatePoints"));
        actionCrop = new QAction(MainWindow);
        actionCrop->setObjectName(QString::fromUtf8("actionCrop"));
        actionConvertNormalToDipDir = new QAction(MainWindow);
        actionConvertNormalToDipDir->setObjectName(QString::fromUtf8("actionConvertNormalToDipDir"));
        actionExportCloudInfo = new QAction(MainWindow);
        actionExportCloudInfo->setObjectName(QString::fromUtf8("actionExportCloudInfo"));
        actionInterpolateColors = new QAction(MainWindow);
        actionInterpolateColors->setObjectName(QString::fromUtf8("actionInterpolateColors"));
        actionDistanceToBestFitQuadric3D = new QAction(MainWindow);
        actionDistanceToBestFitQuadric3D->setObjectName(QString::fromUtf8("actionDistanceToBestFitQuadric3D"));
        actionChangeColorLevels = new QAction(MainWindow);
        actionChangeColorLevels->setObjectName(QString::fromUtf8("actionChangeColorLevels"));
        actionResetGUIElementsPos = new QAction(MainWindow);
        actionResetGUIElementsPos->setObjectName(QString::fromUtf8("actionResetGUIElementsPos"));
        actionConvertToRandomRGB = new QAction(MainWindow);
        actionConvertToRandomRGB->setObjectName(QString::fromUtf8("actionConvertToRandomRGB"));
        actionNoiseFilter = new QAction(MainWindow);
        actionNoiseFilter->setObjectName(QString::fromUtf8("actionNoiseFilter"));
        actionComputeStatParams2 = new QAction(MainWindow);
        actionComputeStatParams2->setObjectName(QString::fromUtf8("actionComputeStatParams2"));
        actionComputeStatParams2->setIcon(icon21);
        actionMeasureMeshVolume = new QAction(MainWindow);
        actionMeasureMeshVolume->setObjectName(QString::fromUtf8("actionMeasureMeshVolume"));
        actionFlagMeshVertices = new QAction(MainWindow);
        actionFlagMeshVertices->setObjectName(QString::fromUtf8("actionFlagMeshVertices"));
        actionToggleActivation = new QAction(MainWindow);
        actionToggleActivation->setObjectName(QString::fromUtf8("actionToggleActivation"));
        actionToggleActivation->setShortcutContext(Qt::ApplicationShortcut);
        actionLockRotationAxis = new QAction(MainWindow);
        actionLockRotationAxis->setObjectName(QString::fromUtf8("actionLockRotationAxis"));
        actionLockRotationAxis->setCheckable(true);
        actionLockRotationAxis->setShortcutContext(Qt::ApplicationShortcut);
        actionCreateCloudFromEntCenters = new QAction(MainWindow);
        actionCreateCloudFromEntCenters->setObjectName(QString::fromUtf8("actionCreateCloudFromEntCenters"));
        actionComputeBestICPRmsMatrix = new QAction(MainWindow);
        actionComputeBestICPRmsMatrix->setObjectName(QString::fromUtf8("actionComputeBestICPRmsMatrix"));
        actionEnterBubbleViewMode = new QAction(MainWindow);
        actionEnterBubbleViewMode->setObjectName(QString::fromUtf8("actionEnterBubbleViewMode"));
        actionExtractSections = new QAction(MainWindow);
        actionExtractSections->setObjectName(QString::fromUtf8("actionExtractSections"));
        QIcon icon57;
        icon57.addFile(QString::fromUtf8(":/CC/images/dbPolylineSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExtractSections->setIcon(icon57);
        actionConvertPolylinesToMesh = new QAction(MainWindow);
        actionConvertPolylinesToMesh->setObjectName(QString::fromUtf8("actionConvertPolylinesToMesh"));
        actionLevel = new QAction(MainWindow);
        actionLevel->setObjectName(QString::fromUtf8("actionLevel"));
        QIcon icon58;
        icon58.addFile(QString::fromUtf8(":/CC/images/ccLevel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLevel->setIcon(icon58);
        actionFitSphere = new QAction(MainWindow);
        actionFitSphere->setObjectName(QString::fromUtf8("actionFitSphere"));
        actionMatchScales = new QAction(MainWindow);
        actionMatchScales->setObjectName(QString::fromUtf8("actionMatchScales"));
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        actionDistanceMap = new QAction(MainWindow);
        actionDistanceMap->setObjectName(QString::fromUtf8("actionDistanceMap"));
        actionSORFilter = new QAction(MainWindow);
        actionSORFilter->setObjectName(QString::fromUtf8("actionSORFilter"));
        QIcon icon59;
        icon59.addFile(QString::fromUtf8(":/CC/images/ccSORFilter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSORFilter->setIcon(icon59);
        actionEnableStereo = new QAction(MainWindow);
        actionEnableStereo->setObjectName(QString::fromUtf8("actionEnableStereo"));
        actionEnableStereo->setCheckable(true);
        QIcon icon60;
        icon60.addFile(QString::fromUtf8(":/CC/images/ccStereo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnableStereo->setIcon(icon60);
        actionEnableStereo->setShortcutContext(Qt::ApplicationShortcut);
        actionComputePointsVisibility = new QAction(MainWindow);
        actionComputePointsVisibility->setObjectName(QString::fromUtf8("actionComputePointsVisibility"));
        actionCompute2HalfDimVolume = new QAction(MainWindow);
        actionCompute2HalfDimVolume->setObjectName(QString::fromUtf8("actionCompute2HalfDimVolume"));
        actionExclusiveFullScreen = new QAction(MainWindow);
        actionExclusiveFullScreen->setObjectName(QString::fromUtf8("actionExclusiveFullScreen"));
        actionExclusiveFullScreen->setCheckable(true);
        actionExclusiveFullScreen->setIcon(icon3);
        actionExclusiveFullScreen->setShortcutContext(Qt::ApplicationShortcut);
        actionEnableVisualDebugTraces = new QAction(MainWindow);
        actionEnableVisualDebugTraces->setObjectName(QString::fromUtf8("actionEnableVisualDebugTraces"));
        actionRGBToGreyScale = new QAction(MainWindow);
        actionRGBToGreyScale->setObjectName(QString::fromUtf8("actionRGBToGreyScale"));
        actionTracePolyline = new QAction(MainWindow);
        actionTracePolyline->setObjectName(QString::fromUtf8("actionTracePolyline"));
        QIcon icon61;
        icon61.addFile(QString::fromUtf8(":/CC/images/ccTracePolyline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTracePolyline->setIcon(icon61);
        actionEnableQtWarnings = new QAction(MainWindow);
        actionEnableQtWarnings->setObjectName(QString::fromUtf8("actionEnableQtWarnings"));
        actionEnableQtWarnings->setCheckable(true);
        actionGlobalShiftSettings = new QAction(MainWindow);
        actionGlobalShiftSettings->setObjectName(QString::fromUtf8("actionGlobalShiftSettings"));
        actionEnableCameraLink = new QAction(MainWindow);
        actionEnableCameraLink->setObjectName(QString::fromUtf8("actionEnableCameraLink"));
        actionEnableCameraLink->setCheckable(true);
        actionShowWaveDialog = new QAction(MainWindow);
        actionShowWaveDialog->setObjectName(QString::fromUtf8("actionShowWaveDialog"));
        actionCreatePlane = new QAction(MainWindow);
        actionCreatePlane->setObjectName(QString::fromUtf8("actionCreatePlane"));
        actionEditPlane = new QAction(MainWindow);
        actionEditPlane->setObjectName(QString::fromUtf8("actionEditPlane"));
        actionCreateSurfaceBetweenTwoPolylines = new QAction(MainWindow);
        actionCreateSurfaceBetweenTwoPolylines->setObjectName(QString::fromUtf8("actionCreateSurfaceBetweenTwoPolylines"));
        actionMeshTwoPolylines = new QAction(MainWindow);
        actionMeshTwoPolylines->setObjectName(QString::fromUtf8("actionMeshTwoPolylines"));
        actionFitPlaneProxy = new QAction(MainWindow);
        actionFitPlaneProxy->setObjectName(QString::fromUtf8("actionFitPlaneProxy"));
        actionEnhanceRGBWithIntensities = new QAction(MainWindow);
        actionEnhanceRGBWithIntensities->setObjectName(QString::fromUtf8("actionEnhanceRGBWithIntensities"));
        actionMeshScanGrids = new QAction(MainWindow);
        actionMeshScanGrids->setObjectName(QString::fromUtf8("actionMeshScanGrids"));
        actionAutoPickRotationCenter = new QAction(MainWindow);
        actionAutoPickRotationCenter->setObjectName(QString::fromUtf8("actionAutoPickRotationCenter"));
        actionAutoPickRotationCenter->setCheckable(true);
        actionAutoPickRotationCenter->setChecked(true);
        QIcon icon62;
        icon62.addFile(QString::fromUtf8(":/CC/images/ccPickCenterAuto.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAutoPickRotationCenter->setIcon(icon62);
        actionAutoPickRotationCenter->setShortcutContext(Qt::ApplicationShortcut);
        actionShowCursor3DCoordinates = new QAction(MainWindow);
        actionShowCursor3DCoordinates->setObjectName(QString::fromUtf8("actionShowCursor3DCoordinates"));
        actionShowCursor3DCoordinates->setCheckable(true);
        actionDeleteScanGrid = new QAction(MainWindow);
        actionDeleteScanGrid->setObjectName(QString::fromUtf8("actionDeleteScanGrid"));
        actionCompressFWFData = new QAction(MainWindow);
        actionCompressFWFData->setObjectName(QString::fromUtf8("actionCompressFWFData"));
        actionInterpolateSFs = new QAction(MainWindow);
        actionInterpolateSFs->setObjectName(QString::fromUtf8("actionInterpolateSFs"));
        actionExportPlaneInfo = new QAction(MainWindow);
        actionExportPlaneInfo->setObjectName(QString::fromUtf8("actionExportPlaneInfo"));
        actionLock_rotation_about_arbitrary_axis = new QAction(MainWindow);
        actionLock_rotation_about_arbitrary_axis->setObjectName(QString::fromUtf8("actionLock_rotation_about_arbitrary_axis"));
        actionSamplePointsOnPolyline = new QAction(MainWindow);
        actionSamplePointsOnPolyline->setObjectName(QString::fromUtf8("actionSamplePointsOnPolyline"));
        actionNoTranslation = new QAction(MainWindow);
        actionNoTranslation->setObjectName(QString::fromUtf8("actionNoTranslation"));
        actionComputeGeometricFeature = new QAction(MainWindow);
        actionComputeGeometricFeature->setObjectName(QString::fromUtf8("actionComputeGeometricFeature"));
        actionBBMinCornerToOrigin = new QAction(MainWindow);
        actionBBMinCornerToOrigin->setObjectName(QString::fromUtf8("actionBBMinCornerToOrigin"));
        actionBBMaxCornerToOrigin = new QAction(MainWindow);
        actionBBMaxCornerToOrigin->setObjectName(QString::fromUtf8("actionBBMaxCornerToOrigin"));
        actionBBCenterToOrigin = new QAction(MainWindow);
        actionBBCenterToOrigin->setObjectName(QString::fromUtf8("actionBBCenterToOrigin"));
        actionComputeLocal = new QAction(MainWindow);
        actionComputeLocal->setObjectName(QString::fromUtf8("actionComputeLocal"));
        actionPOS = new QAction(MainWindow);
        actionPOS->setObjectName(QString::fromUtf8("actionPOS"));
        actionComputeMeasure = new QAction(MainWindow);
        actionComputeMeasure->setObjectName(QString::fromUtf8("actionComputeMeasure"));
        actionCloudSmoothing = new QAction(MainWindow);
        actionCloudSmoothing->setObjectName(QString::fromUtf8("actionCloudSmoothing"));
        actionCloudCheck = new QAction(MainWindow);
        actionCloudCheck->setObjectName(QString::fromUtf8("actionCloudCheck"));
        actionCloudClassify = new QAction(MainWindow);
        actionCloudClassify->setObjectName(QString::fromUtf8("actionCloudClassify"));
        actionCloudPickup = new QAction(MainWindow);
        actionCloudPickup->setObjectName(QString::fromUtf8("actionCloudPickup"));
        actionCloudData = new QAction(MainWindow);
        actionCloudData->setObjectName(QString::fromUtf8("actionCloudData"));
        actionDSM = new QAction(MainWindow);
        actionDSM->setObjectName(QString::fromUtf8("actionDSM"));
        actionDEM = new QAction(MainWindow);
        actionDEM->setObjectName(QString::fromUtf8("actionDEM"));
        actionDLG = new QAction(MainWindow);
        actionDLG->setObjectName(QString::fromUtf8("actionDLG"));
        actionDOM = new QAction(MainWindow);
        actionDOM->setObjectName(QString::fromUtf8("actionDOM"));
        actionDataPreprocessing = new QAction(MainWindow);
        actionDataPreprocessing->setObjectName(QString::fromUtf8("actionDataPreprocessing"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1163, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuDisplay = new QMenu(menubar);
        menuDisplay->setObjectName(QString::fromUtf8("menuDisplay"));
        menuToolbars = new QMenu(menuDisplay);
        menuToolbars->setObjectName(QString::fromUtf8("menuToolbars"));
        menuLights = new QMenu(menuDisplay);
        menuLights->setObjectName(QString::fromUtf8("menuLights"));
        QIcon icon63;
        icon63.addFile(QString::fromUtf8(":/CC/images/ccSunLight.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuLights->setIcon(icon63);
        menuActiveScalarField = new QMenu(menuDisplay);
        menuActiveScalarField->setObjectName(QString::fromUtf8("menuActiveScalarField"));
        menuLanguage = new QMenu(menuDisplay);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuScalarFields = new QMenu(menuEdit);
        menuScalarFields->setObjectName(QString::fromUtf8("menuScalarFields"));
        menuColors = new QMenu(menuEdit);
        menuColors->setObjectName(QString::fromUtf8("menuColors"));
        menuNormals = new QMenu(menuEdit);
        menuNormals->setObjectName(QString::fromUtf8("menuNormals"));
        menuOrientNormals = new QMenu(menuNormals);
        menuOrientNormals->setObjectName(QString::fromUtf8("menuOrientNormals"));
        menuConvert_to = new QMenu(menuNormals);
        menuConvert_to->setObjectName(QString::fromUtf8("menuConvert_to"));
        menuOctree = new QMenu(menuEdit);
        menuOctree->setObjectName(QString::fromUtf8("menuOctree"));
        menuMesh = new QMenu(menuEdit);
        menuMesh->setObjectName(QString::fromUtf8("menuMesh"));
        menuMeshScalarField = new QMenu(menuMesh);
        menuMeshScalarField->setObjectName(QString::fromUtf8("menuMeshScalarField"));
        menuSensors = new QMenu(menuEdit);
        menuSensors->setObjectName(QString::fromUtf8("menuSensors"));
        menuGroundBasedLidar = new QMenu(menuSensors);
        menuGroundBasedLidar->setObjectName(QString::fromUtf8("menuGroundBasedLidar"));
        QIcon icon64;
        icon64.addFile(QString::fromUtf8(":/CC/images/dbGBLSensorSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuGroundBasedLidar->setIcon(icon64);
        menuCameraSensor = new QMenu(menuSensors);
        menuCameraSensor->setObjectName(QString::fromUtf8("menuCameraSensor"));
        QIcon icon65;
        icon65.addFile(QString::fromUtf8(":/CC/images/dbCamSensorSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuCameraSensor->setIcon(icon65);
        menuToggle = new QMenu(menuEdit);
        menuToggle->setObjectName(QString::fromUtf8("menuToggle"));
        menuWaveform = new QMenu(menuEdit);
        menuWaveform->setObjectName(QString::fromUtf8("menuWaveform"));
        menuPlane = new QMenu(menuEdit);
        menuPlane->setObjectName(QString::fromUtf8("menuPlane"));
        menuGrid = new QMenu(menuEdit);
        menuGrid->setObjectName(QString::fromUtf8("menuGrid"));
        menuPolyline = new QMenu(menuEdit);
        menuPolyline->setObjectName(QString::fromUtf8("menuPolyline"));
        menu3DViews = new QMenu(menubar);
        menu3DViews->setObjectName(QString::fromUtf8("menu3DViews"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuSegmentation = new QMenu(menuTools);
        menuSegmentation->setObjectName(QString::fromUtf8("menuSegmentation"));
        menuProjection = new QMenu(menuTools);
        menuProjection->setObjectName(QString::fromUtf8("menuProjection"));
        menuStatistics = new QMenu(menuTools);
        menuStatistics->setObjectName(QString::fromUtf8("menuStatistics"));
        menuDistances = new QMenu(menuTools);
        menuDistances->setObjectName(QString::fromUtf8("menuDistances"));
        menuRegistration = new QMenu(menuTools);
        menuRegistration->setObjectName(QString::fromUtf8("menuRegistration"));
        menuOther = new QMenu(menuTools);
        menuOther->setObjectName(QString::fromUtf8("menuOther"));
        menuSandBox = new QMenu(menuTools);
        menuSandBox->setObjectName(QString::fromUtf8("menuSandBox"));
        menuFit = new QMenu(menuTools);
        menuFit->setObjectName(QString::fromUtf8("menuFit"));
        menuClean = new QMenu(menuTools);
        menuClean->setObjectName(QString::fromUtf8("menuClean"));
        menuVolume = new QMenu(menuTools);
        menuVolume->setObjectName(QString::fromUtf8("menuVolume"));
        menuBatchExport = new QMenu(menuTools);
        menuBatchExport->setObjectName(QString::fromUtf8("menuBatchExport"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menubar);
        Dockable = new QDockWidget(MainWindow);
        Dockable->setObjectName(QString::fromUtf8("Dockable"));
        Dockable->setMinimumSize(QSize(146, 175));
        Dockable->setFloating(false);
        Dockable->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        vboxLayout = new QVBoxLayout(dockWidgetContents);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        dbTreeView = new ccCustomQTreeView(dockWidgetContents);
        dbTreeView->setObjectName(QString::fromUtf8("dbTreeView"));
        dbTreeView->setStyleSheet(QString::fromUtf8("QTreeView::branch:has-siblings:!adjoins-item {\n"
"    border-image: url(:/CC/images/QTreeView/vline.png) 0;\n"
"}\n"
"\n"
"QTreeView::branch:has-siblings:adjoins-item {\n"
"    border-image: url(:/CC/images/QTreeView/branch-more.png) 0;\n"
"}\n"
"\n"
"QTreeView::branch:!has-children:!has-siblings:adjoins-item {\n"
"    border-image: url(:/CC/images/QTreeView/branch-end.png) 0;\n"
"}\n"
"\n"
"QTreeView::branch:has-children:!has-siblings:closed,\n"
"QTreeView::branch:closed:has-children:has-siblings {\n"
"        border-image: none;\n"
"        image: url(:/CC/images/QTreeView/branch-closed.png);\n"
"}\n"
"\n"
"QTreeView::branch:open:has-children:!has-siblings,\n"
"QTreeView::branch:open:has-children:has-siblings  {\n"
"        border-image: none;\n"
"        image: url(:/CC/images/QTreeView/branch-open.png);\n"
"}"));
        dbTreeView->setDragEnabled(true);
        dbTreeView->setDragDropMode(QAbstractItemView::InternalMove);
        dbTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        dbTreeView->setUniformRowHeights(true);

        vboxLayout->addWidget(dbTreeView);

        Dockable->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, Dockable);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBarView = new QToolBar(MainWindow);
        toolBarView->setObjectName(QString::fromUtf8("toolBarView"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBarView);
        DockableConsole = new QDockWidget(MainWindow);
        DockableConsole->setObjectName(QString::fromUtf8("DockableConsole"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DockableConsole->sizePolicy().hasHeightForWidth());
        DockableConsole->setSizePolicy(sizePolicy1);
        DockableConsole->setMinimumSize(QSize(95, 128));
        DockableConsole->setMaximumSize(QSize(524287, 524287));
        DockableConsole->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);
        DockableConsole->setAllowedAreas(Qt::BottomDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        vboxLayout1 = new QVBoxLayout(dockWidgetContents_2);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        consoleWidget = new ccCustomQListWidget(dockWidgetContents_2);
        consoleWidget->setObjectName(QString::fromUtf8("consoleWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(consoleWidget->sizePolicy().hasHeightForWidth());
        consoleWidget->setSizePolicy(sizePolicy2);
        consoleWidget->setMinimumSize(QSize(0, 80));
        consoleWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        consoleWidget->setProperty("showDropIndicator", QVariant(false));
        consoleWidget->setAlternatingRowColors(true);
        consoleWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);

        vboxLayout1->addWidget(consoleWidget);

        DockableConsole->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(Qt::BottomDockWidgetArea, DockableConsole);
        toolBarMainTools = new QToolBar(MainWindow);
        toolBarMainTools->setObjectName(QString::fromUtf8("toolBarMainTools"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBarMainTools);
        toolBarSFTools = new QToolBar(MainWindow);
        toolBarSFTools->setObjectName(QString::fromUtf8("toolBarSFTools"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBarSFTools);
        Dockable_2 = new QDockWidget(MainWindow);
        Dockable_2->setObjectName(QString::fromUtf8("Dockable_2"));
        Dockable_2->setMinimumSize(QSize(109, 135));
        Dockable_2->setFloating(false);
        Dockable_2->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        vboxLayout2 = new QVBoxLayout(dockWidgetContents_4);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        propertiesTreeView = new QTreeView(dockWidgetContents_4);
        propertiesTreeView->setObjectName(QString::fromUtf8("propertiesTreeView"));
        propertiesTreeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        propertiesTreeView->setProperty("showDropIndicator", QVariant(false));
        propertiesTreeView->setAlternatingRowColors(true);
        propertiesTreeView->setSelectionMode(QAbstractItemView::NoSelection);
        propertiesTreeView->setRootIsDecorated(false);
        propertiesTreeView->setItemsExpandable(false);
        propertiesTreeView->setAllColumnsShowFocus(true);
        propertiesTreeView->setExpandsOnDoubleClick(false);
        propertiesTreeView->header()->setDefaultSectionSize(200);

        vboxLayout2->addWidget(propertiesTreeView);

        Dockable_2->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, Dockable_2);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuDisplay->menuAction());
        menubar->addAction(menu3DViews->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionGlobalShiftSettings);
        menuFile->addSeparator();
        menuFile->addAction(actionPrimitiveFactory);
        menuFile->addSeparator();
        menuFile->addAction(actionCloseAll);
        menuFile->addAction(actionQuit);
        menuFile->addSeparator();
        menuDisplay->addAction(actionFullScreen);
        menuDisplay->addAction(actionExclusiveFullScreen);
        menuDisplay->addAction(actionRefresh);
        menuDisplay->addAction(actionToggleCenteredPerspective);
        menuDisplay->addAction(actionToggleViewerBasedPerspective);
        menuDisplay->addAction(actionShowCursor3DCoordinates);
        menuDisplay->addAction(actionLockRotationAxis);
        menuDisplay->addAction(actionEnterBubbleViewMode);
        menuDisplay->addAction(actionEnableCameraLink);
        menuDisplay->addSeparator();
        menuDisplay->addAction(actionRenderToFile);
        menuDisplay->addAction(actionDisplayOptions);
        menuDisplay->addAction(actionEditCamera);
        menuDisplay->addAction(actionSaveViewportAsObject);
        menuDisplay->addAction(actionAdjustZoom);
        menuDisplay->addAction(actionTestFrameRate);
        menuDisplay->addSeparator();
        menuDisplay->addAction(menuLights->menuAction());
        menuDisplay->addAction(menuActiveScalarField->menuAction());
        menuDisplay->addAction(menuToolbars->menuAction());
        menuDisplay->addAction(menuLanguage->menuAction());
        menuDisplay->addSeparator();
        menuDisplay->addAction(actionConsole);
        menuDisplay->addAction(actionResetGUIElementsPos);
        menuToolbars->addAction(actionDisplayMainTools);
        menuToolbars->addAction(actionDisplayScalarFieldsTools);
        menuToolbars->addAction(actionDisplayViewTools);
        menuLights->addAction(actionToggleSunLight);
        menuLights->addAction(actionToggleCustomLight);
        menuActiveScalarField->addAction(actionToggleActiveSFColorScale);
        menuActiveScalarField->addAction(actionShowActiveSFPrevious);
        menuActiveScalarField->addAction(actionShowActiveSFNext);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutPlugins);
        menuHelp->addSeparator();
        menuHelp->addAction(actionEnableQtWarnings);
        menuEdit->addAction(menuColors->menuAction());
        menuEdit->addAction(menuNormals->menuAction());
        menuEdit->addAction(menuOctree->menuAction());
        menuEdit->addAction(menuGrid->menuAction());
        menuEdit->addAction(menuMesh->menuAction());
        menuEdit->addAction(menuPolyline->menuAction());
        menuEdit->addAction(menuPlane->menuAction());
        menuEdit->addAction(menuSensors->menuAction());
        menuEdit->addAction(menuScalarFields->menuAction());
        menuEdit->addAction(menuWaveform->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionClone);
        menuEdit->addAction(actionMerge);
        menuEdit->addAction(actionSubsample);
        menuEdit->addAction(actionApplyTransformation);
        menuEdit->addAction(actionApplyScale);
        menuEdit->addSeparator();
        menuEdit->addAction(actionTranslateRotate);
        menuEdit->addAction(actionSegment);
        menuEdit->addAction(actionCrop);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditGlobalShiftAndScale);
        menuEdit->addSeparator();
        menuEdit->addAction(menuToggle->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionDelete);
        menuScalarFields->addAction(actionShowHistogram);
        menuScalarFields->addAction(actionComputeStatParams);
        menuScalarFields->addSeparator();
        menuScalarFields->addAction(actionSFGradient);
        menuScalarFields->addAction(actionGaussianFilter);
        menuScalarFields->addAction(actionBilateralFilter);
        menuScalarFields->addAction(actionFilterByValue);
        menuScalarFields->addAction(actionConvertToRGB);
        menuScalarFields->addAction(actionConvertToRandomRGB);
        menuScalarFields->addAction(actionRenameSF);
        menuScalarFields->addSeparator();
        menuScalarFields->addAction(actionAddConstantSF);
        menuScalarFields->addAction(actionAddIdField);
        menuScalarFields->addAction(actionExportCoordToSF);
        menuScalarFields->addAction(actionSetSFAsCoord);
        menuScalarFields->addAction(actionInterpolateSFs);
        menuScalarFields->addAction(actionScalarFieldArithmetic);
        menuScalarFields->addSeparator();
        menuScalarFields->addAction(actionOpenColorScalesManager);
        menuScalarFields->addSeparator();
        menuScalarFields->addAction(actionDeleteScalarField);
        menuScalarFields->addAction(actionDeleteAllSF);
        menuScalarFields->addSeparator();
        menuColors->addAction(actionSetUniqueColor);
        menuColors->addAction(actionColorize);
        menuColors->addAction(actionChangeColorLevels);
        menuColors->addAction(actionSetColorGradient);
        menuColors->addAction(actionRGBToGreyScale);
        menuColors->addAction(actionScalarFieldFromColor);
        menuColors->addAction(actionInterpolateColors);
        menuColors->addAction(actionEnhanceRGBWithIntensities);
        menuColors->addSeparator();
        menuColors->addAction(actionClearColor);
        menuNormals->addAction(actionComputeNormals);
        menuNormals->addAction(actionInvertNormals);
        menuNormals->addAction(menuOrientNormals->menuAction());
        menuNormals->addAction(menuConvert_to->menuAction());
        menuNormals->addSeparator();
        menuNormals->addAction(actionClearNormals);
        menuOrientNormals->addAction(actionOrientNormalsMST);
        menuOrientNormals->addAction(actionOrientNormalsFM);
        menuConvert_to->addAction(actionConvertNormalToHSV);
        menuConvert_to->addAction(actionConvertNormalToDipDir);
        menuOctree->addAction(actionComputeOctree);
        menuOctree->addSeparator();
        menuOctree->addAction(actionResampleWithOctree);
        menuMesh->addAction(actionComputeMeshAA);
        menuMesh->addAction(actionComputeMeshLS);
        menuMesh->addAction(actionMeshTwoPolylines);
        menuMesh->addAction(actionMeshScanGrids);
        menuMesh->addSeparator();
        menuMesh->addAction(actionConvertTextureToColor);
        menuMesh->addAction(actionSamplePointsOnMesh);
        menuMesh->addAction(actionSmoothMeshLaplacian);
        menuMesh->addAction(actionSubdivideMesh);
        menuMesh->addSeparator();
        menuMesh->addAction(actionMeasureMeshSurface);
        menuMesh->addAction(actionMeasureMeshVolume);
        menuMesh->addAction(actionFlagMeshVertices);
        menuMesh->addSeparator();
        menuMesh->addAction(menuMeshScalarField->menuAction());
        menuMeshScalarField->addAction(actionSmoothMeshSF);
        menuMeshScalarField->addAction(actionEnhanceMeshSF);
        menuSensors->addAction(actionModifySensor);
        menuSensors->addSeparator();
        menuSensors->addAction(menuGroundBasedLidar->menuAction());
        menuSensors->addAction(menuCameraSensor->menuAction());
        menuSensors->addSeparator();
        menuSensors->addAction(actionViewFromSensor);
        menuSensors->addAction(actionComputeDistancesFromSensor);
        menuSensors->addAction(actionComputeScatteringAngles);
        menuGroundBasedLidar->addAction(actionCreateGBLSensor);
        menuGroundBasedLidar->addSeparator();
        menuGroundBasedLidar->addAction(actionShowDepthBuffer);
        menuGroundBasedLidar->addAction(actionExportDepthBuffer);
        menuGroundBasedLidar->addAction(actionComputePointsVisibility);
        menuCameraSensor->addAction(actionCreateCameraSensor);
        menuCameraSensor->addSeparator();
        menuCameraSensor->addAction(actionProjectUncertainty);
        menuCameraSensor->addAction(actionCheckPointsInsideFrustum);
        menuToggle->addAction(actionToggleActivation);
        menuToggle->addAction(actionToggleVisibility);
        menuToggle->addAction(actionToggleColors);
        menuToggle->addAction(actionToggleNormals);
        menuToggle->addAction(actionToggleSF);
        menuToggle->addAction(actionToggleMaterials);
        menuToggle->addAction(actionToggleShowName);
        menuWaveform->addAction(actionShowWaveDialog);
        menuWaveform->addAction(actionCompressFWFData);
        menuPlane->addAction(actionCreatePlane);
        menuPlane->addAction(actionFitPlaneProxy);
        menuPlane->addAction(actionEditPlane);
        menuGrid->addAction(actionDeleteScanGrid);
        menuGrid->addAction(actionMeshScanGrids);
        menuPolyline->addAction(actionSamplePointsOnPolyline);
        menu3DViews->addAction(actionNew3DView);
        menu3DViews->addSeparator();
        menu3DViews->addAction(actionZoomIn);
        menu3DViews->addAction(actionZoomOut);
        menu3DViews->addSeparator();
        menu3DViews->addAction(actionClose3DView);
        menu3DViews->addAction(actionCloseAll3DViews);
        menu3DViews->addSeparator();
        menu3DViews->addAction(actionTile3DViews);
        menu3DViews->addAction(actionCascade3DViews);
        menu3DViews->addSeparator();
        menu3DViews->addAction(actionNext3DView);
        menu3DViews->addAction(actionPrevious3DView);
        menuTools->addAction(menuClean->menuAction());
        menuTools->addAction(menuProjection->menuAction());
        menuTools->addAction(menuRegistration->menuAction());
        menuTools->addAction(menuDistances->menuAction());
        menuTools->addAction(menuVolume->menuAction());
        menuTools->addAction(menuStatistics->menuAction());
        menuTools->addAction(menuSegmentation->menuAction());
        menuTools->addAction(menuFit->menuAction());
        menuTools->addAction(menuBatchExport->menuAction());
        menuTools->addAction(menuOther->menuAction());
        menuTools->addSeparator();
        menuTools->addAction(actionLevel);
        menuTools->addAction(actionPointPicking);
        menuTools->addAction(actionPointListPicking);
        menuTools->addAction(actionTracePolyline);
        menuTools->addSeparator();
        menuTools->addAction(menuSandBox->menuAction());
        menuTools->addSeparator();
        menuSegmentation->addAction(actionLabelConnectedComponents);
        menuSegmentation->addAction(actionCrossSection);
        menuSegmentation->addAction(actionExtractSections);
        menuSegmentation->addSeparator();
        menuSegmentation->addAction(actionKMeans);
        menuSegmentation->addAction(actionFrontPropagation);
        menuProjection->addAction(actionUnroll);
        menuProjection->addAction(actionRasterize);
        menuProjection->addAction(actionConvertPolylinesToMesh);
        menuProjection->addAction(actionExportCoordToSF);
        menuProjection->addAction(actionCreateSurfaceBetweenTwoPolylines);
        menuStatistics->addAction(actionStatisticalTest);
        menuStatistics->addAction(actionComputeStatParams2);
        menuDistances->addAction(actionCloudCloudDist);
        menuDistances->addAction(actionCloudMeshDist);
        menuDistances->addAction(actionCPS);
        menuRegistration->addAction(actionMatchBBCenters);
        menuRegistration->addAction(actionMatchScales);
        menuRegistration->addAction(actionPointPairsAlign);
        menuRegistration->addAction(actionRegister);
        menuRegistration->addSeparator();
        menuRegistration->addAction(actionBBCenterToOrigin);
        menuRegistration->addAction(actionBBMinCornerToOrigin);
        menuRegistration->addAction(actionBBMaxCornerToOrigin);
        menuOther->addAction(actionComputeGeometricFeature);
        menuOther->addAction(actionRemoveDuplicatePoints);
        menuSandBox->addAction(actionComputeKdTree);
        menuSandBox->addSeparator();
        menuSandBox->addAction(actionComputeBestFitBB);
        menuSandBox->addAction(actionDistanceToBestFitQuadric3D);
        menuSandBox->addAction(actionDistanceMap);
        menuSandBox->addSeparator();
        menuSandBox->addAction(actionAlign);
        menuSandBox->addSeparator();
        menuSandBox->addAction(actionSNETest);
        menuSandBox->addAction(actionCNETest);
        menuSandBox->addSeparator();
        menuSandBox->addAction(actionFindBiggestInnerRectangle);
        menuSandBox->addSeparator();
        menuSandBox->addAction(actionCreateCloudFromEntCenters);
        menuSandBox->addSeparator();
        menuSandBox->addAction(actionComputeBestICPRmsMatrix);
        menuSandBox->addSeparator();
        menuSandBox->addAction(actionEnableVisualDebugTraces);
        menuFit->addAction(actionFitPlane);
        menuFit->addAction(actionFitSphere);
        menuFit->addAction(actionFitFacet);
        menuFit->addAction(actionFitQuadric);
        menuClean->addAction(actionSORFilter);
        menuClean->addAction(actionNoiseFilter);
        menuVolume->addAction(actionCompute2HalfDimVolume);
        menuBatchExport->addAction(actionExportCloudInfo);
        menuBatchExport->addAction(actionExportPlaneInfo);
        menu->addAction(actionDataPreprocessing);
        menu->addAction(actionComputeLocal);
        menu->addAction(actionPOS);
        menu->addAction(actionComputeMeasure);
        menu_2->addAction(actionCloudSmoothing);
        menu_2->addAction(actionCloudCheck);
        menu_2->addAction(actionCloudClassify);
        menu_2->addAction(actionCloudPickup);
        menu_3->addAction(actionCloudData);
        menu_3->addAction(actionDSM);
        menu_3->addAction(actionDEM);
        menu_3->addAction(actionDLG);
        menu_3->addAction(actionDOM);
        toolBarView->addAction(actionDisplayOptions);
        toolBarView->addAction(actionEditCamera);
        toolBarView->addAction(actionGlobalZoom);
        toolBarView->addAction(actionPickRotationCenter);
        toolBarView->addAction(actionAutoPickRotationCenter);
        toolBarView->addAction(actionLevel);
        toolBarView->addAction(actionZoomAndCenter);
        toolBarView->addAction(actionSetViewTop);
        toolBarView->addAction(actionSetViewFront);
        toolBarView->addAction(actionSetViewLeft);
        toolBarView->addAction(actionSetViewBack);
        toolBarView->addAction(actionSetViewRight);
        toolBarView->addAction(actionSetViewBottom);
        toolBarView->addAction(actionSetViewIso1);
        toolBarView->addAction(actionSetViewIso2);
        toolBarView->addAction(actionEnableStereo);
        toolBarMainTools->addAction(actionOpen);
        toolBarMainTools->addAction(actionSave);
        toolBarMainTools->addSeparator();
        toolBarMainTools->addAction(actionPointPicking);
        toolBarMainTools->addAction(actionPointListPicking);
        toolBarMainTools->addAction(actionTracePolyline);
        toolBarMainTools->addAction(actionClone);
        toolBarMainTools->addAction(actionMerge);
        toolBarMainTools->addAction(actionDelete);
        toolBarMainTools->addSeparator();
        toolBarMainTools->addAction(actionPointPairsAlign);
        toolBarMainTools->addAction(actionRegister);
        toolBarMainTools->addAction(actionSubsample);
        toolBarMainTools->addAction(actionSamplePointsOnMesh);
        toolBarMainTools->addAction(actionCloudCloudDist);
        toolBarMainTools->addAction(actionCloudMeshDist);
        toolBarMainTools->addAction(actionLabelConnectedComponents);
        toolBarMainTools->addAction(actionPrimitiveFactory);
        toolBarMainTools->addAction(actionRasterize);
        toolBarMainTools->addAction(actionSORFilter);
        toolBarMainTools->addSeparator();
        toolBarMainTools->addAction(actionSegment);
        toolBarMainTools->addAction(actionTranslateRotate);
        toolBarMainTools->addAction(actionCrossSection);
        toolBarMainTools->addAction(actionExtractSections);
        toolBarSFTools->addAction(actionShowHistogram);
        toolBarSFTools->addAction(actionComputeStatParams);
        toolBarSFTools->addAction(actionFilterByValue);
        toolBarSFTools->addAction(actionDeleteScalarField);
        toolBarSFTools->addAction(actionAddConstantSF);
        toolBarSFTools->addAction(actionScalarFieldArithmetic);
        toolBarSFTools->addAction(actionOpenColorScalesManager);

        retranslateUi(MainWindow);
        QObject::connect(actionConsole, SIGNAL(triggered(bool)), DockableConsole, SLOT(setVisible(bool)));
        QObject::connect(DockableConsole, SIGNAL(visibilityChanged(bool)), actionConsole, SLOT(setChecked(bool)));
        QObject::connect(actionDisplayMainTools, SIGNAL(toggled(bool)), toolBarMainTools, SLOT(setVisible(bool)));
        QObject::connect(actionDisplayScalarFieldsTools, SIGNAL(toggled(bool)), toolBarSFTools, SLOT(setVisible(bool)));
        QObject::connect(actionDisplayViewTools, SIGNAL(toggled(bool)), toolBarView, SLOT(setVisible(bool)));
        QObject::connect(actionFitPlaneProxy, SIGNAL(triggered()), actionFitPlane, SLOT(trigger()));
        QObject::connect(actionCreateSurfaceBetweenTwoPolylines, SIGNAL(triggered()), actionMeshTwoPolylines, SLOT(trigger()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CloudCompare", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "&\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(statustip)
        actionOpen->setStatusTip(QCoreApplication::translate("MainWindow", "Open", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "&\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(statustip)
        actionSave->setStatusTip(QCoreApplication::translate("MainWindow", "Save current entity", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(statustip)
        actionQuit->setStatusTip(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#endif // QT_CONFIG(statustip)
        actionFullScreen->setText(QCoreApplication::translate("MainWindow", "&\345\205\250\345\261\217", nullptr));
#if QT_CONFIG(tooltip)
        actionFullScreen->setToolTip(QCoreApplication::translate("MainWindow", "Switch to full screen", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionFullScreen->setStatusTip(QCoreApplication::translate("MainWindow", "Switch to full screen", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionFullScreen->setShortcut(QCoreApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDisplayOptions->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\256\276\347\275\256", nullptr));
        actionHelp->setText(QCoreApplication::translate("MainWindow", "&\345\270\256\345\212\251", nullptr));
#if QT_CONFIG(statustip)
        actionHelp->setStatusTip(QCoreApplication::translate("MainWindow", "Help", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionHelp->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&\345\205\263\344\272\216 ...", nullptr));
#if QT_CONFIG(statustip)
        actionAbout->setStatusTip(QCoreApplication::translate("MainWindow", "About", nullptr));
#endif // QT_CONFIG(statustip)
        actionSetUniqueColor->setText(QCoreApplication::translate("MainWindow", "\345\215\225\350\211\262\350\256\276\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        actionSetUniqueColor->setToolTip(QCoreApplication::translate("MainWindow", "Set a unique color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetUniqueColor->setStatusTip(QCoreApplication::translate("MainWindow", "Set a unique color", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSetUniqueColor->setShortcut(QCoreApplication::translate("MainWindow", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetColorGradient->setText(QCoreApplication::translate("MainWindow", "\351\242\234\350\211\262\346\270\220\345\217\230", nullptr));
#if QT_CONFIG(tooltip)
        actionSetColorGradient->setToolTip(QCoreApplication::translate("MainWindow", "Apply a color ramp along X, Y or Z", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetColorGradient->setStatusTip(QCoreApplication::translate("MainWindow", "Apply a color ramp along X, Y or Z", nullptr));
#endif // QT_CONFIG(statustip)
        actionComputeNormals->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\345\220\221\351\207\217", nullptr));
#if QT_CONFIG(tooltip)
        actionComputeNormals->setToolTip(QCoreApplication::translate("MainWindow", "Compute unsigned normals (least squares approx.)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionComputeNormals->setStatusTip(QCoreApplication::translate("MainWindow", "Compute unsigned normals (least squares approx.)", nullptr));
#endif // QT_CONFIG(statustip)
        actionInvertNormals->setText(QCoreApplication::translate("MainWindow", "\345\217\215\350\275\254", nullptr));
#if QT_CONFIG(tooltip)
        actionInvertNormals->setToolTip(QCoreApplication::translate("MainWindow", "Invert normals", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionInvertNormals->setStatusTip(QCoreApplication::translate("MainWindow", "Invert normals", nullptr));
#endif // QT_CONFIG(statustip)
        actionComputeOctree->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\345\205\253\345\217\211\346\240\221", nullptr));
#if QT_CONFIG(tooltip)
        actionComputeOctree->setToolTip(QCoreApplication::translate("MainWindow", "Compute octree", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionComputeOctree->setStatusTip(QCoreApplication::translate("MainWindow", "Compute octree", nullptr));
#endif // QT_CONFIG(statustip)
        actionConsole->setText(QCoreApplication::translate("MainWindow", "\346\216\247\345\210\266\345\217\260", nullptr));
#if QT_CONFIG(shortcut)
        actionConsole->setShortcut(QCoreApplication::translate("MainWindow", "F8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose3DView->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\2553D\350\247\206\345\233\276", nullptr));
#if QT_CONFIG(shortcut)
        actionClose3DView->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCloseAll3DViews->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\2113D\350\247\206\345\233\276", nullptr));
        actionTile3DViews->setText(QCoreApplication::translate("MainWindow", "\345\205\261\344\272\253\346\230\276\347\244\272\347\251\272\351\227\264", nullptr));
        actionCascade3DViews->setText(QCoreApplication::translate("MainWindow", "&\351\207\215\346\216\222\345\210\2273D\350\247\206\345\233\276", nullptr));
        actionPrevious3DView->setText(QCoreApplication::translate("MainWindow", "\346\277\200\346\264\273\344\270\212\344\270\200\344\270\252\350\247\206\345\233\276", nullptr));
#if QT_CONFIG(tooltip)
        actionPrevious3DView->setToolTip(QCoreApplication::translate("MainWindow", "\346\277\200\346\264\273\344\270\212\344\270\200\344\270\252\350\247\206\345\233\276", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNext3DView->setText(QCoreApplication::translate("MainWindow", "\346\277\200\346\264\273\344\270\213\344\270\200\344\270\252\350\247\206\345\233\276", nullptr));
        actionNew3DView->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\2723D\350\247\206\345\233\276", nullptr));
#if QT_CONFIG(shortcut)
        actionNew3DView->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClone->setText(QCoreApplication::translate("MainWindow", "\345\205\213\351\232\206\347\202\271\344\272\221", nullptr));
#if QT_CONFIG(tooltip)
        actionClone->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\213\351\232\206\347\202\271\344\272\221", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMerge->setText(QCoreApplication::translate("MainWindow", "\345\220\210\345\271\266", nullptr));
#if QT_CONFIG(tooltip)
        actionMerge->setToolTip(QCoreApplication::translate("MainWindow", "\345\220\210\345\271\266\345\244\232\344\270\252\347\202\271\344\272\221", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRegister->setText(QCoreApplication::translate("MainWindow", "ICP\351\205\215\345\207\206\346\226\271\346\263\225", nullptr));
#if QT_CONFIG(tooltip)
        actionRegister->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\276\347\273\206\351\205\215\345\207\206\344\273\245\345\257\271\345\207\206\347\202\271\344\272\221", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionRegister->setStatusTip(QCoreApplication::translate("MainWindow", "Finely registers already (roughly) aligned entities (clouds or meshes)", nullptr));
#endif // QT_CONFIG(statustip)
        actionCloudCloudDist->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\344\270\244\344\270\252\347\202\271\344\272\221\344\271\213\351\227\264\347\232\204\350\267\235\347\246\273", nullptr));
#if QT_CONFIG(tooltip)
        actionCloudCloudDist->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\347\202\271\344\272\221\351\227\264\350\267\235\347\246\273", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionCloudCloudDist->setStatusTip(QCoreApplication::translate("MainWindow", "Compute cloud/cloud distance", nullptr));
#endif // QT_CONFIG(statustip)
        actionCloudMeshDist->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\347\202\271\344\272\221\345\210\260\347\275\221\346\240\274\344\271\213\351\227\264\347\232\204\350\267\235\347\246\273", nullptr));
#if QT_CONFIG(tooltip)
        actionCloudMeshDist->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\347\202\271\344\272\221\345\210\260\347\275\221\346\240\274\344\271\213\351\227\264\347\232\204\350\267\235\347\246\273", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionCloudMeshDist->setStatusTip(QCoreApplication::translate("MainWindow", "Compute cloud/mesh distance", nullptr));
#endif // QT_CONFIG(statustip)
        actionStatisticalTest->setText(QCoreApplication::translate("MainWindow", "\345\261\200\351\203\250\347\273\237\350\256\241", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticalTest->setToolTip(QCoreApplication::translate("MainWindow", "Apply a local statistical test to separate noise from true differences", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionStatisticalTest->setStatusTip(QCoreApplication::translate("MainWindow", "Apply a local statistical test to separate noise from true differences", nullptr));
#endif // QT_CONFIG(statustip)
        actionSamplePointsOnMesh->setText(QCoreApplication::translate("MainWindow", "\351\232\217\346\234\272\347\202\271\345\217\226\346\240\267", nullptr));
#if QT_CONFIG(tooltip)
        actionSamplePointsOnMesh->setToolTip(QCoreApplication::translate("MainWindow", "\347\275\221\346\240\274\344\270\212\347\232\204\351\207\207\346\240\267\347\202\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSamplePointsOnMesh->setStatusTip(QCoreApplication::translate("MainWindow", "Sample points on a mesh", nullptr));
#endif // QT_CONFIG(statustip)
        actionLabelConnectedComponents->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
#if QT_CONFIG(tooltip)
        actionLabelConnectedComponents->setToolTip(QCoreApplication::translate("MainWindow", "\346\240\207\350\256\260\350\277\236\346\216\245\347\232\204\347\273\204\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionLabelConnectedComponents->setStatusTip(QCoreApplication::translate("MainWindow", "Label connected components", nullptr));
#endif // QT_CONFIG(statustip)
        actionSegment->setText(QCoreApplication::translate("MainWindow", "\344\272\214\347\273\264\345\210\206\345\211\262", nullptr));
        actionTranslateRotate->setText(QCoreApplication::translate("MainWindow", "\345\271\263\347\247\273\346\227\213\350\275\254\345\217\230\346\215\242", nullptr));
        actionShowHistogram->setText(QCoreApplication::translate("MainWindow", "\346\237\261\345\275\242\345\233\276", nullptr));
        actionComputeStatParams->setText(QCoreApplication::translate("MainWindow", "\347\273\237\350\256\241\345\210\206\345\270\203", nullptr));
#if QT_CONFIG(tooltip)
        actionComputeStatParams->setToolTip(QCoreApplication::translate("MainWindow", "\345\234\250\346\264\273\345\212\250\346\240\207\351\207\217\345\234\272\344\270\212\346\213\237\345\220\210\346\225\260\347\220\206\347\273\237\350\256\241\346\250\241\345\236\213", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionComputeStatParams->setStatusTip(QCoreApplication::translate("MainWindow", "Fits a statistical model on the active scalar field", nullptr));
#endif // QT_CONFIG(statustip)
        actionFilterByValue->setText(QCoreApplication::translate("MainWindow", "\351\200\211\345\200\274\346\273\244\346\263\242", nullptr));
#if QT_CONFIG(tooltip)
        actionFilterByValue->setToolTip(QCoreApplication::translate("MainWindow", "\347\224\250\346\240\207\351\207\217\345\200\274\347\255\233\351\200\211\351\200\211\345\256\232\347\232\204\347\202\271\344\272\221", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionFilterByValue->setStatusTip(QCoreApplication::translate("MainWindow", "Filter points by value", nullptr));
#endif // QT_CONFIG(statustip)
        actionGaussianFilter->setText(QCoreApplication::translate("MainWindow", "\351\253\230\346\226\257\346\273\244\346\263\242", nullptr));
#if QT_CONFIG(tooltip)
        actionGaussianFilter->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\351\253\230\346\226\257\346\273\244\346\263\242", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionGaussianFilter->setStatusTip(QCoreApplication::translate("MainWindow", "Compute gaussian filter", nullptr));
#endif // QT_CONFIG(statustip)
        actionDeleteScalarField->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        actionDeleteScalarField->setIconText(QCoreApplication::translate("MainWindow", "Delete Scalar Field", nullptr));
#if QT_CONFIG(tooltip)
        actionDeleteScalarField->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\347\232\204\346\240\207\351\207\217\345\237\237", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionDeleteScalarField->setStatusTip(QCoreApplication::translate("MainWindow", "Delete current scalar field", nullptr));
#endif // QT_CONFIG(statustip)
        actionScalarFieldArithmetic->setText(QCoreApplication::translate("MainWindow", "\346\240\207\345\207\206\350\277\220\347\256\227", nullptr));
        actionScalarFieldArithmetic->setIconText(QCoreApplication::translate("MainWindow", "SF arithmetic", nullptr));
#if QT_CONFIG(tooltip)
        actionScalarFieldArithmetic->setToolTip(QCoreApplication::translate("MainWindow", "\345\212\240\343\200\201\345\207\217\343\200\201\344\271\230\343\200\201\351\231\244\344\270\244\344\270\252\346\240\207\351\207\217\345\237\237", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionScalarFieldArithmetic->setStatusTip(QCoreApplication::translate("MainWindow", "Add, subtract, multiply or divide two scalar fields", nullptr));
#endif // QT_CONFIG(statustip)
        actionColorize->setText(QCoreApplication::translate("MainWindow", "\347\235\200\350\211\262", nullptr));
#if QT_CONFIG(tooltip)
        actionColorize->setToolTip(QCoreApplication::translate("MainWindow", "Colorize entity (lightness values are unchanged)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionColorize->setStatusTip(QCoreApplication::translate("MainWindow", "Colorize entity (lightness values are unchanged)", nullptr));
#endif // QT_CONFIG(statustip)
        actionSmoothMeshSF->setText(QCoreApplication::translate("MainWindow", "\345\271\263\346\273\221", nullptr));
#if QT_CONFIG(tooltip)
        actionSmoothMeshSF->setToolTip(QCoreApplication::translate("MainWindow", "Smooth mesh scalar field", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSmoothMeshSF->setStatusTip(QCoreApplication::translate("MainWindow", "Smooth mesh scalar field", nullptr));
#endif // QT_CONFIG(statustip)
        actionEnhanceMeshSF->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\274\272", nullptr));
#if QT_CONFIG(tooltip)
        actionEnhanceMeshSF->setToolTip(QCoreApplication::translate("MainWindow", "Enhance Scalar Field", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionEnhanceMeshSF->setStatusTip(QCoreApplication::translate("MainWindow", "Enhance Scalar Field", nullptr));
#endif // QT_CONFIG(statustip)
        actionClearColor->setText(QCoreApplication::translate("MainWindow", "\346\270\262\346\237\223\346\270\205\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        actionClearColor->setToolTip(QCoreApplication::translate("MainWindow", "Clear colors", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionClearColor->setStatusTip(QCoreApplication::translate("MainWindow", "Clear colors", nullptr));
#endif // QT_CONFIG(statustip)
        actionClearNormals->setText(QCoreApplication::translate("MainWindow", "\345\220\221\351\207\217\347\247\273\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        actionClearNormals->setToolTip(QCoreApplication::translate("MainWindow", "Delete normals", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionClearNormals->setStatusTip(QCoreApplication::translate("MainWindow", "Delete normals", nullptr));
#endif // QT_CONFIG(statustip)
        actionResampleWithOctree->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\217\226\346\240\267", nullptr));
#if QT_CONFIG(tooltip)
        actionResampleWithOctree->setToolTip(QCoreApplication::translate("MainWindow", "Resample entity with octree", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionResampleWithOctree->setStatusTip(QCoreApplication::translate("MainWindow", "Resample entity with octree", nullptr));
#endif // QT_CONFIG(statustip)
        actionComputeMeshAA->setText(QCoreApplication::translate("MainWindow", "\344\270\211\350\247\222\347\275\221\357\274\210XY\345\271\263\351\235\242\357\274\211", nullptr));
#if QT_CONFIG(tooltip)
        actionComputeMeshAA->setToolTip(QCoreApplication::translate("MainWindow", "Compute \"2D1/2\" mesh by projecting points on the XY plane", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionComputeMeshAA->setStatusTip(QCoreApplication::translate("MainWindow", "Compute \"2D1/2\" mesh by projecting points on the XY plane", nullptr));
#endif // QT_CONFIG(statustip)
        actionComputeMeshLS->setText(QCoreApplication::translate("MainWindow", "\344\270\211\350\247\222\347\275\221\357\274\210\346\234\200\344\274\230\346\213\237\345\220\210\345\271\263\351\235\242\357\274\211", nullptr));
#if QT_CONFIG(tooltip)
        actionComputeMeshLS->setToolTip(QCoreApplication::translate("MainWindow", "Compute \"2D1/2\" mesh by projecting points on the (least squares) best fitting plane", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionComputeMeshLS->setStatusTip(QCoreApplication::translate("MainWindow", "Compute \"2D1/2\" mesh by projecting points on the (least squares) best fitting plane", nullptr));
#endif // QT_CONFIG(statustip)
        actionMeasureMeshSurface->setText(QCoreApplication::translate("MainWindow", "\346\265\213\351\207\217\350\241\250\351\235\242\347\247\257", nullptr));
#if QT_CONFIG(tooltip)
        actionMeasureMeshSurface->setToolTip(QCoreApplication::translate("MainWindow", "Measure mesh surface", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionMeasureMeshSurface->setStatusTip(QCoreApplication::translate("MainWindow", "Measure mesh surface", nullptr));
#endif // QT_CONFIG(statustip)
        actionCPS->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\344\270\244\344\270\252\347\202\271\344\272\221\344\271\213\351\227\264\346\234\200\350\277\221\347\232\204\347\202\271\347\232\204\351\233\206\345\220\210", nullptr));
#if QT_CONFIG(tooltip)
        actionCPS->setToolTip(QCoreApplication::translate("MainWindow", "Compute closest point set", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionCPS->setStatusTip(QCoreApplication::translate("MainWindow", "Compute closest point set", nullptr));
#endif // QT_CONFIG(statustip)
        actionDeleteAllSF->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\205\250\351\203\250(!)", nullptr));
#if QT_CONFIG(tooltip)
        actionDeleteAllSF->setToolTip(QCoreApplication::translate("MainWindow", "Delete all scalar fields", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionDeleteAllSF->setStatusTip(QCoreApplication::translate("MainWindow", "Delete all scalar fields", nullptr));
#endif // QT_CONFIG(statustip)
        actionMultiplySF->setText(QCoreApplication::translate("MainWindow", "Multiply", nullptr));
#if QT_CONFIG(tooltip)
        actionMultiplySF->setToolTip(QCoreApplication::translate("MainWindow", "Multiply scalar field by a constant", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionMultiplySF->setStatusTip(QCoreApplication::translate("MainWindow", "Multiply scalar field by a constant", nullptr));
#endif // QT_CONFIG(statustip)
        actionKMeans->setText(QCoreApplication::translate("MainWindow", "K\350\201\232\347\261\273\346\263\225", nullptr));
#if QT_CONFIG(tooltip)
        actionKMeans->setToolTip(QCoreApplication::translate("MainWindow", "classify point (K-Means applied on a scalar field)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionKMeans->setStatusTip(QCoreApplication::translate("MainWindow", "classify point (K-Means applied on a scalar field)", nullptr));
#endif // QT_CONFIG(statustip)
        actionFrontPropagation->setText(QCoreApplication::translate("MainWindow", "Front propagation", nullptr));
#if QT_CONFIG(tooltip)
        actionFrontPropagation->setToolTip(QCoreApplication::translate("MainWindow", "Classify points by propagating a front on a scalar field", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionFrontPropagation->setStatusTip(QCoreApplication::translate("MainWindow", "Classify points by propagating a front on a scalar field", nullptr));
#endif // QT_CONFIG(statustip)
        actionApplyScale->setText(QCoreApplication::translate("MainWindow", "\345\235\220\346\240\207\346\257\224\344\276\213\345\200\215\345\242\236", nullptr));
#if QT_CONFIG(tooltip)
        actionApplyScale->setToolTip(QCoreApplication::translate("MainWindow", "Multiply coordinates (separately)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionApplyScale->setStatusTip(QCoreApplication::translate("MainWindow", "Multiply coordinates (separately)", nullptr));
#endif // QT_CONFIG(statustip)
        actionMatchBBCenters->setText(QCoreApplication::translate("MainWindow", "\345\214\271\351\205\215\350\276\271\346\241\206\344\270\255\345\277\203", nullptr));
#if QT_CONFIG(tooltip)
        actionMatchBBCenters->setToolTip(QCoreApplication::translate("MainWindow", "Synchronize selected entities bbox centers", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionMatchBBCenters->setStatusTip(QCoreApplication::translate("MainWindow", "Synchronize selected entities bbox centers", nullptr));
#endif // QT_CONFIG(statustip)
        actionUnroll->setText(QCoreApplication::translate("MainWindow", "\345\234\206\346\237\261\346\210\226\345\234\206\351\224\245\344\275\223\347\202\271\344\272\221\345\261\225\346\210\220\345\271\263\351\235\242", nullptr));
#if QT_CONFIG(tooltip)
        actionUnroll->setToolTip(QCoreApplication::translate("MainWindow", "Unroll entity on a cylinder or a cone", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionUnroll->setStatusTip(QCoreApplication::translate("MainWindow", "Unroll entity on a cylinder or a cone", nullptr));
#endif // QT_CONFIG(statustip)
        actionSFGradient->setText(QCoreApplication::translate("MainWindow", "\346\240\207\351\207\217\345\237\237\346\242\257\345\272\246", nullptr));
        actionZoomAndCenter->setText(QCoreApplication::translate("MainWindow", "Zoom & Center", nullptr));
        actionZoomAndCenter->setIconText(QCoreApplication::translate("MainWindow", "ZoomCenter", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomAndCenter->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\251\346\224\276\351\200\211\345\256\232\347\232\204\345\256\236\344\275\223\345\271\266\345\261\205\344\270\255", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionZoomAndCenter->setStatusTip(QCoreApplication::translate("MainWindow", "Zoom and center on selected entities (Z)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionZoomAndCenter->setShortcut(QCoreApplication::translate("MainWindow", "Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetViewTop->setText(QCoreApplication::translate("MainWindow", "Top View", nullptr));
#if QT_CONFIG(tooltip)
        actionSetViewTop->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\257\350\247\206\345\233\276", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetViewTop->setStatusTip(QCoreApplication::translate("MainWindow", "Set top view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSetViewTop->setShortcut(QCoreApplication::translate("MainWindow", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetViewFront->setText(QCoreApplication::translate("MainWindow", "Front View", nullptr));
#if QT_CONFIG(tooltip)
        actionSetViewFront->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\215\350\247\206\345\233\276", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetViewFront->setStatusTip(QCoreApplication::translate("MainWindow", "Set front view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSetViewFront->setShortcut(QCoreApplication::translate("MainWindow", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetViewBack->setText(QCoreApplication::translate("MainWindow", "Back View", nullptr));
#if QT_CONFIG(tooltip)
        actionSetViewBack->setToolTip(QCoreApplication::translate("MainWindow", "\345\220\216\350\247\206\345\233\276", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetViewBack->setStatusTip(QCoreApplication::translate("MainWindow", "Set back view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSetViewBack->setShortcut(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetViewLeft->setText(QCoreApplication::translate("MainWindow", "Left Side View", nullptr));
#if QT_CONFIG(tooltip)
        actionSetViewLeft->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\246\350\247\206\345\233\276", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetViewLeft->setStatusTip(QCoreApplication::translate("MainWindow", "Set left side view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSetViewLeft->setShortcut(QCoreApplication::translate("MainWindow", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetViewRight->setText(QCoreApplication::translate("MainWindow", "Right Side View", nullptr));
#if QT_CONFIG(tooltip)
        actionSetViewRight->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\263\350\247\206\345\233\276", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetViewRight->setStatusTip(QCoreApplication::translate("MainWindow", "Set right side view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSetViewRight->setShortcut(QCoreApplication::translate("MainWindow", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetViewBottom->setText(QCoreApplication::translate("MainWindow", "Bottom View", nullptr));
#if QT_CONFIG(tooltip)
        actionSetViewBottom->setToolTip(QCoreApplication::translate("MainWindow", "\345\272\225\350\247\206\345\233\276", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetViewBottom->setStatusTip(QCoreApplication::translate("MainWindow", "Set bottom view", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSetViewBottom->setShortcut(QCoreApplication::translate("MainWindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDisplayMainTools->setText(QCoreApplication::translate("MainWindow", "\344\270\273\345\267\245\345\205\267\346\240\217", nullptr));
#if QT_CONFIG(statustip)
        actionDisplayMainTools->setStatusTip(QCoreApplication::translate("MainWindow", "Show/hide main toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        actionDisplayViewTools->setText(QCoreApplication::translate("MainWindow", "\350\247\206\345\233\276", nullptr));
#if QT_CONFIG(statustip)
        actionDisplayViewTools->setStatusTip(QCoreApplication::translate("MainWindow", "Show/hide view toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        actionDisplayScalarFieldsTools->setText(QCoreApplication::translate("MainWindow", "\346\240\207\351\207\217\345\234\272", nullptr));
#if QT_CONFIG(tooltip)
        actionDisplayScalarFieldsTools->setToolTip(QCoreApplication::translate("MainWindow", "Show/hide scalar fields toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionDisplayScalarFieldsTools->setStatusTip(QCoreApplication::translate("MainWindow", "Show/hide scalar fields toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        actionToggleSunLight->setText(QCoreApplication::translate("MainWindow", "\345\210\207\346\215\242\345\244\252\351\230\263\345\205\211", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleSunLight->setToolTip(QCoreApplication::translate("MainWindow", "Toggle sun light (active window)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionToggleSunLight->setStatusTip(QCoreApplication::translate("MainWindow", "Toggle sun light (active window)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionToggleSunLight->setShortcut(QCoreApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleCustomLight->setText(QCoreApplication::translate("MainWindow", "\345\210\207\346\215\242\350\207\252\345\256\232\344\271\211\345\205\211", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleCustomLight->setToolTip(QCoreApplication::translate("MainWindow", "Toggle custom light (active window)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionToggleCustomLight->setStatusTip(QCoreApplication::translate("MainWindow", "Toggle custom light (active window)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionToggleCustomLight->setShortcut(QCoreApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGlobalZoom->setText(QCoreApplication::translate("MainWindow", "Global Zoom", nullptr));
#if QT_CONFIG(tooltip)
        actionGlobalZoom->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\250\345\261\200\347\274\251\346\224\276", nullptr));
#endif // QT_CONFIG(tooltip)
        actionToggleCenteredPerspective->setText(QCoreApplication::translate("MainWindow", "\345\234\250\346\255\243\344\272\244\350\247\206\345\233\276\345\222\214\345\257\271\350\261\241\344\270\255\345\277\203\350\247\206\345\233\276\346\250\241\345\274\217\344\270\255\345\210\207\346\215\242 ", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleCenteredPerspective->setToolTip(QCoreApplication::translate("MainWindow", "Toggle perspective view (centered on objects) in current window", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionToggleCenteredPerspective->setStatusTip(QCoreApplication::translate("MainWindow", "Toggle perspective view (centered on objects) in current window", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionToggleCenteredPerspective->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleViewerBasedPerspective->setText(QCoreApplication::translate("MainWindow", "\345\234\250\346\255\243\344\272\244\350\247\206\345\233\276\345\222\214\351\200\217\350\247\206\345\233\276\344\270\255\345\210\207\346\215\242", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleViewerBasedPerspective->setToolTip(QCoreApplication::translate("MainWindow", "Toggle perspective view (centered on viewer) in current window", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionToggleViewerBasedPerspective->setStatusTip(QCoreApplication::translate("MainWindow", "Toggle perspective view (centered on viewer) in current window", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionToggleViewerBasedPerspective->setShortcut(QCoreApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRefresh->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
#if QT_CONFIG(shortcut)
        actionRefresh->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTestFrameRate->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\345\270\247\346\225\260\347\216\207", nullptr));
        actionRenderToFile->setText(QCoreApplication::translate("MainWindow", "\346\270\262\346\237\223\344\270\272\346\226\207\344\273\266", nullptr));
        actionAboutPlugins->setText(QCoreApplication::translate("MainWindow", "\346\217\222\344\273\266\344\277\241\346\201\257", nullptr));
        actionConvertToRGB->setText(QCoreApplication::translate("MainWindow", "\350\275\254\346\215\242\344\270\272RGB\351\242\234\350\211\262\345\237\237", nullptr));
#if QT_CONFIG(tooltip)
        actionConvertToRGB->setToolTip(QCoreApplication::translate("MainWindow", "Convert current scalar field to RGB colors", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowDepthBuffer->setText(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\272\343\200\201\346\230\276\347\244\272\346\267\261\345\272\246\347\274\223\345\206\262\345\214\272", nullptr));
        actionExportDepthBuffer->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\346\267\261\345\272\246\347\274\223\345\206\262\345\214\272", nullptr));
        actionModifySensor->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        actionRasterize->setText(QCoreApplication::translate("MainWindow", "\346\240\205\346\240\274\345\214\226\345\222\214\347\255\211\351\253\230\347\272\277\345\233\276", nullptr));
#if QT_CONFIG(tooltip)
        actionRasterize->setToolTip(QCoreApplication::translate("MainWindow", "\345\260\206\347\202\271\344\272\221\350\275\254\346\215\242\346\210\2202D\346\240\205\346\240\274\357\274\210\345\271\266\345\217\257\344\273\245\351\200\211\346\213\251\347\224\237\346\210\220\347\255\211\351\253\230\347\272\277\345\233\276\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAlign->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\345\257\271\351\275\220\347\202\271\344\272\221", nullptr));
#if QT_CONFIG(tooltip)
        actionAlign->setToolTip(QCoreApplication::translate("MainWindow", "Tries to automatically register (roughly) two points clouds", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionAlign->setStatusTip(QCoreApplication::translate("MainWindow", "Tries to automatically register (roughly) two points clouds", nullptr));
#endif // QT_CONFIG(statustip)
        actionSubsample->setText(QCoreApplication::translate("MainWindow", "\346\212\275\346\240\267", nullptr));
#if QT_CONFIG(tooltip)
        actionSubsample->setToolTip(QCoreApplication::translate("MainWindow", "\347\202\271\344\272\221\345\255\220\346\240\267\346\234\254", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSubsample->setStatusTip(QCoreApplication::translate("MainWindow", "Subsample a point cloud", nullptr));
#endif // QT_CONFIG(statustip)
        actionLoadShader->setText(QCoreApplication::translate("MainWindow", "Load shader", nullptr));
        actionDeleteShader->setText(QCoreApplication::translate("MainWindow", "Delete shader", nullptr));
        actionPointPicking->setText(QCoreApplication::translate("MainWindow", "\347\202\271\346\237\245\350\257\242", nullptr));
#if QT_CONFIG(tooltip)
        actionPointPicking->setToolTip(QCoreApplication::translate("MainWindow", "\347\202\271\346\237\245\350\257\242\357\274\210\345\215\225\347\202\271\344\277\241\346\201\257\343\200\201\344\270\244\347\202\271\351\227\264\350\267\235\347\246\273\343\200\201\344\270\211\347\202\271\351\227\264\350\247\222\345\272\246\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionPointPicking->setStatusTip(QCoreApplication::translate("MainWindow", "Point picking (point information, distance between 2 points, angles between 3 points, etc.)", nullptr));
#endif // QT_CONFIG(statustip)
        actionComputeBestFitBB->setText(QCoreApplication::translate("MainWindow", "\350\276\271\346\241\206P.C.A.\351\205\215\351\200\202", nullptr));
#if QT_CONFIG(tooltip)
        actionComputeBestFitBB->setToolTip(QCoreApplication::translate("MainWindow", "Makes BB fit principal components (rotates entity!)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionComputeBestFitBB->setStatusTip(QCoreApplication::translate("MainWindow", "Makes BB fit principal components (rotates entity!)", nullptr));
#endif // QT_CONFIG(statustip)
        actionEditCamera->setText(QCoreApplication::translate("MainWindow", "\345\275\261\345\203\217\350\256\276\347\275\256", nullptr));
        actionPointListPicking->setText(QCoreApplication::translate("MainWindow", "\347\202\271\346\211\271\351\207\217\346\237\245\350\257\242", nullptr));
#if QT_CONFIG(statustip)
        actionPointListPicking->setStatusTip(QCoreApplication::translate("MainWindow", "Pick several points (and export them to ASCII file, a new cloud, etc.)", nullptr));
#endif // QT_CONFIG(statustip)
        actionCurvature->setText(QCoreApplication::translate("MainWindow", "\346\233\262\347\216\207", nullptr));
        actionRoughness->setText(QCoreApplication::translate("MainWindow", "\347\262\227\347\263\231\347\250\213\345\272\246", nullptr));
        actionFitPlane->setText(QCoreApplication::translate("MainWindow", "\345\271\263\351\235\242\346\213\237\345\220\210", nullptr));
#if QT_CONFIG(tooltip)
        actionFitPlane->setToolTip(QCoreApplication::translate("MainWindow", "Fit a plane on a set of point", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRenameSF->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\221\275\345\220\215", nullptr));
        actionFitQuadric->setText(QCoreApplication::translate("MainWindow", "2.5D\346\233\262\351\235\242", nullptr));
        actionSNETest->setText(QCoreApplication::translate("MainWindow", "SNE\346\265\213\350\257\225", nullptr));
#if QT_CONFIG(tooltip)
        actionSNETest->setToolTip(QCoreApplication::translate("MainWindow", "Spherical Neighbourhood Extraction test", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSNETest->setStatusTip(QCoreApplication::translate("MainWindow", "Spherical Neighbourhood Extraction test", nullptr));
#endif // QT_CONFIG(statustip)
        actionToggleVisibility->setText(QCoreApplication::translate("MainWindow", "\345\217\257\350\247\206\346\200\247", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleVisibility->setToolTip(QCoreApplication::translate("MainWindow", "Toggle selected entities visibility (recursive)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleVisibility->setShortcut(QCoreApplication::translate("MainWindow", "V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleNormals->setText(QCoreApplication::translate("MainWindow", "\345\220\221\351\207\217", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleNormals->setToolTip(QCoreApplication::translate("MainWindow", "Toggle selected entities normals (recursive)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleNormals->setShortcut(QCoreApplication::translate("MainWindow", "N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleColors->setText(QCoreApplication::translate("MainWindow", "\351\242\234\350\211\262", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleColors->setToolTip(QCoreApplication::translate("MainWindow", "Toggle selected entities colors (recursive)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleColors->setShortcut(QCoreApplication::translate("MainWindow", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleSF->setText(QCoreApplication::translate("MainWindow", "\346\240\207\351\207\217\345\237\237", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleSF->setToolTip(QCoreApplication::translate("MainWindow", "Toggle selected entities SF (recursive)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleSF->setShortcut(QCoreApplication::translate("MainWindow", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionApplyTransformation->setText(QCoreApplication::translate("MainWindow", "\347\202\271\344\272\221\345\217\230\346\215\242", nullptr));
#if QT_CONFIG(tooltip)
        actionApplyTransformation->setToolTip(QCoreApplication::translate("MainWindow", "Apply rotation and/or translation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionApplyTransformation->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSmoothMeshLaplacian->setText(QCoreApplication::translate("MainWindow", "\345\271\263\346\273\221\357\274\210\346\213\211\346\231\256\346\213\211\346\226\257\347\256\227\346\263\225\357\274\211", nullptr));
        actionConvertNormalToHSV->setText(QCoreApplication::translate("MainWindow", "HSV \351\242\234\350\211\262", nullptr));
        actionSaveViewportAsObject->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\345\217\257\350\247\206\344\275\223\345\217\202\346\225\260\344\270\272\345\217\257\350\247\206\345\256\236\344\275\223", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveViewportAsObject->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPickRotationCenter->setText(QCoreApplication::translate("MainWindow", "Pick rotation center", nullptr));
#if QT_CONFIG(tooltip)
        actionPickRotationCenter->setToolTip(QCoreApplication::translate("MainWindow", "\346\213\276\345\217\226\346\227\213\350\275\254\344\270\255\345\277\203", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPickRotationCenter->setShortcut(QCoreApplication::translate("MainWindow", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionComputeDistancesFromSensor->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\350\214\203\345\233\264", nullptr));
#if QT_CONFIG(tooltip)
        actionComputeDistancesFromSensor->setToolTip(QCoreApplication::translate("MainWindow", "Compute ranges from sensor", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBilateralFilter->setText(QCoreApplication::translate("MainWindow", "\345\217\214\350\276\271\346\273\244\351\225\234\346\273\244\346\263\242", nullptr));
#if QT_CONFIG(tooltip)
        actionBilateralFilter->setToolTip(QCoreApplication::translate("MainWindow", "Compute bilateral filter", nullptr));
#endif // QT_CONFIG(tooltip)
        actionComputeScatteringAngles->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\350\247\222\345\272\246", nullptr));
#if QT_CONFIG(tooltip)
        actionComputeScatteringAngles->setToolTip(QCoreApplication::translate("MainWindow", "Compute laser beam scattering angle for a cloud with normals", nullptr));
#endif // QT_CONFIG(tooltip)
        actionToggleActiveSFColorScale->setText(QCoreApplication::translate("MainWindow", "\345\210\207\346\215\242\350\211\262\351\230\266", nullptr));
        actionToggleActiveSFColorScale->setIconText(QCoreApplication::translate("MainWindow", "Toggle active scalar field color scale", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleActiveSFColorScale->setToolTip(QCoreApplication::translate("MainWindow", "Toggle active scalar field color scale", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleActiveSFColorScale->setShortcut(QCoreApplication::translate("MainWindow", "Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowActiveSFPrevious->setText(QCoreApplication::translate("MainWindow", "\346\277\200\346\264\273\344\270\212\344\270\200\344\270\252\346\240\207\351\207\217\345\237\237", nullptr));
        actionShowActiveSFPrevious->setIconText(QCoreApplication::translate("MainWindow", "Show previous scalar field for active entity", nullptr));
#if QT_CONFIG(tooltip)
        actionShowActiveSFPrevious->setToolTip(QCoreApplication::translate("MainWindow", "Show previous scalar field for active entity", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowActiveSFPrevious->setShortcut(QCoreApplication::translate("MainWindow", "Shift+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowActiveSFNext->setText(QCoreApplication::translate("MainWindow", "\346\277\200\346\264\273\344\270\213\344\270\200\344\270\252\346\240\207\351\207\217\345\237\237", nullptr));
        actionShowActiveSFNext->setIconText(QCoreApplication::translate("MainWindow", "Show next scalar field for active entity", nullptr));
#if QT_CONFIG(tooltip)
        actionShowActiveSFNext->setToolTip(QCoreApplication::translate("MainWindow", "Show next scalar field for active entity", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShowActiveSFNext->setShortcut(QCoreApplication::translate("MainWindow", "Shift+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPointPairsAlign->setText(QCoreApplication::translate("MainWindow", "\346\235\241\345\270\246\351\205\215\345\207\206\357\274\210\345\220\214\345\220\215\347\202\271\346\226\271\346\263\225\357\274\211", nullptr));
#if QT_CONFIG(tooltip)
        actionPointPairsAlign->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\232\350\277\207\346\213\276\345\217\226\357\274\210\350\207\263\345\260\2214\344\270\252\357\274\211\347\211\271\345\276\201\345\257\271\345\272\224\347\202\271\345\257\271\351\275\220\347\202\271\344\272\221", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionPointPairsAlign->setStatusTip(QCoreApplication::translate("MainWindow", "Aligns two clouds by picking (at least 4) equivalent point pairs", nullptr));
#endif // QT_CONFIG(statustip)
        actionAddConstantSF->setText(QCoreApplication::translate("MainWindow", "\345\270\270\346\225\260\346\267\273\345\212\240\346\240\207\351\207\217\345\237\237", nullptr));
        actionExportCoordToSF->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\345\235\220\346\240\207\345\210\260\346\240\207\351\207\217\345\237\237", nullptr));
#if QT_CONFIG(tooltip)
        actionExportCoordToSF->setToolTip(QCoreApplication::translate("MainWindow", "Export X, Y and/or Z coordinates to scalar field(s)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSubdivideMesh->setText(QCoreApplication::translate("MainWindow", "\347\273\206\345\210\206\347\275\221\346\240\274", nullptr));
        actionToggleShowName->setText(QCoreApplication::translate("MainWindow", "3D\345\220\215\347\247\260", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleShowName->setToolTip(QCoreApplication::translate("MainWindow", "Toggle selected entities 3D name display (recursive)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleShowName->setShortcut(QCoreApplication::translate("MainWindow", "D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrimitiveFactory->setText(QCoreApplication::translate("MainWindow", "\345\216\237\345\247\213\345\212\240\345\267\245", nullptr));
        actionToggleMaterials->setText(QCoreApplication::translate("MainWindow", "\346\235\220\346\226\231/\347\272\271\347\220\206", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleMaterials->setToolTip(QCoreApplication::translate("MainWindow", "Toggle selected entities materials/textures (recursive)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleMaterials->setShortcut(QCoreApplication::translate("MainWindow", "M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetOrthoView->setText(QCoreApplication::translate("MainWindow", "Orthographic projection", nullptr));
#if QT_CONFIG(tooltip)
        actionSetOrthoView->setToolTip(QCoreApplication::translate("MainWindow", "Set orthographic projection for current 3D View", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetOrthoView->setStatusTip(QCoreApplication::translate("MainWindow", "Set orthographic projection for current 3D View", nullptr));
#endif // QT_CONFIG(statustip)
        actionSetCenteredPerspectiveView->setText(QCoreApplication::translate("MainWindow", "Object-centered perspective", nullptr));
#if QT_CONFIG(tooltip)
        actionSetCenteredPerspectiveView->setToolTip(QCoreApplication::translate("MainWindow", "Set object-centered perspective for current 3D View", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetCenteredPerspectiveView->setStatusTip(QCoreApplication::translate("MainWindow", "Set object-centered perspective for current 3D View", nullptr));
#endif // QT_CONFIG(statustip)
        actionSetViewerPerspectiveView->setText(QCoreApplication::translate("MainWindow", "Viewer-based perspective", nullptr));
#if QT_CONFIG(tooltip)
        actionSetViewerPerspectiveView->setToolTip(QCoreApplication::translate("MainWindow", "Set viewer-based perspective for current 3D View", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetViewerPerspectiveView->setStatusTip(QCoreApplication::translate("MainWindow", "Set viewer-based perspective for current 3D View", nullptr));
#endif // QT_CONFIG(statustip)
        actionSetPivotAlwaysOn->setText(QCoreApplication::translate("MainWindow", "Always visible", nullptr));
#if QT_CONFIG(tooltip)
        actionSetPivotAlwaysOn->setToolTip(QCoreApplication::translate("MainWindow", "Pivot always visible", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetPivotAlwaysOn->setStatusTip(QCoreApplication::translate("MainWindow", "Pivot always visible", nullptr));
#endif // QT_CONFIG(statustip)
        actionSetPivotRotationOnly->setText(QCoreApplication::translate("MainWindow", "Rotation only", nullptr));
#if QT_CONFIG(tooltip)
        actionSetPivotRotationOnly->setToolTip(QCoreApplication::translate("MainWindow", "\346\227\213\350\275\254\350\275\264\345\217\257\350\247\201", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetPivotRotationOnly->setStatusTip(QCoreApplication::translate("MainWindow", "Pivot visible when rotating", nullptr));
#endif // QT_CONFIG(statustip)
        actionSetPivotOff->setText(QCoreApplication::translate("MainWindow", "Never visible", nullptr));
#if QT_CONFIG(tooltip)
        actionSetPivotOff->setToolTip(QCoreApplication::translate("MainWindow", "Pivot never visible", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetPivotOff->setStatusTip(QCoreApplication::translate("MainWindow", "Pivot never visible", nullptr));
#endif // QT_CONFIG(statustip)
        actionSetViewIso1->setText(QCoreApplication::translate("MainWindow", "Iso 1", nullptr));
#if QT_CONFIG(tooltip)
        actionSetViewIso1->setToolTip(QCoreApplication::translate("MainWindow", "\345\260\206\350\247\206\345\233\276\350\256\276\347\275\256\344\270\272\342\200\234\345\211\215\342\200\235\347\255\211\350\275\264\344\276\247\350\247\206\345\233\276", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetViewIso1->setStatusTip(QCoreApplication::translate("MainWindow", "Set view to 'front' isometric", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSetViewIso1->setShortcut(QCoreApplication::translate("MainWindow", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetViewIso2->setText(QCoreApplication::translate("MainWindow", "Iso 2", nullptr));
#if QT_CONFIG(tooltip)
        actionSetViewIso2->setToolTip(QCoreApplication::translate("MainWindow", "\345\260\206\350\247\206\345\233\276\350\256\276\347\275\256\344\270\272\342\200\234\345\220\216\342\200\235\347\255\211\350\275\264\344\276\247\350\247\206\345\233\276", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionSetViewIso2->setStatusTip(QCoreApplication::translate("MainWindow", "Set view to 'back' isometric", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionSetViewIso2->setShortcut(QCoreApplication::translate("MainWindow", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionConvertTextureToColor->setText(QCoreApplication::translate("MainWindow", "\347\272\271\347\220\206\350\264\264\345\233\276", nullptr));
        actionOpenColorScalesManager->setText(QCoreApplication::translate("MainWindow", "\350\211\262\351\230\266\347\256\241\347\220\206", nullptr));
#if QT_CONFIG(tooltip)
        actionOpenColorScalesManager->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\351\242\234\350\211\262\346\257\224\344\276\213\347\256\241\347\220\206\345\231\250", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCrossSection->setText(QCoreApplication::translate("MainWindow", "\350\243\201\345\211\252\346\241\206\350\243\201\345\211\252", nullptr));
#if QT_CONFIG(statustip)
        actionCrossSection->setStatusTip(QCoreApplication::translate("MainWindow", "Cross Section", nullptr));
#endif // QT_CONFIG(statustip)
        actionEditGlobalShiftAndScale->setText(QCoreApplication::translate("MainWindow", "\345\205\250\345\261\200\345\217\230\346\215\242\345\222\214\346\257\224\344\276\213\347\274\251\346\224\276", nullptr));
        actionScalarFieldFromColor->setText(QCoreApplication::translate("MainWindow", "\350\275\254\346\215\242\346\210\220\346\240\207\351\207\217", nullptr));
        actionComputeKdTree->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227Kd\346\240\221", nullptr));
        actionTest->setText(QCoreApplication::translate("MainWindow", "test", nullptr));
        actionAddIdField->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\202\271\347\264\242\345\274\225\346\240\207\351\207\217\345\237\237", nullptr));
#if QT_CONFIG(tooltip)
        actionAddIdField->setToolTip(QCoreApplication::translate("MainWindow", "Adds a scalar field with ordered integers for each point in the cloud", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFitFacet->setText(QCoreApplication::translate("MainWindow", "2D \345\244\232\350\276\271\345\275\242", nullptr));
        actionAdjustZoom->setText(QCoreApplication::translate("MainWindow", "\350\260\203\346\225\264\347\274\251\346\224\276\346\257\224\344\276\213", nullptr));
#if QT_CONFIG(tooltip)
        actionAdjustZoom->setToolTip(QCoreApplication::translate("MainWindow", "Adjusts zoom with a given pixel/unit ratio (orthographic projection only)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSetSFAsCoord->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\207\351\207\217\345\237\237\345\235\220\346\240\207", nullptr));
#if QT_CONFIG(tooltip)
        actionSetSFAsCoord->setToolTip(QCoreApplication::translate("MainWindow", "Set SF as coordinate(s) (X, Y or Z)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCloseAll->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\345\205\250\351\203\250", nullptr));
#if QT_CONFIG(tooltip)
        actionCloseAll->setToolTip(QCoreApplication::translate("MainWindow", "Remove all entities currently loaded in the DB tree", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditGlobalScale->setText(QCoreApplication::translate("MainWindow", "Edit global scale", nullptr));
        actionViewFromSensor->setText(QCoreApplication::translate("MainWindow", "\344\274\240\346\204\237\345\231\250\350\247\206\345\233\276\346\250\241\345\274\217", nullptr));
        actionFindBiggestInnerRectangle->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276\346\234\200\345\244\247\345\206\205\347\237\251\345\275\242\357\274\2102D\357\274\211 ", nullptr));
        actionCreateGBLSensor->setText(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\272", nullptr));
        actionCreateCameraSensor->setText(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\272", nullptr));
        actionCheckPointsInsideFrustum->setText(QCoreApplication::translate("MainWindow", "\347\202\271\344\272\221\345\217\257\350\247\206\346\200\247", nullptr));
        actionProjectUncertainty->setText(QCoreApplication::translate("MainWindow", "\346\227\240\346\212\225\345\275\261\347\202\271\344\272\221", nullptr));
        actionOrientNormalsMST->setText(QCoreApplication::translate("MainWindow", "\346\234\200\345\260\217\347\224\237\346\210\220\346\240\221\346\226\271\346\263\225", nullptr));
        actionOrientNormalsFM->setText(QCoreApplication::translate("MainWindow", "\345\277\253\351\200\237\345\214\271\351\205\215\346\263\225", nullptr));
        actionCNETest->setText(QCoreApplication::translate("MainWindow", "CNE\346\265\213\350\257\225", nullptr));
        actionCNETest->setIconText(QCoreApplication::translate("MainWindow", "Cylindrical Neighbourhood Extraction test", nullptr));
#if QT_CONFIG(tooltip)
        actionCNETest->setToolTip(QCoreApplication::translate("MainWindow", "Cylindrical Neighbourhood Extraction test", nullptr));
#endif // QT_CONFIG(tooltip)
        actionApproximateDensity->setText(QCoreApplication::translate("MainWindow", "Approximate (dist. to nearest neighbor)", nullptr));
        actionComputeDensity->setText(QCoreApplication::translate("MainWindow", "\345\257\206\345\272\246", nullptr));
#if QT_CONFIG(tooltip)
        actionComputeDensity->setToolTip(QCoreApplication::translate("MainWindow", "Compute density", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemoveDuplicatePoints->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\207\215\345\244\215\347\202\271", nullptr));
        actionCrop->setText(QCoreApplication::translate("MainWindow", "\344\270\211\347\273\264\345\210\206\345\211\262", nullptr));
        actionConvertNormalToDipDir->setText(QCoreApplication::translate("MainWindow", "\345\217\214\346\267\261\345\272\246\346\270\262\346\237\223", nullptr));
        actionExportCloudInfo->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\347\202\271\344\272\221\344\277\241\346\201\257", nullptr));
#if QT_CONFIG(tooltip)
        actionExportCloudInfo->setToolTip(QCoreApplication::translate("MainWindow", "Export cloud info to a CSV file (name, size, barycenter, scalar fields info, etc.)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInterpolateColors->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\242\234\350\211\262", nullptr));
#if QT_CONFIG(tooltip)
        actionInterpolateColors->setToolTip(QCoreApplication::translate("MainWindow", "Interpolate colors from another entity (cloud or mesh) - color is taken from the nearest neighbor", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDistanceToBestFitQuadric3D->setText(QCoreApplication::translate("MainWindow", "\346\234\200\344\275\263\346\213\237\345\220\210\344\270\211\347\273\264\344\272\214\346\254\241\346\233\262\351\235\242\347\232\204\350\267\235\347\246\273\346\230\240\345\260\204", nullptr));
        actionChangeColorLevels->setText(QCoreApplication::translate("MainWindow", "\346\270\262\346\237\223\347\272\247\345\210\253", nullptr));
        actionResetGUIElementsPos->setText(QCoreApplication::translate("MainWindow", "\351\207\215\347\275\256\346\211\200\346\234\211GUI\344\275\215\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        actionResetGUIElementsPos->setToolTip(QCoreApplication::translate("MainWindow", "Reset all GUI element positions (after restart)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionConvertToRandomRGB->setText(QCoreApplication::translate("MainWindow", "\350\275\254\351\232\217\346\234\272RGB\351\242\234\350\211\262\345\237\237", nullptr));
        actionNoiseFilter->setText(QCoreApplication::translate("MainWindow", "Noise\346\273\244\346\263\242", nullptr));
#if QT_CONFIG(tooltip)
        actionNoiseFilter->setToolTip(QCoreApplication::translate("MainWindow", "Noise filter (remove the points far from the - approximate - local surface)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionComputeStatParams2->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\347\273\237\350\256\241\345\210\206\345\270\203", nullptr));
#if QT_CONFIG(tooltip)
        actionComputeStatParams2->setToolTip(QCoreApplication::translate("MainWindow", "\345\234\250\346\264\273\345\212\250\345\217\230\351\207\217\345\255\227\346\256\265\344\270\212\346\213\237\345\220\210\347\273\237\350\256\241\346\250\241\345\236\213", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionComputeStatParams2->setStatusTip(QCoreApplication::translate("MainWindow", "Fits a statistical model on the active scalar field", nullptr));
#endif // QT_CONFIG(statustip)
        actionMeasureMeshVolume->setText(QCoreApplication::translate("MainWindow", "\346\265\213\351\207\217\344\275\223\347\247\257", nullptr));
        actionFlagMeshVertices->setText(QCoreApplication::translate("MainWindow", "\346\240\274\347\275\221\345\210\206\347\261\273", nullptr));
#if QT_CONFIG(tooltip)
        actionFlagMeshVertices->setToolTip(QCoreApplication::translate("MainWindow", "Flag vertices by type: normal (0), border (1), non-manifold (2)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionToggleActivation->setText(QCoreApplication::translate("MainWindow", "\346\277\200\346\264\273\357\274\210\351\235\236\351\200\222\345\275\222\357\274\211", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleActivation->setToolTip(QCoreApplication::translate("MainWindow", "Enable/disable selected entities (not recursive)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleActivation->setShortcut(QCoreApplication::translate("MainWindow", "A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLockRotationAxis->setText(QCoreApplication::translate("MainWindow", "\351\224\201\345\256\232\345\233\264\347\273\225Z\350\275\264\347\232\204\345\275\261\345\203\217\346\227\213\350\275\254", nullptr));
#if QT_CONFIG(tooltip)
        actionLockRotationAxis->setToolTip(QCoreApplication::translate("MainWindow", "Lock 3D camera rotation about an axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionLockRotationAxis->setShortcut(QCoreApplication::translate("MainWindow", "L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCreateCloudFromEntCenters->setText(QCoreApplication::translate("MainWindow", "\344\273\216\351\200\211\345\256\232\347\232\204\345\256\236\344\275\223\344\270\255\345\277\203\345\210\233\345\273\272\347\202\271\344\272\221", nullptr));
        actionComputeBestICPRmsMatrix->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\346\234\200\344\275\263\351\205\215\345\207\206\345\235\207\346\226\271\346\240\271\347\237\251\351\230\265", nullptr));
#if QT_CONFIG(tooltip)
        actionComputeBestICPRmsMatrix->setToolTip(QCoreApplication::translate("MainWindow", "Computes the best registration between all couples among multiple entities and save the resulting RMS in a matrix (CSV) file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEnterBubbleViewMode->setText(QCoreApplication::translate("MainWindow", "\350\277\233\345\205\245\346\263\241\346\262\253\350\247\206\345\233\276\346\250\241\345\274\217", nullptr));
#if QT_CONFIG(shortcut)
        actionEnterBubbleViewMode->setShortcut(QCoreApplication::translate("MainWindow", "B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExtractSections->setText(QCoreApplication::translate("MainWindow", "\346\217\220\345\217\226\346\210\252\351\235\242", nullptr));
#if QT_CONFIG(tooltip)
        actionExtractSections->setToolTip(QCoreApplication::translate("MainWindow", "\346\262\277\345\244\232\346\256\265\347\272\277\346\217\220\345\217\226\347\202\271\344\272\221\346\210\252\351\235\242\346\210\226\346\262\277\345\244\232\346\256\265\347\272\277\345\261\225\345\274\200\347\202\271\344\272\221", nullptr));
#endif // QT_CONFIG(tooltip)
        actionConvertPolylinesToMesh->setText(QCoreApplication::translate("MainWindow", "\351\253\230\347\250\213\347\202\271\357\274\210\347\272\277\357\274\211\347\237\242\351\207\217\350\275\254\347\275\221\346\240\274", nullptr));
#if QT_CONFIG(tooltip)
        actionConvertPolylinesToMesh->setToolTip(QCoreApplication::translate("MainWindow", "Contour plot (set of polylines) to a 2.5D mesh", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLevel->setText(QCoreApplication::translate("MainWindow", "\345\271\263\351\235\242\345\217\230\346\215\242", nullptr));
#if QT_CONFIG(tooltip)
        actionLevel->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\211\345\217\226\344\270\211\344\270\252\347\202\271\344\275\277\347\202\271\344\272\221\346\210\226\347\275\221\346\240\274\346\210\220\345\271\263\351\235\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFitSphere->setText(QCoreApplication::translate("MainWindow", "\347\220\203\344\275\223\346\213\237\345\220\210", nullptr));
#if QT_CONFIG(tooltip)
        actionFitSphere->setToolTip(QCoreApplication::translate("MainWindow", "Fits a sphere on the selected cloud", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMatchScales->setText(QCoreApplication::translate("MainWindow", "\345\214\271\351\205\215\350\247\204\346\250\241", nullptr));
        actionZoomIn->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomIn->setToolTip(QCoreApplication::translate("MainWindow", "Zoom in (current 3D view)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomIn->setShortcut(QCoreApplication::translate("MainWindow", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOut->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOut->setToolTip(QCoreApplication::translate("MainWindow", "Zoom out (current 3D view)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomOut->setShortcut(QCoreApplication::translate("MainWindow", "=", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDistanceMap->setText(QCoreApplication::translate("MainWindow", "\350\267\235\347\246\273\345\210\266\345\233\276", nullptr));
        actionSORFilter->setText(QCoreApplication::translate("MainWindow", "SOR\346\273\244\346\263\242", nullptr));
#if QT_CONFIG(tooltip)
        actionSORFilter->setToolTip(QCoreApplication::translate("MainWindow", "\347\273\237\350\256\241\345\274\202\345\270\270\345\200\274\346\273\244\346\263\242\345\231\250\357\274\210\345\216\273\351\231\244\347\202\271\344\272\221\344\270\212\347\232\204\345\231\252\345\243\260\347\202\271\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEnableStereo->setText(QCoreApplication::translate("MainWindow", "actionEnableStereo", nullptr));
#if QT_CONFIG(tooltip)
        actionEnableStereo->setToolTip(QCoreApplication::translate("MainWindow", "\345\220\257\347\224\250\347\253\213\344\275\223\346\250\241\345\274\217", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionEnableStereo->setShortcut(QCoreApplication::translate("MainWindow", "F10", nullptr));
#endif // QT_CONFIG(shortcut)
        actionComputePointsVisibility->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\345\205\250\351\203\250\347\202\271\350\247\222\345\272\246", nullptr));
        actionCompute2HalfDimVolume->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\2272.5D\344\275\223\347\247\257", nullptr));
        actionExclusiveFullScreen->setText(QCoreApplication::translate("MainWindow", "\345\205\250\345\261\217(3D\350\247\206\345\233\276)", nullptr));
#if QT_CONFIG(tooltip)
        actionExclusiveFullScreen->setToolTip(QCoreApplication::translate("MainWindow", "Exclusive full screen (3D view)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExclusiveFullScreen->setShortcut(QCoreApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnableVisualDebugTraces->setText(QCoreApplication::translate("MainWindow", "\345\220\257\347\224\250\345\217\257\350\247\206\345\214\226\350\260\203\350\257\225\350\267\237\350\270\252", nullptr));
#if QT_CONFIG(tooltip)
        actionEnableVisualDebugTraces->setToolTip(QCoreApplication::translate("MainWindow", "Enables visual debug traces (active 3D view)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionEnableVisualDebugTraces->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRGBToGreyScale->setText(QCoreApplication::translate("MainWindow", "RGB\350\275\254\346\215\242\347\201\260\345\272\246", nullptr));
#if QT_CONFIG(tooltip)
        actionRGBToGreyScale->setToolTip(QCoreApplication::translate("MainWindow", "Convert RGB colors to grey scale colors", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTracePolyline->setText(QCoreApplication::translate("MainWindow", "\345\244\232\346\256\265\347\272\277\350\267\237\350\270\252", nullptr));
#if QT_CONFIG(tooltip)
        actionTracePolyline->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\232\350\277\207\347\202\271\346\213\276\345\217\226\350\267\237\350\270\252\345\244\232\346\256\265\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionTracePolyline->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnableQtWarnings->setText(QCoreApplication::translate("MainWindow", "\345\220\257\347\224\250\346\216\247\345\210\266\345\217\260\344\270\255\347\232\204QT\350\255\246\345\221\212", nullptr));
        actionGlobalShiftSettings->setText(QCoreApplication::translate("MainWindow", "\345\205\250\345\261\200\350\256\276\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        actionGlobalShiftSettings->setToolTip(QCoreApplication::translate("MainWindow", "Set Global Shift & Scale mechanism parameters", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEnableCameraLink->setText(QCoreApplication::translate("MainWindow", "\347\233\270\346\234\272\350\277\236\346\216\245", nullptr));
#if QT_CONFIG(tooltip)
        actionEnableCameraLink->setToolTip(QCoreApplication::translate("MainWindow", "Link the cameras of all 3D views\n"
"(so that they all move in the same way and at the same time)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowWaveDialog->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\2132D\346\263\242\345\275\242", nullptr));
        actionCreatePlane->setText(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\272\345\271\263\351\235\242", nullptr));
#if QT_CONFIG(tooltip)
        actionCreatePlane->setToolTip(QCoreApplication::translate("MainWindow", "Create a plane", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditPlane->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\345\271\263\351\235\242", nullptr));
#if QT_CONFIG(tooltip)
        actionEditPlane->setToolTip(QCoreApplication::translate("MainWindow", "Edit the plane parameters", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCreateSurfaceBetweenTwoPolylines->setText(QCoreApplication::translate("MainWindow", "\344\270\244\347\272\277\351\227\264\345\210\233\345\273\272\351\235\242", nullptr));
        actionMeshTwoPolylines->setText(QCoreApplication::translate("MainWindow", "\346\233\262\347\272\277\346\213\237\345\220\210\345\271\263\351\235\242", nullptr));
        actionFitPlaneProxy->setText(QCoreApplication::translate("MainWindow", "\346\213\237\345\220\210\345\271\263\351\235\242", nullptr));
#if QT_CONFIG(tooltip)
        actionFitPlaneProxy->setToolTip(QCoreApplication::translate("MainWindow", "Fit a plane on a set of point", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEnhanceRGBWithIntensities->setText(QCoreApplication::translate("MainWindow", "\351\242\234\350\211\262\345\242\236\345\274\272", nullptr));
        actionMeshScanGrids->setText(QCoreApplication::translate("MainWindow", "\351\200\202\351\205\215\346\211\253\346\217\217\346\240\274\347\275\221", nullptr));
#if QT_CONFIG(tooltip)
        actionMeshScanGrids->setToolTip(QCoreApplication::translate("MainWindow", "Mesh scan grids (structured point clouds)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAutoPickRotationCenter->setText(QCoreApplication::translate("MainWindow", "Auto-pick rotation center", nullptr));
#if QT_CONFIG(tooltip)
        actionAutoPickRotationCenter->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\276\347\273\206\351\205\215\345\207\206\344\273\245\345\257\271\351\275\220\347\232\204\347\202\271\344\272\221", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAutoPickRotationCenter->setShortcut(QCoreApplication::translate("MainWindow", "Shift+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowCursor3DCoordinates->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\205\211\346\240\207\345\235\220\346\240\207", nullptr));
#if QT_CONFIG(tooltip)
        actionShowCursor3DCoordinates->setToolTip(QCoreApplication::translate("MainWindow", "Show cursor coordinates (2D and 3D if possible)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDeleteScanGrid->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\211\253\346\217\217\346\240\274\347\275\221", nullptr));
#if QT_CONFIG(tooltip)
        actionDeleteScanGrid->setToolTip(QCoreApplication::translate("MainWindow", "Delete the underlying scan grids", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCompressFWFData->setText(QCoreApplication::translate("MainWindow", "\345\216\213\347\274\251FWF\346\225\260\346\215\256", nullptr));
#if QT_CONFIG(tooltip)
        actionCompressFWFData->setToolTip(QCoreApplication::translate("MainWindow", "Compress the associated FWF data (maybe interesting after interactive segmentation for instance)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInterpolateSFs->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\345\267\262\346\234\211\347\232\204\346\240\207\351\207\217\345\237\237", nullptr));
#if QT_CONFIG(tooltip)
        actionInterpolateSFs->setToolTip(QCoreApplication::translate("MainWindow", "Interpolate scalar-field(s) from another cloud or mesh", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExportPlaneInfo->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\345\271\263\351\235\242\344\277\241\346\201\257", nullptr));
#if QT_CONFIG(tooltip)
        actionExportPlaneInfo->setToolTip(QCoreApplication::translate("MainWindow", "Export plane info to a CSV file (name, width, height, center, normal, dip and dip direction, etc.)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLock_rotation_about_arbitrary_axis->setText(QCoreApplication::translate("MainWindow", "Lock rotation about arbitrary axis", nullptr));
        actionSamplePointsOnPolyline->setText(QCoreApplication::translate("MainWindow", "\351\207\207\346\240\267", nullptr));
        actionNoTranslation->setText(QCoreApplication::translate("MainWindow", "None (English)", nullptr));
        actionComputeGeometricFeature->setText(QCoreApplication::translate("MainWindow", "\345\207\240\344\275\225\347\211\271\345\276\201\350\256\241\347\256\227", nullptr));
#if QT_CONFIG(tooltip)
        actionComputeGeometricFeature->setToolTip(QCoreApplication::translate("MainWindow", "Compute geometric features (density, curvature, roughness, etc.)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBBMinCornerToOrigin->setText(QCoreApplication::translate("MainWindow", "\345\260\206\350\276\271\346\241\206\346\234\200\345\260\217\350\247\222\347\247\273\345\212\250\345\210\260\345\216\237\347\202\271", nullptr));
#if QT_CONFIG(tooltip)
        actionBBMinCornerToOrigin->setToolTip(QCoreApplication::translate("MainWindow", "Move the bounding-box min corner to the origin", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBBMaxCornerToOrigin->setText(QCoreApplication::translate("MainWindow", "\345\260\206\350\276\271\346\241\206\346\234\200\345\244\247\350\247\222\347\247\273\345\212\250\345\210\260\345\216\237\347\202\271", nullptr));
#if QT_CONFIG(tooltip)
        actionBBMaxCornerToOrigin->setToolTip(QCoreApplication::translate("MainWindow", "Move the bounding-box max corner to the origin", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBBCenterToOrigin->setText(QCoreApplication::translate("MainWindow", "\345\260\206\350\276\271\346\241\206\344\270\255\345\277\203\347\247\273\345\212\250\345\210\260\345\216\237\347\202\271", nullptr));
#if QT_CONFIG(tooltip)
        actionBBCenterToOrigin->setToolTip(QCoreApplication::translate("MainWindow", "Move the bounding-box center to the origin", nullptr));
#endif // QT_CONFIG(tooltip)
        actionComputeLocal->setText(QCoreApplication::translate("MainWindow", "\347\202\271\344\272\221\350\256\241\347\256\227(\346\234\254\344\275\223\345\235\220\346\240\207\347\263\273)", nullptr));
        actionPOS->setText(QCoreApplication::translate("MainWindow", "POS\346\225\260\346\215\256\345\244\204\347\220\206(\346\235\241\345\270\246\345\210\206\345\211\262)", nullptr));
        actionComputeMeasure->setText(QCoreApplication::translate("MainWindow", "\347\202\271\344\272\221\350\256\241\347\256\227(\346\265\213\351\207\217\345\235\220\346\240\207\347\263\273)", nullptr));
        actionCloudSmoothing->setText(QCoreApplication::translate("MainWindow", "\347\202\271\344\272\221\346\273\244\346\263\242", nullptr));
        actionCloudCheck->setText(QCoreApplication::translate("MainWindow", "\347\202\271\344\272\221\346\243\200\346\240\241", nullptr));
        actionCloudClassify->setText(QCoreApplication::translate("MainWindow", "\347\202\271\344\272\221\345\210\206\347\261\273", nullptr));
        actionCloudPickup->setText(QCoreApplication::translate("MainWindow", "\347\202\271\344\272\221\346\217\220\345\217\226", nullptr));
        actionCloudData->setText(QCoreApplication::translate("MainWindow", "\347\202\271\344\272\221\346\225\260\346\215\256", nullptr));
        actionDSM->setText(QCoreApplication::translate("MainWindow", "DSM", nullptr));
        actionDEM->setText(QCoreApplication::translate("MainWindow", "DEM", nullptr));
        actionDLG->setText(QCoreApplication::translate("MainWindow", "DLG", nullptr));
        actionDOM->setText(QCoreApplication::translate("MainWindow", "DOM", nullptr));
        actionDataPreprocessing->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\351\242\204\345\244\204\347\220\206", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&\346\226\207\344\273\266", nullptr));
        menuDisplay->setTitle(QCoreApplication::translate("MainWindow", "&\346\230\276\347\244\272", nullptr));
        menuToolbars->setTitle(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267\346\240\217", nullptr));
        menuLights->setTitle(QCoreApplication::translate("MainWindow", "\345\205\211\346\272\220", nullptr));
        menuActiveScalarField->setTitle(QCoreApplication::translate("MainWindow", "\346\264\273\345\212\250\346\240\207\351\207\217\345\237\237", nullptr));
        menuLanguage->setTitle(QCoreApplication::translate("MainWindow", "\350\257\255\350\250\200\347\277\273\350\257\221", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&\345\270\256\345\212\251", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        menuScalarFields->setTitle(QCoreApplication::translate("MainWindow", "\346\240\207\351\207\217\345\237\237", nullptr));
        menuColors->setTitle(QCoreApplication::translate("MainWindow", "\351\242\234\350\211\262", nullptr));
        menuNormals->setTitle(QCoreApplication::translate("MainWindow", "\345\220\221\351\207\217\350\256\276\347\275\256", nullptr));
        menuOrientNormals->setTitle(QCoreApplication::translate("MainWindow", "\345\220\221\351\207\217\345\277\253\351\200\237\345\256\232\345\220\221", nullptr));
        menuConvert_to->setTitle(QCoreApplication::translate("MainWindow", "\345\220\221\351\207\217\350\275\254\346\215\242", nullptr));
        menuOctree->setTitle(QCoreApplication::translate("MainWindow", "\345\205\253\345\217\211\346\240\221", nullptr));
        menuMesh->setTitle(QCoreApplication::translate("MainWindow", "\346\240\205\346\240\274\346\225\260\346\215\256\345\244\204\347\220\206", nullptr));
        menuMeshScalarField->setTitle(QCoreApplication::translate("MainWindow", "\346\240\207\351\207\217\345\234\272", nullptr));
        menuSensors->setTitle(QCoreApplication::translate("MainWindow", "\344\274\240\346\204\237\345\231\250", nullptr));
#if QT_CONFIG(tooltip)
        menuGroundBasedLidar->setToolTip(QCoreApplication::translate("MainWindow", "Terrestrial Laser Sensor = Ground Based Lidar", nullptr));
#endif // QT_CONFIG(tooltip)
        menuGroundBasedLidar->setTitle(QCoreApplication::translate("MainWindow", "TLS/GBL", nullptr));
        menuCameraSensor->setTitle(QCoreApplication::translate("MainWindow", "\347\233\270\346\234\272", nullptr));
        menuToggle->setTitle(QCoreApplication::translate("MainWindow", "\345\277\253\346\215\267\351\224\256", nullptr));
        menuWaveform->setTitle(QCoreApplication::translate("MainWindow", "\346\263\242\345\275\242", nullptr));
        menuPlane->setTitle(QCoreApplication::translate("MainWindow", "\345\271\263\351\235\242", nullptr));
        menuGrid->setTitle(QCoreApplication::translate("MainWindow", "\347\275\221\346\240\274", nullptr));
        menuPolyline->setTitle(QCoreApplication::translate("MainWindow", "\347\272\277\347\274\226\350\276\221", nullptr));
        menu3DViews->setTitle(QCoreApplication::translate("MainWindow", "3D &\350\247\206\345\233\276", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267", nullptr));
        menuSegmentation->setTitle(QCoreApplication::translate("MainWindow", "\351\253\230\347\272\247\345\210\206\345\211\262", nullptr));
        menuProjection->setTitle(QCoreApplication::translate("MainWindow", "\346\212\225\345\275\261", nullptr));
        menuStatistics->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\347\220\206\347\273\237\350\256\241", nullptr));
        menuDistances->setTitle(QCoreApplication::translate("MainWindow", "\350\267\235\347\246\273\346\265\213\351\207\217", nullptr));
        menuRegistration->setTitle(QCoreApplication::translate("MainWindow", "\351\205\215\345\207\206", nullptr));
        menuOther->setTitle(QCoreApplication::translate("MainWindow", "\344\274\260\351\207\217", nullptr));
        menuSandBox->setTitle(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\241\206", nullptr));
        menuFit->setTitle(QCoreApplication::translate("MainWindow", "\346\213\237\345\220\210", nullptr));
        menuClean->setTitle(QCoreApplication::translate("MainWindow", "\346\273\244\346\263\242", nullptr));
        menuVolume->setTitle(QCoreApplication::translate("MainWindow", "\344\275\223\347\247\257", nullptr));
        menuBatchExport->setTitle(QCoreApplication::translate("MainWindow", "\346\211\271\351\207\217\345\257\274\345\207\272", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\215\225\345\205\211\345\255\220\346\225\260\346\215\256\351\242\204\345\244\204\347\220\206 ", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\215\225\345\205\211\345\255\220\347\202\271\344\272\221\346\225\260\346\215\256\345\244\204\347\220\206", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\346\275\256\351\227\264\345\270\246\346\265\213\347\273\230\346\225\260\346\215\256\344\272\247\345\223\201", nullptr));
        Dockable->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\273\223\346\236\204\346\240\221", nullptr));
        toolBarView->setWindowTitle(QCoreApplication::translate("MainWindow", "Viewing tools", nullptr));
#if QT_CONFIG(tooltip)
        toolBarView->setToolTip(QCoreApplication::translate("MainWindow", "Viewing tools", nullptr));
#endif // QT_CONFIG(tooltip)
        DockableConsole->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\216\247\345\210\266\345\217\260", nullptr));
        toolBarMainTools->setWindowTitle(QCoreApplication::translate("MainWindow", "Main tools", nullptr));
#if QT_CONFIG(tooltip)
        toolBarMainTools->setToolTip(QCoreApplication::translate("MainWindow", "Main tools", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBarSFTools->setWindowTitle(QCoreApplication::translate("MainWindow", "Scalar field tools", nullptr));
#if QT_CONFIG(tooltip)
        toolBarSFTools->setToolTip(QCoreApplication::translate("MainWindow", "Scalar field tools", nullptr));
#endif // QT_CONFIG(tooltip)
        Dockable_2->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\261\236\346\200\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
