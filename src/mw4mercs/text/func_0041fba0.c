/*
 * FUN_0041fba0 (68 B) — allocates a 0x2c-byte block via FUN_004084d0.
 * On success, initializes it via FUN_00415d70 (thiscall, ecx=block) with
 * (0x10, param_1, param_1>>2, "Stuff::SlotLink", g_007b8c14) and stores
 * the block in g_007b9458. On failure stores 0 in g_007b9458.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int);
extern int g_007b8c14;
extern char g_str_76d950[];
extern void FUN_00415d70(void);
extern int g_007b9458;

__declspec(naked) void FUN_0041fba0(void)
{
    __asm {
        push    esi
        push    0x2c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_41fbd8
        mov     eax, dword ptr [g_007b8c14]
        push    eax
        mov     eax, dword ptr [esp+0xc]
        push    offset g_str_76d950
        mov     ecx, eax
        shr     ecx, 0x2
        push    ecx
        push    eax
        push    0x10
        mov     ecx, esi
        call    FUN_00415d70
        mov     dword ptr [g_007b9458], esi
        pop     esi
        ret
L_41fbd8:
        mov     dword ptr [g_007b9458], 0x0
        pop     esi
        ret
    }
}
