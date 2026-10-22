/*
 * FUN_00660210 (36 B) — Constructor.
 *
 * __thiscall (ECX = this), returns this in EAX.
 * Calls FUN_00661da0 (sub-constructor on this), then FUN_006a22a0
 * on this+0x24, sets vtables 0x795284 (at +0x24) and 0x795260 (at 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00661da0(void);
extern void FUN_006a22a0(void);

__declspec(naked) void __fastcall FUN_00660210(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_00661da0
        lea     edi, [esi + 0x24]
        mov     ecx, edi
        call    FUN_006a22a0
        mov     dword ptr [edi], 0x00795284
        pop     edi
        mov     dword ptr [esi], 0x00795260
        mov     eax, esi
        pop     esi
        ret
    }
}
