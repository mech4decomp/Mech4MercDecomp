/*
 * FUN_5e030f6e (400 B) - calls FUN_5e02b69c on each dword field of the
 * object at ESI (offsets 0x00..0xa8). Returns if ESI is null.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02b69c(void);

__declspec(naked) void FUN_5e030f6e(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        test    esi, esi
        jz      done
        push    dword ptr [esi+4]
        call    FUN_5e02b69c
        push    dword ptr [esi+8]
        call    FUN_5e02b69c
        push    dword ptr [esi+0xc]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x10]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x14]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x18]
        call    FUN_5e02b69c
        push    dword ptr [esi]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x20]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x24]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x28]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x2c]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x30]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x34]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x1c]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x38]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x3c]
        call    FUN_5e02b69c
        add     esp, 0x40
        push    dword ptr [esi+0x40]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x44]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x48]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x4c]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x50]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x54]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x58]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x5c]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x60]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x64]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x68]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x6c]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x70]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x74]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x78]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x7c]
        call    FUN_5e02b69c
        add     esp, 0x40
        push    dword ptr [esi+0x80]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x84]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x88]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x8c]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x90]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x94]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x98]
        call    FUN_5e02b69c
        push    dword ptr [esi+0x9c]
        call    FUN_5e02b69c
        push    dword ptr [esi+0xa0]
        call    FUN_5e02b69c
        push    dword ptr [esi+0xa4]
        call    FUN_5e02b69c
        push    dword ptr [esi+0xa8]
        call    FUN_5e02b69c
        add     esp, 0x2c
done:
        pop     esi
        ret
    }
}
