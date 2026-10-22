/*
 * FUN_0046FC50 (28 B) — Constructor with two sub-object initializers.
 *
 * Saves this (ECX) in ESI, calls FUN_0047AC10(param) on this,
 * then calls FUN_00491340 on this+0x70 with same param.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0047ac10(void *param);
extern void __stdcall FUN_00491340(void *param);

__declspec(naked) void __stdcall FUN_0046fc50(void *param)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        mov     esi, ecx
        push    edi
        call    FUN_0047ac10
        push    edi
        lea     ecx, [esi + 0x70]
        call    FUN_00491340
        pop     edi
        pop     esi
        ret     4
    }
}
