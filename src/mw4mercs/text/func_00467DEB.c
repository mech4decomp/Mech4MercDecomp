/*
 * FUN_00467DEB (80 B of a 150 B block) — __cdecl (2 stack args, RET 0).
 * Allocates a 0x9C-byte buffer via FUN_004084D0 and, if non-null, calls
 * FUN_00467CE0 (thiscall, 3 args) with [0x7D9950], arg1, arg2; returns
 * its result. Wrapped by FUN_006F4950/FUN_006F49A0.
 *
 * NOTE: the 150 B block 0x467DEB also contains an extra function at
 * 0x00467E40 (not in this assigned list).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7d9958;
extern int g_7d9950;
extern void __cdecl FUN_006F4950(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_00467CE0(void);
extern void __cdecl FUN_006F49A0(void);

__declspec(naked) void FUN_00467DEB(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [g_7d9958]
        push    esi
        push    eax
        call    FUN_006F4950
        push    0x9c
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      loc_467e30
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        mov     ecx, dword ptr [g_7d9950]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_00467CE0
        mov     esi, eax
        call    FUN_006F49A0
        mov     eax, esi
        pop     esi
        ret
loc_467e30:
        xor     esi, esi
        call    FUN_006F49A0
        mov     eax, esi
        pop     esi
        ret
    }
}
