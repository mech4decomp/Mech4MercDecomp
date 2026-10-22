/*
 * FUN_0064C220 (99 B) — __stdcall, 1 arg (ret 4), ecx=this. Looks up an
 * object and returns a float field (or a default float).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_0064bf90(void);
extern void *__cdecl FUN_0064c950(void);
extern float g_792c9c;
extern unsigned long g_80d9b4;

__declspec(naked) void FUN_0064C220(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    edi
        push    0
        push    0
        mov     edi, ecx
        push    eax
        call    FUN_0064bf90
        mov     esi, eax
        test    esi, esi
        jne     l_1
        fld     dword ptr [g_792c9c]
        pop     edi
        pop     esi
        ret     4
    l_1:
        mov     ecx, dword ptr [esi + 0x3c]
        push    ecx
        call    FUN_0064c950
        mov     ecx, dword ptr [g_80d9b4]
        add     esp, 4
        cmp     eax, ecx
        je      l_2
        fld     dword ptr [g_792c9c]
        pop     edi
        pop     esi
        ret     4
    l_2:
        cmp     dword ptr [esi + 0x1c], 1
        je      l_3
        fld     dword ptr [g_792c9c]
        pop     edi
        pop     esi
        ret     4
    l_3:
        mov     eax, dword ptr [edi + 0x24]
        mov     edx, dword ptr [esi + 0x20]
        fld     dword ptr [eax + edx*4]
        pop     edi
        pop     esi
        ret     4
    }
}
