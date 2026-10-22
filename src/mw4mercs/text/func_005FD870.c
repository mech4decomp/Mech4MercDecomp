/*
 * FUN_005FD870 (82 B) — __cdecl (2 stack args, RET). Calls FUN_00563460,
 * then FUN_006F4950, allocates 0x4EDC bytes via FUN_004084D0, and if
 * non-null calls FUN_005FE060 with globals/args; else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00563460(void);
extern void __cdecl FUN_006F4950(void);
extern void *__cdecl FUN_004084D0(void);
extern void __cdecl FUN_005FE060(void);
extern void __cdecl FUN_006F49A0(void);
extern int g_7dc8a8;
extern int g_7f26b0;

__declspec(naked) void FUN_005FD870(void)
{
    __asm {
        push    esi
        call    FUN_00563460
        mov     eax, dword ptr [g_7dc8a8]
        push    eax
        call    FUN_006F4950
        push    0x4edc
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      loc_5fd8b7
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov     ecx, dword ptr [g_7f26b0]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_005FE060
        mov     esi, eax
        call    FUN_006F49A0
        mov     eax, esi
        pop     esi
        ret
loc_5fd8b7:
        xor     esi, esi
        call    FUN_006F49A0
        mov     eax, esi
        pop     esi
        ret
    }
}
