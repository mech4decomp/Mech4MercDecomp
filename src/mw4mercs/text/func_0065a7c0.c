/*
 * FUN_0065a7c0 (108 B) — Switch-based parameter setup + virtual call.
 *
 * Calls FUN_005c98a0 (and FUN_005c9850 if it returns 1), then dispatches
 * on param_2 via a jump table to set up esi/edi values, and finally calls
 * a virtual method (offset 0x1b4) with (param_3, esi, edi, 1000).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_005c98a0(void);
extern void __cdecl FUN_005c9850(void);

__declspec(naked) void __cdecl FUN_0065a7c0(int *param_1, int param_2, int param_3)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    esi
        push    edi
        mov     ecx, ebx
        xor     esi, esi
        xor     edi, edi
        call    FUN_005c98a0
        cmp     al, 1
        jnz     l_dd
        mov     ecx, ebx
        call    FUN_005c9850
    l_dd:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, 4
        ja      l_812
        jmp     dword ptr [eax * 4 + 0x65a82c]
    l_case1:
        mov     esi, 0x1e
        mov     edi, 0xffffffe2
        jmp     l_812
    l_case2:
        mov     esi, 0xffffffe2
        mov     edi, esi
        jmp     l_812
    l_case3:
        xor     esi, esi
        mov     edi, 0xffffffc4
        jmp     l_812
    l_case4:
        xor     esi, esi
        mov     edi, 0xffffff9c
    l_812:
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [ebx]
        push    0x3e8
        push    edi
        push    esi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x1b4]
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
