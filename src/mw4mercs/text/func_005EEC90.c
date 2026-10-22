/*
 * FUN_005EEC90 (77 B, +3 NOP pad) — __cdecl (2 stack args, RET). Reads a
 * global, calls FUN_006F4950, allocates 0x1C8 bytes via FUN_004084D0, and
 * if non-null calls FUN_005EEDA0 with globals/args; else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006F4950(void);
extern void *__cdecl FUN_004084D0(void);
extern void __cdecl FUN_005EEDA0(void);
extern void __cdecl FUN_006F49A0(void);
extern int g_7dd234;
extern int g_7f25a8;

__declspec(naked) void FUN_005EEC90(void)
{
    __asm {
        mov     eax, dword ptr [g_7dd234]
        push    esi
        push    eax
        call    FUN_006F4950
        push    0x1c8
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      loc_5eecd2
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov     ecx, dword ptr [g_7f25a8]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_005EEDA0
        mov     esi, eax
        call    FUN_006F49A0
        mov     eax, esi
        pop     esi
        ret
loc_5eecd2:
        xor     esi, esi
        call    FUN_006F49A0
        mov     eax, esi
        pop     esi
        ret
    }
}
