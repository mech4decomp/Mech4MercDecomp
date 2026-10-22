/*
 * FUN_005E3FC0 (39 B) - Missile subsystem teardown.
 *
 * If the registered object (DAT_007f2554) is non-null, calls its
 * destructor FUN_00501B40 then frees it via FUN_004084E0, and clears
 * the global pointer.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __cdecl FUN_005e3fc0(void)
{
    
__asm {
push    esi
        /* __emit: MSVC6 encodes mov reg,[imm32] as immediate load, not 8B 35 memory-deref */
        _emit   0x8B
        _emit   0x35
        _emit   0x54
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        test    esi, esi
        jz      l_skip
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip:
        /* __emit: MSVC6 encodes mov [imm32],imm32 as immediate store, not C7 05 memory-deref */
        _emit   0xC7
        _emit   0x05
        _emit   0x54
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        pop     esi
        ret
    }


}
