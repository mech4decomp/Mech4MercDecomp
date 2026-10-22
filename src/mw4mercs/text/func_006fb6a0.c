/*
 * FUN_006FB6A0 (48 B) — GetVolumeInformationA wrapper.
 *
 * Calls GetVolumeInformationA with the given params, returns non-zero
 * on success. The last two params (filesystem name buffer, filesystem
 * name length) are passed as NULL/0.
 *
 * __stdcall, RET 0xC (3 stack params: root_path, volume_name_buffer,
 * volume_name_size).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_006fb6a0(void)
{
    __asm {
        push    0
        push    0
        lea     eax, dword ptr [esp + 0x14]
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        lea     ecx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        lea     edx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edx
        _emit   0xFF
        _emit   0x15
        _emit   0x80
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        test    eax, eax
        setnz   al
        ret     0x0C
    }
}
