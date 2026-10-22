/*
 * FUN_006885c0 (100 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Calls FUN_006b0680(param_1, param_2), a virtual method at vtable+0x168,
 * two FUN_00551870 constructors, FUN_00707e70, then FUN_005d9ac0 with a
 * double on the stack, storing the result at [this+0x14].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2438;
extern void __stdcall FUN_006b0680(void *a, void *b);
extern void __cdecl FUN_00551870(void);
extern int __stdcall FUN_00707e70(int a, int b);
extern int __cdecl FUN_005d9ac0(void);

__declspec(naked) void FUN_006885c0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        push    ebx
        mov     esi, ecx
        push    ebp
        call    FUN_006b0680
        mov     edi, dword ptr [esi + 0x4]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x168]
        lea     edx, [esi + 0x20]
        push    eax
        push    edi
        push    ebx
        sub     esp, 0xc
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        sub     esp, 0xc
        mov     ecx, esp
        push    ebp
        call    FUN_00551870
        mov     eax, dword ptr [esi + 0x10]
        push    eax
        push    0x0
        call    FUN_00707e70
        mov     ecx, dword ptr [g_007f2438]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        call    FUN_005d9ac0
        pop     edi
        mov     dword ptr [esi + 0x14], eax
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
