/*
 * MW4Stats.dll - FUN_10004320 (0x10004320, 49 B, __thiscall)
 * FUN_10001170(this,0x400); store params at +0x98/+0x9c/+0xa0. RET 0x8.
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10004320 (49 B, __thiscall, 2 params, RET 0x8) -- returns this.
 * init(0x400); this->f98 = arg2; this->f9c = 0; this->fa0 = arg1; return this;
 */
extern void __cdecl FUN_10001170(void);

__declspec(naked) void FUN_10004320(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x400
        call    FUN_10001170
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [esi + 0x98], eax
        mov     dword ptr [esi + 0x9c], 0x0
        mov     dword ptr [esi + 0xa0], ecx
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
