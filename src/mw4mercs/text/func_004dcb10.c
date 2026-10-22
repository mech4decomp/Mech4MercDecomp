#include <windows.h>

extern int g_76b2ac;
extern char g_7737a4[];
extern char g_773794[];
extern int __cdecl FUN_005031A0(void *);

__declspec(naked) void __cdecl FUN_004DCB10(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [g_76b2ac]
        push    offset g_7737a4
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     l_second
        pop     edi
        mov     eax, 0x7
        pop     esi
        ret
    l_second:
        push    offset g_773794
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     l_default
        pop     edi
        mov     eax, 0x8
        pop     esi
        ret
    l_default:
        push    esi
        call    FUN_005031A0
        add     esp, 0x4
        pop     edi
        pop     esi
        ret
    }
}
