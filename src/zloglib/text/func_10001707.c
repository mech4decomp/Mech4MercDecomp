/*
 * ZlogLib.dll - FUN_10001707 (0x10001707, 143 B, __cdecl)
 * Game-end log flush: emits "Game End" messages to the log and closes
 * the log files. Invokes an optional callback at g_10027098+4.
 * Transcribed from ZlogLib.dll reference bytes.
 */

#include <windows.h>

extern int g_10027098;

extern void __cdecl FUN_10001d24(void);
extern char *__cdecl FUN_10002931(void);
extern void __cdecl FUN_10001201(void);
extern void __cdecl FUN_10001357(void);

__declspec(naked) void FUN_10001707(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x80
        lea     eax, [ebp + -0x80]
        push    esi
        push    eax
        call    FUN_10001d24
        mov     eax, dword ptr [g_10027098]
        test    eax, eax
        pop     ecx
        mov     esi, 0x100040ec
        jz      l_10001734
        mov     eax, dword ptr [eax + 0x4]
        test    eax, eax
        jz      l_10001734
        call    eax
        jmp     l_10001736
    l_10001734:
        mov     eax, esi
    l_10001736:
        push    0x1
        push    dword ptr [ebp + 0x8]
        push    eax
        push    0x10004108
        call    FUN_10002931
        add     esp, 0xc
        push    eax
        call    FUN_10001201
        mov     eax, dword ptr [g_10027098]
        test    eax, eax
        pop     ecx
        pop     ecx
        jz      l_10001765
        mov     eax, dword ptr [eax + 0x4]
        test    eax, eax
        jz      l_10001765
        call    eax
        jmp     l_10001767
    l_10001765:
        mov     eax, esi
    l_10001767:
        push    0x2
        lea     ecx, [ebp + -0x80]
        push    ecx
        push    dword ptr [ebp + 0x8]
        push    eax
        push    0x100040f4
        call    FUN_10002931
        add     esp, 0x10
        push    eax
        call    FUN_10001201
        push    dword ptr [ebp + 0xc]
        push    0x0
        push    0x0
        call    FUN_10001357
        add     esp, 0x14
        pop     esi
        leave
        ret
    }
}
