/*
 * FUN_006FB6D0 (121 B) — Disk free space query.
 *
 * __cdecl, RET 4. Takes a drive letter string, appends ":\0",
 * and queries free space. If global 0x00858BA4 is set, calls it
 * as a hook. Otherwise calls GetDiskFreeSpaceA and returns
 * sectors_per_cluster * bytes_per_sector * free_clusters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006fb6d0(void)
{
    __asm {
        sub     esp, 0x28
        mov     eax, dword ptr [esp + 0x2c]
        mov     cl, byte ptr [eax]
        _emit   0xA1
        _emit   0xA4
        _emit   0x8B
        _emit   0x85
        _emit   0x00
        test    eax, eax
        mov     byte ptr [esp + 0x2c], cl
        mov     byte ptr [esp + 0x2d], 0x3a
        mov     byte ptr [esp + 0x2e], 0x0
        jz      l_no_hook
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x38]
        push    ecx
        call    eax
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        add     esp, 0x28
        ret     4
    l_no_hook:
        lea     edx, [esp + 0xc]
        push    edx
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0xc]
        push    edx
        lea     eax, [esp + 0x3c]
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0x84
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        _emit   0x8B
        _emit   0x44
        _emit   0x24
        _emit   0x00
        imul    eax, dword ptr [esp + 4]
        imul    eax, dword ptr [esp + 8]
        xor     edx, edx
        add     esp, 0x28
        ret     4
    }
}
