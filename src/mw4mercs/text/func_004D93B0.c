/*
 * FUN_004D93B0 (77 B, +3 NOP pad) — __cdecl (2 stack args, RET). Reads a
 * global, calls FUN_006F4950, allocates 0x168 bytes via FUN_004084D0, and
 * if non-null calls FUN_004D9940 with globals/args; else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006F4950(void);
extern void *__cdecl FUN_004084D0(void);
extern void __cdecl FUN_004D9940(void);
extern void __cdecl FUN_006F49A0(void);
extern int g_7dc688;
extern int g_7dc690;

__declspec(naked) void FUN_004D93B0(void)
{
    __asm {
        mov     eax, dword ptr [g_7dc688]
        push    esi
        push    eax
        call    FUN_006F4950
        push    0x168
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      loc_4d93f2
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov     ecx, dword ptr [g_7dc690]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_004D9940
        mov     esi, eax
        call    FUN_006F49A0
        mov     eax, esi
        pop     esi
        ret
loc_4d93f2:
        xor     esi, esi
        call    FUN_006F49A0
        mov     eax, esi
        pop     esi
        ret
    }
}
