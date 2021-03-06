#include <string.h>
#include "dvm_pri.h"

DVM_ErrorDefinition dvm_error_message_format[] = {
    {"dummy"},
    {"音屎鳩議謹忖准忖憲。"},
    {"孀音欺痕方$(name)。"},
    {"嶷鹸協吶阻痕方$(package)#$(name)。"},
    {"方怏和炎埆順。方怏寄弌葎$(size)??恵諒議和炎葎[$(index)]。"},
    {"屁方峙音嬬瓜0茅。"},
    {"哈喘阻null。"},
    {"短嗤孀欺勣紗墮議猟周$(file)"},
    {"紗墮猟周扮窟伏危列($(status))。"},
    {"嶷鹸協吶阻窃$(package)#$(name)。"},
    {"短嗤孀欺窃$(name)。"},
    {"斤?鶺沈猥洋?$(org)。"
     "音嬬?鯱戴?侏葎$(target)。"},
    {"喇噐痕方$(name)短嗤峺協淫??音嬬強蓑紗墮。"},
    {"dummy"}
};

DVM_ErrorDefinition dvm_native_error_message_format[] = {
    {"方?和?埆順。???寄弌?$(size)議方?insert圷殆欺$(pos)"
     "insertしようとしています。"},
    {"方?和?埆順。???寄弌?$(size)議方?insert圷殆欺$(pos)"},
    {"峺協議了崔階竃忖憲堪?業。"
     "??業?$(len)議忖憲堪峺協阻$(pos)。"},
    {"忖憲堪substr()痕方議及屈倖歌方(舜函忖憲堪議?業)階竃袈?($(len))。"},
};
