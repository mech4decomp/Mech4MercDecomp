/*
 * FUN_00493880 (35 B) — __fastcall (ECX = this).
 * Sets this[0x1c] = 1.0f, calls FUN_004adfb0 on this+0x20 with 0,
 * then on this+0x34 with 1.0f.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_004adfb0(void *param_1, int value);

__declspec(naked) void __fastcall FUN_00493880(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0
        lea     ecx, [esi + 0x20]
        _emit 0xC7  /* mov dword ptr [esi + 0x1c], 0x3f800000 */
        _emit 0x46
        _emit 0x1C
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0x3F
        call    FUN_004adfb0
        push    0x3f800000
        lea     ecx, [esi + 0x34]
        call    FUN_004adfb0
        pop     esi
        ret
    }
}
