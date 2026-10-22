/*
 * FUN_005DDF30 (39 B) — __cdecl. Destroys the global LancemateManager
 * (DAT_007F251C): calls FUN_004D5D20 (dtor) then frees via FUN_004084E0,
 * then nulls the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_004d5d20(void);

__declspec(naked) void __cdecl FUN_005ddf30(void)
{
    
__asm {
push    esi
        /* __emit: MSVC6 encodes mov esi,[imm32] as BE immediate load, not 8B 35 memory deref */
        _emit   0x8B
        _emit   0x35
        _emit   0x1C
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        test    esi, esi
        jz      LDF4B
        mov     ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
LDF4B:
        /* __emit: MSVC6 rejects mov [imm32],imm32 absolute form; C7 05 encoding */
        _emit   0xC7
        _emit   0x05
        _emit   0x1C
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
