/*
 * FUN_0043193B (80 B of a 149 B block) — __cdecl (2 stack args, RET 0).
 * Allocates a 0xBC-byte buffer via FUN_004084D0 and, if non-null, calls
 * FUN_00431820 (thiscall, 3 args) with [0x7B9810], arg1, arg2; returns
 * its result. Wrapped by FUN_006F4950/FUN_006F49A0.
 *
 * NOTE: the 149 B block 0x43193B also contains an extra function at
 * 0x00431990 (not in this assigned list).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b9814;
extern int g_7b9810;
extern void __cdecl FUN_006F4950(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_00431820(void);
extern void __cdecl FUN_006F49A0(void);

__declspec(naked) void FUN_0043193B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [g_7b9814]
        push    esi
        push    eax
        call    FUN_006F4950
        push    0xbc
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      loc_431980
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        mov     ecx, dword ptr [g_7b9810]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_00431820
        mov     esi, eax
        call    FUN_006F49A0
        mov     eax, esi
        pop     esi
        ret
loc_431980:
        xor     esi, esi
        call    FUN_006F49A0
        mov     eax, esi
        pop     esi
        ret
    }
}
