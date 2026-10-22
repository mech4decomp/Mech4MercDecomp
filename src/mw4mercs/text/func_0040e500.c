/*
 * FUN_0040e500 (66 B) — __thiscall helper in the loader region. RET 0x4
 * (1 stack param + this in ECX). Builds a string object (FUN_0041de80),
 * calls FUN_00412780 / FUN_0040e450, then tears it down (FUN_0041dec0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0040e450(void);
extern void __cdecl FUN_0041dec0(void);

__declspec(naked) void FUN_0040e500(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        sub     esp, 0x30
        push    esi
        push    1
        mov     esi, ecx
        push    eax
        lea     ecx, [esp+0xc]
        call    FUN_0041de80
        mov     ecx, dword ptr [esp+0x28]
        push    ecx
        mov     ecx, esi
        call    FUN_00412780
        lea     edx, [esp+4]
        push    edx
        mov     ecx, esi
        call    FUN_0040e450
        lea     ecx, [esp+4]
        mov     byte ptr [esi+4], 0
        call    FUN_0041dec0
        pop     esi
        add     esp, 0x30
        ret     0x4
    }
}
