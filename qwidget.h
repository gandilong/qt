#ifdef __cplusplus
extern "C" {
#endif

#include "cgoutil.h"

//Public Functions
QtObjectPtr QWidget_New_QWidget_WindowType(QtObjectPtr parent, int f);
void QWidget_Destroy(QtObjectPtr ptr);
int QWidget_AcceptDrops(QtObjectPtr ptr);
char* QWidget_AccessibleDescription(QtObjectPtr ptr);
char* QWidget_AccessibleName(QtObjectPtr ptr);
void QWidget_ActivateWindow(QtObjectPtr ptr);
void QWidget_AdjustSize(QtObjectPtr ptr);
int QWidget_AutoFillBackground(QtObjectPtr ptr);
QtObjectPtr QWidget_ChildAt_Int_Int(QtObjectPtr ptr, int x, int y);
void QWidget_ClearFocus(QtObjectPtr ptr);
void QWidget_ClearMask(QtObjectPtr ptr);
int QWidget_ContextMenuPolicy(QtObjectPtr ptr);
void QWidget_EnsurePolished(QtObjectPtr ptr);
int QWidget_FocusPolicy(QtObjectPtr ptr);
QtObjectPtr QWidget_FocusProxy(QtObjectPtr ptr);
QtObjectPtr QWidget_FocusWidget(QtObjectPtr ptr);
void QWidget_GrabKeyboard(QtObjectPtr ptr);
void QWidget_GrabMouse(QtObjectPtr ptr);
int QWidget_HasFocus(QtObjectPtr ptr);
int QWidget_HasHeightForWidth(QtObjectPtr ptr);
int QWidget_HasMouseTracking(QtObjectPtr ptr);
int QWidget_Height(QtObjectPtr ptr);
int QWidget_HeightForWidth_Int(QtObjectPtr ptr, int w);
int QWidget_InputMethodHints(QtObjectPtr ptr);
int QWidget_IsActiveWindow(QtObjectPtr ptr);
int QWidget_IsAncestorOf_QWidget(QtObjectPtr ptr, QtObjectPtr child);
int QWidget_IsEnabled(QtObjectPtr ptr);
int QWidget_IsEnabledTo_QWidget(QtObjectPtr ptr, QtObjectPtr ancestor);
int QWidget_IsFullScreen(QtObjectPtr ptr);
int QWidget_IsHidden(QtObjectPtr ptr);
int QWidget_IsMaximized(QtObjectPtr ptr);
int QWidget_IsMinimized(QtObjectPtr ptr);
int QWidget_IsModal(QtObjectPtr ptr);
int QWidget_IsVisible(QtObjectPtr ptr);
int QWidget_IsVisibleTo_QWidget(QtObjectPtr ptr, QtObjectPtr ancestor);
int QWidget_IsWindow(QtObjectPtr ptr);
int QWidget_IsWindowModified(QtObjectPtr ptr);
QtObjectPtr QWidget_Layout(QtObjectPtr ptr);
int QWidget_LayoutDirection(QtObjectPtr ptr);
int QWidget_MaximumHeight(QtObjectPtr ptr);
int QWidget_MaximumWidth(QtObjectPtr ptr);
int QWidget_MinimumHeight(QtObjectPtr ptr);
int QWidget_MinimumWidth(QtObjectPtr ptr);
void QWidget_Move_Int_Int(QtObjectPtr ptr, int x, int y);
QtObjectPtr QWidget_NativeParentWidget(QtObjectPtr ptr);
QtObjectPtr QWidget_NextInFocusChain(QtObjectPtr ptr);
void QWidget_OverrideWindowFlags_WindowType(QtObjectPtr ptr, int flags);
QtObjectPtr QWidget_ParentWidget(QtObjectPtr ptr);
QtObjectPtr QWidget_PreviousInFocusChain(QtObjectPtr ptr);
void QWidget_ReleaseKeyboard(QtObjectPtr ptr);
void QWidget_ReleaseMouse(QtObjectPtr ptr);
void QWidget_ReleaseShortcut_Int(QtObjectPtr ptr, int id);
void QWidget_Repaint_Int_Int_Int_Int(QtObjectPtr ptr, int x, int y, int w, int h);
void QWidget_Resize_Int_Int(QtObjectPtr ptr, int w, int h);
void QWidget_Scroll_Int_Int(QtObjectPtr ptr, int dx, int dy);
void QWidget_SetAcceptDrops_Bool(QtObjectPtr ptr, int on);
void QWidget_SetAccessibleDescription_String(QtObjectPtr ptr, char* description);
void QWidget_SetAccessibleName_String(QtObjectPtr ptr, char* name);
void QWidget_SetAttribute_WidgetAttribute_Bool(QtObjectPtr ptr, int attribute, int on);
void QWidget_SetAutoFillBackground_Bool(QtObjectPtr ptr, int enabled);
void QWidget_SetBaseSize_Int_Int(QtObjectPtr ptr, int basew, int baseh);
void QWidget_SetContentsMargins_Int_Int_Int_Int(QtObjectPtr ptr, int left, int top, int right, int bottom);
void QWidget_SetContextMenuPolicy_ContextMenuPolicy(QtObjectPtr ptr, int policy);
void QWidget_SetFixedHeight_Int(QtObjectPtr ptr, int h);
void QWidget_SetFixedSize_Int_Int(QtObjectPtr ptr, int w, int h);
void QWidget_SetFixedWidth_Int(QtObjectPtr ptr, int w);
void QWidget_SetFocus_FocusReason(QtObjectPtr ptr, int reason);
void QWidget_SetFocusPolicy_FocusPolicy(QtObjectPtr ptr, int policy);
void QWidget_SetFocusProxy_QWidget(QtObjectPtr ptr, QtObjectPtr w);
void QWidget_SetGeometry_Int_Int_Int_Int(QtObjectPtr ptr, int x, int y, int w, int h);
void QWidget_SetLayout_QLayout(QtObjectPtr ptr, QtObjectPtr layout);
void QWidget_SetLayoutDirection_LayoutDirection(QtObjectPtr ptr, int direction);
void QWidget_SetMaximumHeight_Int(QtObjectPtr ptr, int maxh);
void QWidget_SetMaximumSize_Int_Int(QtObjectPtr ptr, int maxw, int maxh);
void QWidget_SetMaximumWidth_Int(QtObjectPtr ptr, int maxw);
void QWidget_SetMinimumHeight_Int(QtObjectPtr ptr, int minh);
void QWidget_SetMinimumSize_Int_Int(QtObjectPtr ptr, int minw, int minh);
void QWidget_SetMinimumWidth_Int(QtObjectPtr ptr, int minw);
void QWidget_SetMouseTracking_Bool(QtObjectPtr ptr, int enable);
void QWidget_SetShortcutAutoRepeat_Int_Bool(QtObjectPtr ptr, int id, int enable);
void QWidget_SetShortcutEnabled_Int_Bool(QtObjectPtr ptr, int id, int enable);
void QWidget_SetSizeIncrement_Int_Int(QtObjectPtr ptr, int w, int h);
void QWidget_SetStatusTip_String(QtObjectPtr ptr, char* statusTip);
void QWidget_SetToolTip_String(QtObjectPtr ptr, char* toolTip);
void QWidget_SetToolTipDuration_Int(QtObjectPtr ptr, int msec);
void QWidget_SetUpdatesEnabled_Bool(QtObjectPtr ptr, int enable);
void QWidget_SetWhatsThis_String(QtObjectPtr ptr, char* whatsThis);
void QWidget_SetWindowFilePath_String(QtObjectPtr ptr, char* filePath);
void QWidget_SetWindowFlags_WindowType(QtObjectPtr ptr, int typ);
void QWidget_SetWindowIconText_String(QtObjectPtr ptr, char* iconText);
void QWidget_SetWindowModality_WindowModality(QtObjectPtr ptr, int windowModality);
void QWidget_SetWindowRole_String(QtObjectPtr ptr, char* role);
void QWidget_SetWindowState_WindowState(QtObjectPtr ptr, int windowState);
void QWidget_StackUnder_QWidget(QtObjectPtr ptr, QtObjectPtr w);
char* QWidget_StatusTip(QtObjectPtr ptr);
char* QWidget_StyleSheet(QtObjectPtr ptr);
int QWidget_TestAttribute_WidgetAttribute(QtObjectPtr ptr, int attribute);
char* QWidget_ToolTip(QtObjectPtr ptr);
int QWidget_ToolTipDuration(QtObjectPtr ptr);
int QWidget_UnderMouse(QtObjectPtr ptr);
void QWidget_UngrabGesture_GestureType(QtObjectPtr ptr, int gesture);
void QWidget_UnsetCursor(QtObjectPtr ptr);
void QWidget_UnsetLayoutDirection(QtObjectPtr ptr);
void QWidget_UnsetLocale(QtObjectPtr ptr);
void QWidget_Update_Int_Int_Int_Int(QtObjectPtr ptr, int x, int y, int w, int h);
void QWidget_UpdateGeometry(QtObjectPtr ptr);
int QWidget_UpdatesEnabled(QtObjectPtr ptr);
int QWidget_Width(QtObjectPtr ptr);
QtObjectPtr QWidget_Window(QtObjectPtr ptr);
char* QWidget_WindowFilePath(QtObjectPtr ptr);
int QWidget_WindowFlags(QtObjectPtr ptr);
char* QWidget_WindowIconText(QtObjectPtr ptr);
int QWidget_WindowModality(QtObjectPtr ptr);
char* QWidget_WindowRole(QtObjectPtr ptr);
int QWidget_WindowState(QtObjectPtr ptr);
char* QWidget_WindowTitle(QtObjectPtr ptr);
int QWidget_WindowType(QtObjectPtr ptr);
int QWidget_X(QtObjectPtr ptr);
int QWidget_Y(QtObjectPtr ptr);
//Public Slots
void QWidget_ConnectSlotClose(QtObjectPtr ptr);
void QWidget_DisconnectSlotClose(QtObjectPtr ptr);
void QWidget_Close(QtObjectPtr ptr);
void QWidget_ConnectSlotHide(QtObjectPtr ptr);
void QWidget_DisconnectSlotHide(QtObjectPtr ptr);
void QWidget_Hide(QtObjectPtr ptr);
void QWidget_ConnectSlotLower(QtObjectPtr ptr);
void QWidget_DisconnectSlotLower(QtObjectPtr ptr);
void QWidget_Lower(QtObjectPtr ptr);
void QWidget_ConnectSlotRaise(QtObjectPtr ptr);
void QWidget_DisconnectSlotRaise(QtObjectPtr ptr);
void QWidget_Raise(QtObjectPtr ptr);
void QWidget_ConnectSlotSetDisabled(QtObjectPtr ptr);
void QWidget_DisconnectSlotSetDisabled(QtObjectPtr ptr);
void QWidget_SetDisabled_Bool(QtObjectPtr ptr, int disable);
void QWidget_ConnectSlotSetEnabled(QtObjectPtr ptr);
void QWidget_DisconnectSlotSetEnabled(QtObjectPtr ptr);
void QWidget_SetEnabled_Bool(QtObjectPtr ptr, int enabled);
void QWidget_ConnectSlotSetHidden(QtObjectPtr ptr);
void QWidget_DisconnectSlotSetHidden(QtObjectPtr ptr);
void QWidget_SetHidden_Bool(QtObjectPtr ptr, int hidden);
void QWidget_ConnectSlotSetStyleSheet(QtObjectPtr ptr);
void QWidget_DisconnectSlotSetStyleSheet(QtObjectPtr ptr);
void QWidget_SetStyleSheet_String(QtObjectPtr ptr, char* styleSheet);
void QWidget_ConnectSlotSetWindowModified(QtObjectPtr ptr);
void QWidget_DisconnectSlotSetWindowModified(QtObjectPtr ptr);
void QWidget_SetWindowModified_Bool(QtObjectPtr ptr, int modified);
void QWidget_ConnectSlotSetWindowTitle(QtObjectPtr ptr);
void QWidget_DisconnectSlotSetWindowTitle(QtObjectPtr ptr);
void QWidget_SetWindowTitle_String(QtObjectPtr ptr, char* windowTitle);
void QWidget_ConnectSlotShow(QtObjectPtr ptr);
void QWidget_DisconnectSlotShow(QtObjectPtr ptr);
void QWidget_Show(QtObjectPtr ptr);
void QWidget_ConnectSlotShowFullScreen(QtObjectPtr ptr);
void QWidget_DisconnectSlotShowFullScreen(QtObjectPtr ptr);
void QWidget_ShowFullScreen(QtObjectPtr ptr);
void QWidget_ConnectSlotShowMaximized(QtObjectPtr ptr);
void QWidget_DisconnectSlotShowMaximized(QtObjectPtr ptr);
void QWidget_ShowMaximized(QtObjectPtr ptr);
void QWidget_ConnectSlotShowMinimized(QtObjectPtr ptr);
void QWidget_DisconnectSlotShowMinimized(QtObjectPtr ptr);
void QWidget_ShowMinimized(QtObjectPtr ptr);
void QWidget_ConnectSlotShowNormal(QtObjectPtr ptr);
void QWidget_DisconnectSlotShowNormal(QtObjectPtr ptr);
void QWidget_ShowNormal(QtObjectPtr ptr);
//Signals
void QWidget_ConnectSignalWindowIconTextChanged(QtObjectPtr ptr);
void QWidget_DisconnectSignalWindowIconTextChanged(QtObjectPtr ptr);
void QWidget_ConnectSignalWindowTitleChanged(QtObjectPtr ptr);
void QWidget_DisconnectSignalWindowTitleChanged(QtObjectPtr ptr);
//Static Public Members
QtObjectPtr QWidget_KeyboardGrabber();
QtObjectPtr QWidget_MouseGrabber();
void QWidget_SetTabOrder_QWidget_QWidget(QtObjectPtr first, QtObjectPtr second);

#ifdef __cplusplus
}
#endif
