/*
 * FUN_10021080 (44 B) - __stdcall, RET 0x8.  Registration helper: if
 * this->obj(+0xc) is non-null returns 0xC112000D; else calls FUN_1001c760
 * and sets the +0x4 flag on success.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c760(void *, void *);

__declspec(naked) void __stdcall FUN_10021080(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_95
        mov     eax, 0xc112000d
        pop     esi
        ret     8
L_95:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_a8
        mov     byte ptr [esi + 0x4], 1
L_a8:
        pop     esi
        ret     8
    }
}
