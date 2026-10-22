/*
 * ZlogLib.dll - FUN_10001561 (0x10001561, 154 B, __cdecl)
 * Timestamp formatter: builds a date/time string and copies it into
 * the caller's buffer (with trailing NUL). Uses _ftime/time/localtime.
 * Transcribed from ZlogLib.dll reference bytes.
 */

#include <windows.h>

extern void (*g_1000306c)(void);
extern void (*g_10003038)(void);
extern void (*g_10003034)(void);
extern int *g_10003030;
extern void (*g_1000302c)(void);
extern void (*g_10003040)(void);

__declspec(naked) void FUN_10001561(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x414
        push    esi
        lea     eax, [ebp + -0x14]
        push    edi
        push    eax
        call    dword ptr [g_1000306c]
        lea     eax, [ebp + -0x8]
        push    eax
        call    dword ptr [g_10003038]
        lea     eax, [ebp + -0x8]
        push    eax
        call    dword ptr [g_10003034]
        mov     ecx, eax
        mov     eax, dword ptr [g_10003030]
        mov     eax, dword ptr [eax]
        cdq
        mov     esi, 0xfffff1f0
        idiv    esi
        add     esp, 0x4
        mov     dword ptr [ebp + -0x4], eax
        movzx   eax, word ptr [ebp + -0x10]
        fild    dword ptr [ebp + -0x4]
        fstp    qword ptr [esp]
        push    eax
        push    dword ptr [ecx]
        mov     eax, dword ptr [ecx + 0x10]
        push    dword ptr [ecx + 0x4]
        inc     eax
        push    dword ptr [ecx + 0x8]
        push    dword ptr [ecx + 0xc]
        push    eax
        mov     eax, dword ptr [ecx + 0x14]
        add     eax, 0x76c
        push    eax
        lea     eax, [ebp + 0xfffffbec]
        push    0x1000409c
        push    eax
        call    dword ptr [g_1000302c]
        mov     esi, dword ptr [ebp + 0xc]
        mov     edi, dword ptr [ebp + 0x8]
        lea     eax, [esi + -0x1]
        push    eax
        lea     eax, [ebp + 0xfffffbec]
        push    eax
        push    edi
        call    dword ptr [g_10003040]
        add     esp, 0x38
        and     byte ptr [edi + esi*0x1 + -0x1], 0x0
        pop     edi
        pop     esi
        leave
        ret
    }
}
