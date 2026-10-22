/*
 * FUN_006a8740 (19 B) — __fastcall: returns
 *   (this[0x20] / vtable[0x14]()) * this[0x2c] + this[0x28]  (floats).
 * RET (no ret n).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a8740(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x14]
        fdivr   dword ptr [esi + 0x20]
        fmul    dword ptr [esi + 0x2c]
        fadd    dword ptr [esi + 0x28]
        pop     esi
        ret
    }
}
