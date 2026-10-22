/*
 * FUN_00417B30 (76 B, +4 NOP pad) — __cdecl (no args, RET). Constructs a
 * 0xC-dword temp via FUN_00419E70, copies it to global 0x7B8C28, then zeroes
 * four global dwords at 0x7B8C58..0x7B8C64.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00419E70(void);
extern int g_7b8c58;
extern int g_7b8c5c;
extern int g_7b8c60;
extern int g_7b8c64;

__declspec(naked) void FUN_00417B30(void)
{
    __asm {
        sub     esp, 0x30
        push    esi
        push    edi
        lea     ecx, [esp + 8]
        call    FUN_00419E70
        mov     ecx, 0xc
        lea     esi, [esp + 8]
        mov     edi, 0x7b8c28
        rep movsd
        pop     edi
        mov     dword ptr [g_7b8c58], 0
        mov     dword ptr [g_7b8c5c], 0
        mov     dword ptr [g_7b8c60], 0
        mov     dword ptr [g_7b8c64], 0
        pop     esi
        add     esp, 0x30
        ret
    }
}
