/*
 * FUN_0045DBEB (80 B of a 150 B block) — __cdecl (2 stack args, RET 0).
 * Allocates a 0xB4-byte buffer via FUN_004084D0 and, if non-null, calls
 * FUN_0045DAE0 (thiscall, 3 args) with [0x7D9910], arg1, arg2; returns
 * its result. Wrapped by FUN_006F4950/FUN_006F49A0.
 *
 * NOTE: the 150 B block 0x45DBEB also contains an extra function at
 * 0x0045DC40 (not in this assigned list).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7d9918;
extern int g_7d9910;
extern void __cdecl FUN_006F4950(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_0045DAE0(void);
extern void __cdecl FUN_006F49A0(void);

__declspec(naked) void FUN_0045DBEB(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [g_7d9918]
        push    esi
        push    eax
        call    FUN_006F4950
        push    0xb4
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      loc_45dc30
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        mov     ecx, dword ptr [g_7d9910]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_0045DAE0
        mov     esi, eax
        call    FUN_006F49A0
        mov     eax, esi
        pop     esi
        ret
loc_45dc30:
        xor     esi, esi
        call    FUN_006F49A0
        mov     eax, esi
        pop     esi
        ret
    }
}
