/*
 * FUN_006a8c40 (19 B) — __fastcall (ECX = this), RET 0.
 *
 * Virtual call through vtable+0x14, then FPU: (this[8] / ret) * this[0xb]
 * + this[0xa]. ABL record handler helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall func_006a8c40(int thisptr)
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
