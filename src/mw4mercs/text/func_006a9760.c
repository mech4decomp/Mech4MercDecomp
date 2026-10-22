/*
 * FUN_006a9760 (32 B) — __fastcall (ECX = this), RET 0.
 *
 * If this+0x34 is non-null, virtual-call vtable+0 with arg 1, then zero
 * this+0x34 and set this+0x20 = -1.0f. ABL record handler helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall func_006a9760(int thisptr)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x34]
        test    ecx, ecx
        jz      L_9770
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_9770:
        mov     dword ptr [esi + 0x34], 0x0
        mov     dword ptr [esi + 0x20], 0xbf800000
        pop     esi
        ret
    }
}
