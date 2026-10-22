/*
 * FUN_005f3975 (extent 0x5f3975-0x5f39b6, 65 B) - residual: alignment pad +
 * tail of prior function's jump table + real code.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005f37e0(void);
extern void __cdecl FUN_005f88e0(void);

__declspec(naked) void FUN_005f3975(void)
{
    __asm {
        __emit 0x8D  /* alignment pad lea ecx,[ecx+0] (8D 49 00) */
        __emit 0x49
        __emit 0x00
        /* jump-table dwords (patched absolute addresses) - literal bytes */
        __emit 0x14  /* -> 0x005F3814 */
        __emit 0x38
        __emit 0x5F
        __emit 0x00
        __emit 0x14  /* -> 0x005F3814 */
        __emit 0x38
        __emit 0x5F
        __emit 0x00
        __emit 0x1B  /* -> 0x005F381B */
        __emit 0x38
        __emit 0x5F
        __emit 0x00
        __emit 0x22  /* -> 0x005F3822 */
        __emit 0x38
        __emit 0x5F
        __emit 0x00
        __emit 0x41  /* -> 0x005F3841 */
        __emit 0x38
        __emit 0x5F
        __emit 0x00
        __emit 0x29  /* -> 0x005F3829 */
        __emit 0x38
        __emit 0x5F
        __emit 0x00
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_005f88e0
        push    edi
        mov     ecx, esi
        call    FUN_005f37e0
        pop     edi
        pop     esi
        ret     4
        nop
        nop
        nop
        nop
        nop
        mov     eax, 6
        ret
    }
}
