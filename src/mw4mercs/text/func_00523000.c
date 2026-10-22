/*
 * FUN_00523000 (51 B) — __stdcall.
 * If arg >= 13, returns 0. Otherwise decodes global pointer,
 * calls vtable[0x34](decoded, arg+0x4B0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00523000(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        cmp     eax, 0xD
        jb      label_ok
        xor     eax, eax
        ret     4
label_ok:
        _emit   0x8B
        _emit   0x0D
        _emit   0x44
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     edx, dword ptr [ecx]
        _emit   0x33
        _emit   0x15
        _emit   0x40
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     ecx, dword ptr [edx + 0xC]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        add     eax, 0x4B0
        push    eax
        call    dword ptr [edx + 0x34]
        ret     4
    }
}
