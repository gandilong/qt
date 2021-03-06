#ifdef __cplusplus
extern "C" {
#endif

#include "cgoutil.h"

// AlignmentFlag
int Qt_AlignLeft();
int Qt_AlignRight();
int Qt_AlignHCenter();
int Qt_AlignJustify();
int Qt_AlignTop();
int Qt_AlignBottom();
int Qt_AlignVCenter();
int Qt_AlignBaseline();
int Qt_AlignCenter();
int Qt_AlignAbsolute();
int Qt_AlignLeading();
int Qt_AlignTrailing();
int Qt_AlignHorizontal_Mask();
int Qt_AlignVertical_Mask();

// AnchorPoint
int Qt_AnchorLeft();
int Qt_AnchorHorizontalCenter();
int Qt_AnchorRight();
int Qt_AnchorTop();
int Qt_AnchorVerticalCenter();
int Qt_AnchorBottom();

// ApplicationAttribute
int Qt_AA_DontShowIconsInMenus();
int Qt_AA_NativeWindows();
int Qt_AA_DontCreateNativeWidgetSiblings();
int Qt_AA_MacPluginApplication();
int Qt_AA_DontUseNativeMenuBar();
int Qt_AA_MacDontSwapCtrlAndMeta();
int Qt_AA_Use96Dpi();
int Qt_AA_X11InitThreads();
int Qt_AA_SynthesizeTouchForUnhandledMouseEvents();
int Qt_AA_SynthesizeMouseForUnhandledTouchEvents();
int Qt_AA_UseHighDpiPixmaps();
int Qt_AA_ForceRasterWidgets();
int Qt_AA_UseDesktopOpenGL();
int Qt_AA_UseOpenGLES();
int Qt_AA_ImmediateWidgetCreation();
int Qt_AA_MSWindowsUseDirect3DByDefault();

// ApplicationState
int Qt_ApplicationSuspended();
int Qt_ApplicationHidden();
int Qt_ApplicationInactive();
int Qt_ApplicationActive();

// ArrowType
int Qt_NoArrow();
int Qt_UpArrow();
int Qt_DownArrow();
int Qt_LeftArrow();
int Qt_RightArrow();

// AspectRatioMode
int Qt_IgnoreAspectRatio();
int Qt_KeepAspectRatio();
int Qt_KeepAspectRatioByExpanding();

// Axis
int Qt_XAxis();
int Qt_YAxis();
int Qt_ZAxis();

// BGMode
int Qt_TransparentMode();
int Qt_OpaqueMode();

// BrushStyle
int Qt_NoBrush();
int Qt_SolidPattern();
int Qt_Dense1Pattern();
int Qt_Dense2Pattern();
int Qt_Dense3Pattern();
int Qt_Dense4Pattern();
int Qt_Dense5Pattern();
int Qt_Dense6Pattern();
int Qt_Dense7Pattern();
int Qt_HorPattern();
int Qt_VerPattern();
int Qt_CrossPattern();
int Qt_BDiagPattern();
int Qt_FDiagPattern();
int Qt_DiagCrossPattern();
int Qt_LinearGradientPattern();
int Qt_ConicalGradientPattern();
int Qt_RadialGradientPattern();
int Qt_TexturePattern();

// CaseSensitivity
int Qt_CaseInsensitive();
int Qt_CaseSensitive();

// CheckState
int Qt_Unchecked();
int Qt_PartiallyChecked();
int Qt_Checked();

// ClipOperation
int Qt_NoClip();
int Qt_ReplaceClip();
int Qt_IntersectClip();

// ConnectionType
int Qt_AutoConnection();
int Qt_DirectConnection();
int Qt_QueuedConnection();
int Qt_BlockingQueuedConnection();
int Qt_UniqueConnection();

// ContextMenuPolicy
int Qt_NoContextMenu();
int Qt_PreventContextMenu();
int Qt_DefaultContextMenu();
int Qt_ActionsContextMenu();
int Qt_CustomContextMenu();

// CoordinateSystem
int Qt_DeviceCoordinates();
int Qt_LogicalCoordinates();

// Corner
int Qt_TopLeftCorner();
int Qt_TopRightCorner();
int Qt_BottomLeftCorner();
int Qt_BottomRightCorner();

// CursorMoveStyle
int Qt_LogicalMoveStyle();
int Qt_VisualMoveStyle();

// CursorShape
int Qt_ArrowCursor();
int Qt_UpArrowCursor();
int Qt_CrossCursor();
int Qt_WaitCursor();
int Qt_IBeamCursor();
int Qt_SizeVerCursor();
int Qt_SizeHorCursor();
int Qt_SizeBDiagCursor();
int Qt_SizeFDiagCursor();
int Qt_SizeAllCursor();
int Qt_BlankCursor();
int Qt_SplitVCursor();
int Qt_SplitHCursor();
int Qt_PointingHandCursor();
int Qt_ForbiddenCursor();
int Qt_OpenHandCursor();
int Qt_ClosedHandCursor();
int Qt_WhatsThisCursor();
int Qt_BusyCursor();
int Qt_DragMoveCursor();
int Qt_DragCopyCursor();
int Qt_DragLinkCursor();
int Qt_BitmapCursor();

// DateFormat
int Qt_TextDate();
int Qt_ISODate();
int Qt_SystemLocaleShortDate();
int Qt_SystemLocaleLongDate();
int Qt_DefaultLocaleShortDate();
int Qt_DefaultLocaleLongDate();
int Qt_SystemLocaleDate();
int Qt_LocaleDate();
int Qt_LocalDate();
int Qt_RFC2822Date();

// DayOfWeek
int Qt_Monday();
int Qt_Tuesday();
int Qt_Wednesday();
int Qt_Thursday();
int Qt_Friday();
int Qt_Saturday();
int Qt_Sunday();

// DockWidgetArea
int Qt_LeftDockWidgetArea();
int Qt_RightDockWidgetArea();
int Qt_TopDockWidgetArea();
int Qt_BottomDockWidgetArea();
int Qt_AllDockWidgetAreas();
int Qt_NoDockWidgetArea();

// DropAction
int Qt_CopyAction();
int Qt_MoveAction();
int Qt_LinkAction();
int Qt_ActionMask();
int Qt_IgnoreAction();
int Qt_TargetMoveAction();

// Edge
int Qt_TopEdge();
int Qt_LeftEdge();
int Qt_RightEdge();
int Qt_BottomEdge();

// EventPriority
int Qt_HighEventPriority();
int Qt_NormalEventPriority();
int Qt_LowEventPriority();

// FillRule
int Qt_OddEvenFill();
int Qt_WindingFill();

// FindChildOption
int Qt_FindDirectChildrenOnly();
int Qt_FindChildrenRecursively();

// FocusPolicy
int Qt_TabFocus();
int Qt_ClickFocus();
int Qt_StrongFocus();
int Qt_WheelFocus();
int Qt_NoFocus();

// FocusReason
int Qt_MouseFocusReason();
int Qt_TabFocusReason();
int Qt_BacktabFocusReason();
int Qt_ActiveWindowFocusReason();
int Qt_PopupFocusReason();
int Qt_ShortcutFocusReason();
int Qt_MenuBarFocusReason();
int Qt_OtherFocusReason();

// GestureFlag
int Qt_DontStartGestureOnChildren();
int Qt_ReceivePartialGestures();
int Qt_IgnoredGesturesPropagateToParent();

// GestureState
int Qt_GestureStarted();
int Qt_GestureUpdated();
int Qt_GestureFinished();
int Qt_GestureCanceled();

// GestureType
int Qt_TapGesture();
int Qt_TapAndHoldGesture();
int Qt_PanGesture();
int Qt_PinchGesture();
int Qt_SwipeGesture();
int Qt_CustomGesture();

// GlobalColor
int Qt_white();
int Qt_black();
int Qt_red();
int Qt_darkRed();
int Qt_green();
int Qt_darkGreen();
int Qt_blue();
int Qt_darkBlue();
int Qt_cyan();
int Qt_darkCyan();
int Qt_magenta();
int Qt_darkMagenta();
int Qt_yellow();
int Qt_darkYellow();
int Qt_gray();
int Qt_darkGray();
int Qt_lightGray();
int Qt_transparent();
int Qt_color0();
int Qt_color1();

// HitTestAccuracy
int Qt_ExactHit();
int Qt_FuzzyHit();

// ImageConversionFlag
int Qt_AutoColor();
int Qt_ColorOnly();
int Qt_MonoOnly();
int Qt_DiffuseDither();
int Qt_OrderedDither();
int Qt_ThresholdDither();
int Qt_ThresholdAlphaDither();
int Qt_OrderedAlphaDither();
int Qt_DiffuseAlphaDither();
int Qt_PreferDither();
int Qt_AvoidDither();
int Qt_NoOpaqueDetection();
int Qt_NoFormatConversion();

// InputMethodHint
int Qt_ImhNone();
int Qt_ImhHiddenText();
int Qt_ImhSensitiveData();
int Qt_ImhNoAutoUppercase();
int Qt_ImhPreferNumbers();
int Qt_ImhPreferUppercase();
int Qt_ImhPreferLowercase();
int Qt_ImhNoPredictiveText();
int Qt_ImhDate();
int Qt_ImhTime();
int Qt_ImhPreferLatin();
int Qt_ImhMultiLine();
int Qt_ImhDigitsOnly();
int Qt_ImhFormattedNumbersOnly();
int Qt_ImhUppercaseOnly();
int Qt_ImhLowercaseOnly();
int Qt_ImhDialableCharactersOnly();
int Qt_ImhEmailCharactersOnly();
int Qt_ImhUrlCharactersOnly();
int Qt_ImhLatinOnly();
int Qt_ImhExclusiveInputMask();

// InputMethodQuery
int Qt_ImEnabled();
int Qt_ImMicroFocus();
int Qt_ImCursorRectangle();
int Qt_ImFont();
int Qt_ImCursorPosition();
int Qt_ImSurroundingText();
int Qt_ImCurrentSelection();
int Qt_ImMaximumTextLength();
int Qt_ImAnchorPosition();
int Qt_ImHints();
int Qt_ImPreferredLanguage();
int Qt_ImPlatformData();
int Qt_ImAbsolutePosition();
int Qt_ImTextBeforeCursor();
int Qt_ImTextAfterCursor();
int Qt_ImQueryInput();
int Qt_ImQueryAll();

// ItemDataRole
int Qt_DisplayRole();
int Qt_DecorationRole();
int Qt_EditRole();
int Qt_ToolTipRole();
int Qt_StatusTipRole();
int Qt_WhatsThisRole();
int Qt_SizeHintRole();
int Qt_FontRole();
int Qt_TextAlignmentRole();
int Qt_BackgroundRole();
int Qt_BackgroundColorRole();
int Qt_ForegroundRole();
int Qt_TextColorRole();
int Qt_CheckStateRole();
int Qt_InitialSortOrderRole();
int Qt_AccessibleTextRole();
int Qt_AccessibleDescriptionRole();
int Qt_UserRole();

// ItemFlag
int Qt_NoItemFlags();
int Qt_ItemIsSelectable();
int Qt_ItemIsEditable();
int Qt_ItemIsDragEnabled();
int Qt_ItemIsDropEnabled();
int Qt_ItemIsUserCheckable();
int Qt_ItemIsEnabled();
int Qt_ItemIsTristate();
int Qt_ItemNeverHasChildren();

// ItemSelectionMode
int Qt_ContainsItemShape();
int Qt_IntersectsItemShape();
int Qt_ContainsItemBoundingRect();
int Qt_IntersectsItemBoundingRect();

// Key
int Qt_Key_Escape();
int Qt_Key_Tab();
int Qt_Key_Backtab();
int Qt_Key_Backspace();
int Qt_Key_Return();
int Qt_Key_Enter();
int Qt_Key_Insert();
int Qt_Key_Delete();
int Qt_Key_Pause();
int Qt_Key_Print();
int Qt_Key_SysReq();
int Qt_Key_Clear();
int Qt_Key_Home();
int Qt_Key_End();
int Qt_Key_Left();
int Qt_Key_Up();
int Qt_Key_Right();
int Qt_Key_Down();
int Qt_Key_PageUp();
int Qt_Key_PageDown();
int Qt_Key_Shift();
int Qt_Key_Control();
int Qt_Key_Meta();
int Qt_Key_Alt();
int Qt_Key_AltGr();
int Qt_Key_CapsLock();
int Qt_Key_NumLock();
int Qt_Key_ScrollLock();
int Qt_Key_F1();
int Qt_Key_F2();
int Qt_Key_F3();
int Qt_Key_F4();
int Qt_Key_F5();
int Qt_Key_F6();
int Qt_Key_F7();
int Qt_Key_F8();
int Qt_Key_F9();
int Qt_Key_F10();
int Qt_Key_F11();
int Qt_Key_F12();
int Qt_Key_F13();
int Qt_Key_F14();
int Qt_Key_F15();
int Qt_Key_F16();
int Qt_Key_F17();
int Qt_Key_F18();
int Qt_Key_F19();
int Qt_Key_F20();
int Qt_Key_F21();
int Qt_Key_F22();
int Qt_Key_F23();
int Qt_Key_F24();
int Qt_Key_F25();
int Qt_Key_F26();
int Qt_Key_F27();
int Qt_Key_F28();
int Qt_Key_F29();
int Qt_Key_F30();
int Qt_Key_F31();
int Qt_Key_F32();
int Qt_Key_F33();
int Qt_Key_F34();
int Qt_Key_F35();
int Qt_Key_Super_L();
int Qt_Key_Super_R();
int Qt_Key_Menu();
int Qt_Key_Hyper_L();
int Qt_Key_Hyper_R();
int Qt_Key_Help();
int Qt_Key_Direction_L();
int Qt_Key_Direction_R();
int Qt_Key_Space();
int Qt_Key_Any();
int Qt_Key_Exclam();
int Qt_Key_QuoteDbl();
int Qt_Key_NumberSign();
int Qt_Key_Dollar();
int Qt_Key_Percent();
int Qt_Key_Ampersand();
int Qt_Key_Apostrophe();
int Qt_Key_ParenLeft();
int Qt_Key_ParenRight();
int Qt_Key_Asterisk();
int Qt_Key_Plus();
int Qt_Key_Comma();
int Qt_Key_Minus();
int Qt_Key_Period();
int Qt_Key_Slash();
int Qt_Key_0();
int Qt_Key_1();
int Qt_Key_2();
int Qt_Key_3();
int Qt_Key_4();
int Qt_Key_5();
int Qt_Key_6();
int Qt_Key_7();
int Qt_Key_8();
int Qt_Key_9();
int Qt_Key_Colon();
int Qt_Key_Semicolon();
int Qt_Key_Less();
int Qt_Key_Equal();
int Qt_Key_Greater();
int Qt_Key_Question();
int Qt_Key_At();
int Qt_Key_A();
int Qt_Key_B();
int Qt_Key_C();
int Qt_Key_D();
int Qt_Key_E();
int Qt_Key_F();
int Qt_Key_G();
int Qt_Key_H();
int Qt_Key_I();
int Qt_Key_J();
int Qt_Key_K();
int Qt_Key_L();
int Qt_Key_M();
int Qt_Key_N();
int Qt_Key_O();
int Qt_Key_P();
int Qt_Key_Q();
int Qt_Key_R();
int Qt_Key_S();
int Qt_Key_T();
int Qt_Key_U();
int Qt_Key_V();
int Qt_Key_W();
int Qt_Key_X();
int Qt_Key_Y();
int Qt_Key_Z();
int Qt_Key_BracketLeft();
int Qt_Key_Backslash();
int Qt_Key_BracketRight();
int Qt_Key_AsciiCircum();
int Qt_Key_Underscore();
int Qt_Key_QuoteLeft();
int Qt_Key_BraceLeft();
int Qt_Key_Bar();
int Qt_Key_BraceRight();
int Qt_Key_AsciiTilde();
int Qt_Key_nobreakspace();
int Qt_Key_exclamdown();
int Qt_Key_cent();
int Qt_Key_sterling();
int Qt_Key_currency();
int Qt_Key_yen();
int Qt_Key_brokenbar();
int Qt_Key_section();
int Qt_Key_diaeresis();
int Qt_Key_copyright();
int Qt_Key_ordfeminine();
int Qt_Key_guillemotleft();
int Qt_Key_notsign();
int Qt_Key_hyphen();
int Qt_Key_registered();
int Qt_Key_macron();
int Qt_Key_degree();
int Qt_Key_plusminus();
int Qt_Key_twosuperior();
int Qt_Key_threesuperior();
int Qt_Key_acute();
int Qt_Key_mu();
int Qt_Key_paragraph();
int Qt_Key_periodcentered();
int Qt_Key_cedilla();
int Qt_Key_onesuperior();
int Qt_Key_masculine();
int Qt_Key_guillemotright();
int Qt_Key_onequarter();
int Qt_Key_onehalf();
int Qt_Key_threequarters();
int Qt_Key_questiondown();
int Qt_Key_Agrave();
int Qt_Key_Aacute();
int Qt_Key_Acircumflex();
int Qt_Key_Atilde();
int Qt_Key_Adiaeresis();
int Qt_Key_Aring();
int Qt_Key_AE();
int Qt_Key_Ccedilla();
int Qt_Key_Egrave();
int Qt_Key_Eacute();
int Qt_Key_Ecircumflex();
int Qt_Key_Ediaeresis();
int Qt_Key_Igrave();
int Qt_Key_Iacute();
int Qt_Key_Icircumflex();
int Qt_Key_Idiaeresis();
int Qt_Key_ETH();
int Qt_Key_Ntilde();
int Qt_Key_Ograve();
int Qt_Key_Oacute();
int Qt_Key_Ocircumflex();
int Qt_Key_Otilde();
int Qt_Key_Odiaeresis();
int Qt_Key_multiply();
int Qt_Key_Ooblique();
int Qt_Key_Ugrave();
int Qt_Key_Uacute();
int Qt_Key_Ucircumflex();
int Qt_Key_Udiaeresis();
int Qt_Key_Yacute();
int Qt_Key_THORN();
int Qt_Key_ssharp();
int Qt_Key_division();
int Qt_Key_ydiaeresis();
int Qt_Key_Multi_key();
int Qt_Key_Codeinput();
int Qt_Key_SingleCandidate();
int Qt_Key_MultipleCandidate();
int Qt_Key_PreviousCandidate();
int Qt_Key_Mode_switch();
int Qt_Key_Kanji();
int Qt_Key_Muhenkan();
int Qt_Key_Henkan();
int Qt_Key_Romaji();
int Qt_Key_Hiragana();
int Qt_Key_Katakana();
int Qt_Key_Hiragana_Katakana();
int Qt_Key_Zenkaku();
int Qt_Key_Hankaku();
int Qt_Key_Zenkaku_Hankaku();
int Qt_Key_Touroku();
int Qt_Key_Massyo();
int Qt_Key_Kana_Lock();
int Qt_Key_Kana_Shift();
int Qt_Key_Eisu_Shift();
int Qt_Key_Eisu_toggle();
int Qt_Key_Hangul();
int Qt_Key_Hangul_Start();
int Qt_Key_Hangul_End();
int Qt_Key_Hangul_Hanja();
int Qt_Key_Hangul_Jamo();
int Qt_Key_Hangul_Romaja();
int Qt_Key_Hangul_Jeonja();
int Qt_Key_Hangul_Banja();
int Qt_Key_Hangul_PreHanja();
int Qt_Key_Hangul_PostHanja();
int Qt_Key_Hangul_Special();
int Qt_Key_Dead_Grave();
int Qt_Key_Dead_Acute();
int Qt_Key_Dead_Circumflex();
int Qt_Key_Dead_Tilde();
int Qt_Key_Dead_Macron();
int Qt_Key_Dead_Breve();
int Qt_Key_Dead_Abovedot();
int Qt_Key_Dead_Diaeresis();
int Qt_Key_Dead_Abovering();
int Qt_Key_Dead_Doubleacute();
int Qt_Key_Dead_Caron();
int Qt_Key_Dead_Cedilla();
int Qt_Key_Dead_Ogonek();
int Qt_Key_Dead_Iota();
int Qt_Key_Dead_Voiced_Sound();
int Qt_Key_Dead_Semivoiced_Sound();
int Qt_Key_Dead_Belowdot();
int Qt_Key_Dead_Hook();
int Qt_Key_Dead_Horn();
int Qt_Key_Back();
int Qt_Key_Forward();
int Qt_Key_Stop();
int Qt_Key_Refresh();
int Qt_Key_VolumeDown();
int Qt_Key_VolumeMute();
int Qt_Key_VolumeUp();
int Qt_Key_BassBoost();
int Qt_Key_BassUp();
int Qt_Key_BassDown();
int Qt_Key_TrebleUp();
int Qt_Key_TrebleDown();
int Qt_Key_MediaPlay();
int Qt_Key_MediaStop();
int Qt_Key_MediaPrevious();
int Qt_Key_MediaNext();
int Qt_Key_MediaRecord();
int Qt_Key_MediaPause();
int Qt_Key_MediaTogglePlayPause();
int Qt_Key_HomePage();
int Qt_Key_Favorites();
int Qt_Key_Search();
int Qt_Key_Standby();
int Qt_Key_OpenUrl();
int Qt_Key_LaunchMail();
int Qt_Key_LaunchMedia();
int Qt_Key_Launch0();
int Qt_Key_Launch1();
int Qt_Key_Launch2();
int Qt_Key_Launch3();
int Qt_Key_Launch4();
int Qt_Key_Launch5();
int Qt_Key_Launch6();
int Qt_Key_Launch7();
int Qt_Key_Launch8();
int Qt_Key_Launch9();
int Qt_Key_LaunchA();
int Qt_Key_LaunchB();
int Qt_Key_LaunchC();
int Qt_Key_LaunchD();
int Qt_Key_LaunchE();
int Qt_Key_LaunchF();
int Qt_Key_LaunchG();
int Qt_Key_LaunchH();
int Qt_Key_MonBrightnessUp();
int Qt_Key_MonBrightnessDown();
int Qt_Key_KeyboardLightOnOff();
int Qt_Key_KeyboardBrightnessUp();
int Qt_Key_KeyboardBrightnessDown();
int Qt_Key_PowerOff();
int Qt_Key_WakeUp();
int Qt_Key_Eject();
int Qt_Key_ScreenSaver();
int Qt_Key_WWW();
int Qt_Key_Memo();
int Qt_Key_LightBulb();
int Qt_Key_Shop();
int Qt_Key_History();
int Qt_Key_AddFavorite();
int Qt_Key_HotLinks();
int Qt_Key_BrightnessAdjust();
int Qt_Key_Finance();
int Qt_Key_Community();
int Qt_Key_AudioRewind();
int Qt_Key_BackForward();
int Qt_Key_ApplicationLeft();
int Qt_Key_ApplicationRight();
int Qt_Key_Book();
int Qt_Key_CD();
int Qt_Key_Calculator();
int Qt_Key_ToDoList();
int Qt_Key_ClearGrab();
int Qt_Key_Close();
int Qt_Key_Copy();
int Qt_Key_Cut();
int Qt_Key_Display();
int Qt_Key_DOS();
int Qt_Key_Documents();
int Qt_Key_Excel();
int Qt_Key_Explorer();
int Qt_Key_Game();
int Qt_Key_Go();
int Qt_Key_iTouch();
int Qt_Key_LogOff();
int Qt_Key_Market();
int Qt_Key_Meeting();
int Qt_Key_MenuKB();
int Qt_Key_MenuPB();
int Qt_Key_MySites();
int Qt_Key_News();
int Qt_Key_OfficeHome();
int Qt_Key_Option();
int Qt_Key_Paste();
int Qt_Key_Phone();
int Qt_Key_Calendar();
int Qt_Key_Reply();
int Qt_Key_Reload();
int Qt_Key_RotateWindows();
int Qt_Key_RotationPB();
int Qt_Key_RotationKB();
int Qt_Key_Save();
int Qt_Key_Send();
int Qt_Key_Spell();
int Qt_Key_SplitScreen();
int Qt_Key_Support();
int Qt_Key_TaskPane();
int Qt_Key_Terminal();
int Qt_Key_Tools();
int Qt_Key_Travel();
int Qt_Key_Video();
int Qt_Key_Word();
int Qt_Key_Xfer();
int Qt_Key_ZoomIn();
int Qt_Key_ZoomOut();
int Qt_Key_Away();
int Qt_Key_Messenger();
int Qt_Key_WebCam();
int Qt_Key_MailForward();
int Qt_Key_Pictures();
int Qt_Key_Music();
int Qt_Key_Battery();
int Qt_Key_Bluetooth();
int Qt_Key_WLAN();
int Qt_Key_UWB();
int Qt_Key_AudioForward();
int Qt_Key_AudioRepeat();
int Qt_Key_AudioRandomPlay();
int Qt_Key_Subtitle();
int Qt_Key_AudioCycleTrack();
int Qt_Key_Time();
int Qt_Key_Hibernate();
int Qt_Key_View();
int Qt_Key_TopMenu();
int Qt_Key_PowerDown();
int Qt_Key_Suspend();
int Qt_Key_ContrastAdjust();
int Qt_Key_TouchpadToggle();
int Qt_Key_TouchpadOn();
int Qt_Key_TouchpadOff();
int Qt_Key_MicMute();
int Qt_Key_Red();
int Qt_Key_Green();
int Qt_Key_Yellow();
int Qt_Key_Blue();
int Qt_Key_ChannelUp();
int Qt_Key_ChannelDown();
int Qt_Key_MediaLast();
int Qt_Key_unknown();
int Qt_Key_Call();
int Qt_Key_Camera();
int Qt_Key_CameraFocus();
int Qt_Key_Context1();
int Qt_Key_Context2();
int Qt_Key_Context3();
int Qt_Key_Context4();
int Qt_Key_Flip();
int Qt_Key_Hangup();
int Qt_Key_No();
int Qt_Key_Select();
int Qt_Key_Yes();
int Qt_Key_ToggleCallHangup();
int Qt_Key_VoiceDial();
int Qt_Key_LastNumberRedial();
int Qt_Key_Execute();
int Qt_Key_Printer();
int Qt_Key_Play();
int Qt_Key_Sleep();
int Qt_Key_Zoom();
int Qt_Key_Cancel();

// KeyboardModifier
int Qt_NoModifier();
int Qt_ShiftModifier();
int Qt_ControlModifier();
int Qt_AltModifier();
int Qt_MetaModifier();
int Qt_KeypadModifier();
int Qt_GroupSwitchModifier();

// LayoutDirection
int Qt_LeftToRight();
int Qt_RightToLeft();
int Qt_LayoutDirectionAuto();

// MaskMode
int Qt_MaskInColor();
int Qt_MaskOutColor();

// MatchFlag
int Qt_MatchExactly();
int Qt_MatchFixedString();
int Qt_MatchContains();
int Qt_MatchStartsWith();
int Qt_MatchEndsWith();
int Qt_MatchCaseSensitive();
int Qt_MatchRegExp();
int Qt_MatchWildcard();
int Qt_MatchWrap();
int Qt_MatchRecursive();

// Modifier
int Qt_SHIFT();
int Qt_META();
int Qt_CTRL();
int Qt_ALT();
int Qt_UNICODE_ACCEL();

// MouseButton
int Qt_NoButton();
int Qt_AllButtons();
int Qt_LeftButton();
int Qt_RightButton();
int Qt_MidButton();
int Qt_MiddleButton();
int Qt_BackButton();
int Qt_XButton1();
int Qt_ExtraButton1();
int Qt_ForwardButton();
int Qt_XButton2();
int Qt_ExtraButton2();
int Qt_TaskButton();
int Qt_ExtraButton3();
int Qt_ExtraButton4();
int Qt_ExtraButton5();
int Qt_ExtraButton6();
int Qt_ExtraButton7();
int Qt_ExtraButton8();
int Qt_ExtraButton9();
int Qt_ExtraButton10();
int Qt_ExtraButton11();
int Qt_ExtraButton12();
int Qt_ExtraButton13();
int Qt_ExtraButton14();
int Qt_ExtraButton15();
int Qt_ExtraButton16();
int Qt_ExtraButton17();
int Qt_ExtraButton18();
int Qt_ExtraButton19();
int Qt_ExtraButton20();
int Qt_ExtraButton21();
int Qt_ExtraButton22();
int Qt_ExtraButton23();
int Qt_ExtraButton24();

// MouseEventFlag
int Qt_MouseEventCreatedDoubleClick();

// MouseEventSource
int Qt_MouseEventNotSynthesized();
int Qt_MouseEventSynthesizedBySystem();
int Qt_MouseEventSynthesizedByQt();

// NativeGestureType

// NavigationMode
int Qt_NavigationModeNone();
int Qt_NavigationModeKeypadTabOrder();
int Qt_NavigationModeKeypadDirectional();
int Qt_NavigationModeCursorAuto();
int Qt_NavigationModeCursorForceVisible();

// Orientation
int Qt_Horizontal();
int Qt_Vertical();

// PenCapStyle
int Qt_SquareCap();
int Qt_FlatCap();
int Qt_RoundCap();

// PenJoinStyle
int Qt_BevelJoin();
int Qt_MiterJoin();
int Qt_RoundJoin();
int Qt_SvgMiterJoin();

// PenStyle
int Qt_SolidLine();
int Qt_DashDotLine();
int Qt_NoPen();
int Qt_DashLine();
int Qt_DotLine();
int Qt_DashDotDotLine();
int Qt_CustomDashLine();

// ScreenOrientation
int Qt_PrimaryOrientation();
int Qt_LandscapeOrientation();
int Qt_PortraitOrientation();
int Qt_InvertedLandscapeOrientation();
int Qt_InvertedPortraitOrientation();

// ScrollBarPolicy
int Qt_ScrollBarAsNeeded();
int Qt_ScrollBarAlwaysOff();
int Qt_ScrollBarAlwaysOn();

// ScrollPhase
int Qt_ScrollBegin();
int Qt_ScrollUpdate();
int Qt_ScrollEnd();

// ShortcutContext
int Qt_WidgetShortcut();
int Qt_WidgetWithChildrenShortcut();
int Qt_WindowShortcut();
int Qt_ApplicationShortcut();

// SizeHint
int Qt_MinimumSize();
int Qt_PreferredSize();
int Qt_MaximumSize();
int Qt_MinimumDescent();

// SizeMode
int Qt_AbsoluteSize();
int Qt_RelativeSize();

// SortOrder
int Qt_AscendingOrder();
int Qt_DescendingOrder();

// TextElideMode
int Qt_ElideLeft();
int Qt_ElideRight();
int Qt_ElideMiddle();
int Qt_ElideNone();

// TextFlag
int Qt_TextSingleLine();
int Qt_TextDontClip();
int Qt_TextExpandTabs();
int Qt_TextShowMnemonic();
int Qt_TextWordWrap();
int Qt_TextWrapAnywhere();
int Qt_TextHideMnemonic();
int Qt_TextDontPrint();
int Qt_TextIncludeTrailingSpaces();
int Qt_TextJustificationForced();

// TextFormat
int Qt_PlainText();
int Qt_RichText();
int Qt_AutoText();

// TextInteractionFlag
int Qt_NoTextInteraction();
int Qt_TextSelectableByMouse();
int Qt_TextSelectableByKeyboard();
int Qt_LinksAccessibleByMouse();
int Qt_LinksAccessibleByKeyboard();
int Qt_TextEditable();
int Qt_TextEditorInteraction();
int Qt_TextBrowserInteraction();

// TileRule
int Qt_StretchTile();
int Qt_RepeatTile();
int Qt_RoundTile();

// TimeSpec
int Qt_LocalTime();
int Qt_UTC();
int Qt_OffsetFromUTC();
int Qt_TimeZone();

// TimerType
int Qt_PreciseTimer();
int Qt_CoarseTimer();
int Qt_VeryCoarseTimer();

// ToolBarArea
int Qt_LeftToolBarArea();
int Qt_RightToolBarArea();
int Qt_TopToolBarArea();
int Qt_BottomToolBarArea();
int Qt_AllToolBarAreas();
int Qt_NoToolBarArea();

// ToolButtonStyle
int Qt_ToolButtonIconOnly();
int Qt_ToolButtonTextOnly();
int Qt_ToolButtonTextBesideIcon();
int Qt_ToolButtonTextUnderIcon();
int Qt_ToolButtonFollowStyle();

// TouchPointState
int Qt_TouchPointPressed();
int Qt_TouchPointMoved();
int Qt_TouchPointStationary();
int Qt_TouchPointReleased();

// TransformationMode
int Qt_FastTransformation();
int Qt_SmoothTransformation();

// UIEffect
int Qt_UI_AnimateMenu();
int Qt_UI_FadeMenu();
int Qt_UI_AnimateCombo();
int Qt_UI_AnimateTooltip();
int Qt_UI_FadeTooltip();
int Qt_UI_AnimateToolBox();

// WhiteSpaceMode
int Qt_WhiteSpaceNormal();
int Qt_WhiteSpacePre();
int Qt_WhiteSpaceNoWrap();

// WidgetAttribute
int Qt_WA_AcceptDrops();
int Qt_WA_AlwaysShowToolTips();
int Qt_WA_ContentsPropagated();
int Qt_WA_CustomWhatsThis();
int Qt_WA_DeleteOnClose();
int Qt_WA_Disabled();
int Qt_WA_DontShowOnScreen();
int Qt_WA_ForceDisabled();
int Qt_WA_ForceUpdatesDisabled();
int Qt_WA_GroupLeader();
int Qt_WA_Hover();
int Qt_WA_InputMethodEnabled();
int Qt_WA_KeyboardFocusChange();
int Qt_WA_KeyCompression();
int Qt_WA_LayoutOnEntireRect();
int Qt_WA_LayoutUsesWidgetRect();
int Qt_WA_MacNoClickThrough();
int Qt_WA_MacOpaqueSizeGrip();
int Qt_WA_MacShowFocusRect();
int Qt_WA_MacNormalSize();
int Qt_WA_MacSmallSize();
int Qt_WA_MacMiniSize();
int Qt_WA_MacVariableSize();
int Qt_WA_MacBrushedMetal();
int Qt_WA_Mapped();
int Qt_WA_MouseNoMask();
int Qt_WA_MouseTracking();
int Qt_WA_Moved();
int Qt_WA_MSWindowsUseDirect3D();
int Qt_WA_NoBackground();
int Qt_WA_NoChildEventsForParent();
int Qt_WA_NoChildEventsFromChildren();
int Qt_WA_NoMouseReplay();
int Qt_WA_NoMousePropagation();
int Qt_WA_TransparentForMouseEvents();
int Qt_WA_NoSystemBackground();
int Qt_WA_OpaquePaintEvent();
int Qt_WA_OutsideWSRange();
int Qt_WA_PaintOnScreen();
int Qt_WA_PaintUnclipped();
int Qt_WA_PendingMoveEvent();
int Qt_WA_PendingResizeEvent();
int Qt_WA_QuitOnClose();
int Qt_WA_Resized();
int Qt_WA_RightToLeft();
int Qt_WA_SetCursor();
int Qt_WA_SetFont();
int Qt_WA_SetPalette();
int Qt_WA_SetStyle();
int Qt_WA_ShowModal();
int Qt_WA_StaticContents();
int Qt_WA_StyleSheet();
int Qt_WA_TranslucentBackground();
int Qt_WA_UnderMouse();
int Qt_WA_UpdatesDisabled();
int Qt_WA_WindowModified();
int Qt_WA_WindowPropagation();
int Qt_WA_MacAlwaysShowToolWindow();
int Qt_WA_SetLocale();
int Qt_WA_StyledBackground();
int Qt_WA_ShowWithoutActivating();
int Qt_WA_NativeWindow();
int Qt_WA_DontCreateNativeAncestors();
int Qt_WA_X11NetWmWindowTypeDesktop();
int Qt_WA_X11NetWmWindowTypeDock();
int Qt_WA_X11NetWmWindowTypeToolBar();
int Qt_WA_X11NetWmWindowTypeMenu();
int Qt_WA_X11NetWmWindowTypeUtility();
int Qt_WA_X11NetWmWindowTypeSplash();
int Qt_WA_X11NetWmWindowTypeDialog();
int Qt_WA_X11NetWmWindowTypeDropDownMenu();
int Qt_WA_X11NetWmWindowTypePopupMenu();
int Qt_WA_X11NetWmWindowTypeToolTip();
int Qt_WA_X11NetWmWindowTypeNotification();
int Qt_WA_X11NetWmWindowTypeCombo();
int Qt_WA_X11NetWmWindowTypeDND();
int Qt_WA_MacFrameworkScaled();
int Qt_WA_AcceptTouchEvents();
int Qt_WA_TouchPadAcceptSingleTouchEvents();
int Qt_WA_X11DoNotAcceptFocus();

// WindowFrameSection
int Qt_NoSection();
int Qt_LeftSection();
int Qt_TopLeftSection();
int Qt_TopSection();
int Qt_TopRightSection();
int Qt_RightSection();
int Qt_BottomRightSection();
int Qt_BottomSection();
int Qt_BottomLeftSection();
int Qt_TitleBarArea();

// WindowModality
int Qt_NonModal();
int Qt_WindowModal();
int Qt_ApplicationModal();

// WindowState
int Qt_WindowNoState();
int Qt_WindowMinimized();
int Qt_WindowMaximized();
int Qt_WindowFullScreen();
int Qt_WindowActive();

// WindowType
int Qt_Widget();
int Qt_Window();
int Qt_Dialog();
int Qt_Sheet();
int Qt_Drawer();
int Qt_Popup();
int Qt_Tool();
int Qt_ToolTip();
int Qt_SplashScreen();
int Qt_Desktop();
int Qt_SubWindow();
int Qt_ForeignWindow();
int Qt_CoverWindow();
int Qt_MSWindowsFixedSizeDialogHint();
int Qt_MSWindowsOwnDC();
int Qt_BypassWindowManagerHint();
int Qt_X11BypassWindowManagerHint();
int Qt_FramelessWindowHint();
int Qt_NoDropShadowWindowHint();
int Qt_CustomizeWindowHint();
int Qt_WindowTitleHint();
int Qt_WindowSystemMenuHint();
int Qt_WindowMinimizeButtonHint();
int Qt_WindowMaximizeButtonHint();
int Qt_WindowMinMaxButtonsHint();
int Qt_WindowCloseButtonHint();
int Qt_WindowContextHelpButtonHint();
int Qt_MacWindowToolBarButtonHint();
int Qt_WindowFullscreenButtonHint();
int Qt_BypassGraphicsProxyWidget();
int Qt_WindowShadeButtonHint();
int Qt_WindowStaysOnTopHint();
int Qt_WindowStaysOnBottomHint();
int Qt_WindowOkButtonHint();
int Qt_WindowCancelButtonHint();
int Qt_WindowTransparentForInput();
int Qt_WindowOverridesSystemGestures();
int Qt_WindowDoesNotAcceptFocus();
int Qt_WindowType_Mask();

#ifdef __cplusplus
}
#endif
