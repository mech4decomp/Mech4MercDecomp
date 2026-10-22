/*
 * FUN_007604B0 (121 B) — __stdcall RET 0x4 (1 param). Validates an object
 * via FUN_00760E70 (returns 0x321 error code if it fails), else builds a
 * 0x50-byte stack struct and calls FUN_00769000; on failure calls
 * FUN_00761050/FUN_00760E30 and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00760E70(void);
extern void __cdecl FUN_00769000(void);
extern void __cdecl FUN_00761050(void);
extern void __cdecl FUN_00760E30(void);

__declspec(naked) void FUN_007604B0(void)
{
    __asm {
        sub     esp, 0x50
        push    esi
        mov     esi, dword ptr [esp + 0x58]
        push    edi
        push    0xc
        push    esi
        call    FUN_00760E70
        add     esp, 8
        test    ax, ax
        jne     L7604d6
        mov     eax, 0x321
        pop     edi
        pop     esi
        add     esp, 0x50
        ret     4
    L7604d6:
        mov     ecx, 0x14
        xor     eax, eax
        lea     edi, [esp + 8]
        rep stosd
        lea     eax, [esp + 8]
        mov     dword ptr [esp + 8], 0xc08a5335
        push    eax
        push    esi
        mov     dword ptr [esp + 0x14], 0x50
        mov     dword ptr [esp + 0x18], 0x1b
        call    FUN_00769000
        add     esp, 8
        test    eax, eax
        jne     L760521
        push    esi
        call    FUN_00761050
        add     esp, 4
        push    esi
        call    FUN_00760E30
        add     esp, 4
        xor     eax, eax
    L760521:
        pop     edi
        pop     esi
        add     esp, 0x50
        ret     4
    }
}
