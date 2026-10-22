#include <windows.h>

extern int g_7dc140;
extern int g_7dc698;
extern char g_7735b0[];
extern char g_7735bc[];
extern void *__cdecl FUN_004084D0(int);
extern void __cdecl FUN_004D5C10(void);

__declspec(naked) void __cdecl FUN_004DC180(void)
{
    __asm {
        push    esi
        push    0x28
        call    FUN_004084D0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_null
        mov     eax, dword ptr [g_7dc140]
        push    offset g_7735b0
        push    0x1
        push    eax
        push    offset g_7735bc
        push    0x1c7
        mov     ecx, esi
        call    FUN_004D5C10
        mov     dword ptr [esi + 0x20], 0x0
        mov     dword ptr [esi + 0x24], 0x0
        mov     dword ptr [g_7dc698], esi
        pop     esi
        ret
    l_null:
        mov     dword ptr [g_7dc698], 0x0
        pop     esi
        ret
    }
}
