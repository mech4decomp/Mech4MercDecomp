/*
 * FUN_004F3CA0 (22 B) — Returns *(uint *)((*DAT_007dab44 ^ DAT_007dab40) + 0xc) ^ 0x85739531.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int __cdecl FUN_004f3ca0(void)
{
    __asm {
        _emit 0xA1
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov     ecx, [eax]
        _emit 0x33
        _emit 0x0D
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov     eax, [ecx + 0xc]
        xor     eax, 0x85739531
        ret
    }
}
