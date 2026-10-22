/*
 * ZlogLib.dll - FUN_100017c8 (0x100017C8, 222 B, __cdecl)
 * Player-connect log emit: logs connect/disconnect messages, optionally
 * dumping a non-zero data blob. Invokes callback at g_10027098+4.
 * Transcribed from ZlogLib.dll reference bytes.
 */

#include <windows.h>

extern int g_10027098;

extern char *__cdecl FUN_10002931(void);
extern void __cdecl FUN_10001201(void);
extern void __cdecl FUN_100029b6(void);
extern void __cdecl FUN_100029b0(void);
extern void __cdecl FUN_10001db9(void);

__declspec(naked) void FUN_100017c8(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x800
        mov     eax, dword ptr [g_10027098]
        test    eax, eax
        push    esi
        push    edi
        mov     edi, 0x100040ec
        jz      l_100017ec
        mov     eax, dword ptr [eax + 0x4]
        test    eax, eax
        jz      l_100017ec
        call    eax
        jmp     l_100017ee
    l_100017ec:
        mov     eax, edi
    l_100017ee:
        push    0x1
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        push    eax
        push    0x10004154
        call    FUN_10002931
        add     esp, 0x10
        push    eax
        call    FUN_10001201
        cmp     dword ptr [ebp + 0x14], 0x0
        pop     ecx
        pop     ecx
        jge     l_10001816
        xor     esi, esi
        jmp     l_1000186d
    l_10001816:
        push    0x800
        lea     eax, [ebp + 0xfffff800]
        push    0x0
        push    eax
        call    FUN_100029b6
        add     esp, 0xc
        cmp     dword ptr [ebp + 0x10], 0x0
        jz      l_10001868
        push    dword ptr [ebp + 0x14]
        lea     eax, [ebp + 0xfffff800]
        push    eax
        push    dword ptr [ebp + 0x10]
        call    FUN_100029b0
        add     esp, 0xc
        test    eax, eax
        jz      l_10001868
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        call    FUN_10001db9
        push    eax
        push    0x10004150
        call    FUN_10002931
        add     esp, 0x10
        mov     esi, eax
        jmp     l_1000186d
    l_10001868:
        mov     esi, 0x1000413c
    l_1000186d:
        mov     eax, dword ptr [g_10027098]
        test    eax, eax
        jz      l_10001881
        mov     eax, dword ptr [eax + 0x4]
        test    eax, eax
        jz      l_10001881
        call    eax
        jmp     l_10001883
    l_10001881:
        mov     eax, edi
    l_10001883:
        push    0x2
        push    esi
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        push    eax
        push    0x10004120
        call    FUN_10002931
        add     esp, 0x14
        push    eax
        call    FUN_10001201
        pop     ecx
        pop     ecx
        pop     edi
        pop     esi
        leave
        ret
    }
}
