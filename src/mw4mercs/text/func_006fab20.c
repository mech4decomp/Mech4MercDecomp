/*
 * FUN_006FAB20 (109 B) — Copy data blocks, call FUN_00721AE0, log.
 *
 * __stdcall, RET 4 (1 stack param). Copies 0x14 dwords from param[0]
 * to 0x00849e58, copies 0xb3 dwords from param[4] to 0x00849b88,
 * clears byte 0x0087dd0a, calls FUN_00721AE0, then FUN_006F91D0 with
 * mode (0x2010 or 0x2011) depending on global 0x00849e58.
 * Returns 0 or -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00721ae0(void *);
extern int __cdecl FUN_006f91d0(int, int);

__declspec(naked) void __stdcall FUN_006fab20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, dword ptr [eax]
        push    edi
        mov     ecx, 0x14
        mov     edi, 0x849e58
        rep movsd
        mov     esi, dword ptr [eax + 4]
        mov     ecx, 0xb3
        mov     edi, 0x849b88
        push    0x849e58
        rep movsd
        _emit   0xC6
        _emit   0x05
        _emit   0x0A
        _emit   0xDD
        _emit   0x87
        _emit   0x00
        _emit   0x00
        call    FUN_00721ae0
        _emit   0x8B
        _emit   0x0D
        _emit   0x58
        _emit   0x9E
        _emit   0x84
        _emit   0x00
        push    eax
        xor     eax, eax
        mov     esi, 0x80000001
        cmp     ecx, esi
        setnz   al
        add     eax, 0x2010
        push    eax
        call    FUN_006f91d0
        _emit   0x8B
        _emit   0x0D
        _emit   0x58
        _emit   0x9E
        _emit   0x84
        _emit   0x00
        pop     edi
        cmp     ecx, esi
        pop     esi
        jnz     l_ret0
        test    eax, eax
        jnz     l_ret0
        or      eax, -1
        ret     4
    l_ret0:
        xor     eax, eax
        ret     4
    }
}
