/*
 * FUN_006a8460 (32 B) — __fastcall teardown: if (this[0x34]) call its vtable[0](1);
 * then this[0x34]=0, this[0x20]=0xbf800000 (-1.0f).
 * RET (no ret n).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a8460(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x34]
        test    ecx, ecx
        jz      L8470
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L8470:
        mov     dword ptr [esi + 0x34], 0x0
        mov     dword ptr [esi + 0x20], 0xbf800000
        pop     esi
        ret
    }
}
