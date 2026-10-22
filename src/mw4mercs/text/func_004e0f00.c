/*
 * FUN_004e0f00 (100 B) — __cdecl teardown. If arg is set, builds a node
 * via FUN_00411d10; destroys the g_007dc6dc object (FUN_004d5d20 + free),
 * then unregisters the class via FUN_006f4850 and clears globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc6e8;
extern int g_007dc6dc;
extern int g_007dc6e4;
extern void __stdcall FUN_0040eda0(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_004d5d20(void);
extern void __cdecl FUN_004084e0(void);
extern void __stdcall FUN_006f4850(void);

__declspec(naked) void FUN_004e0f00(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        test    ecx, ecx
        jz      L_skip_node
        push    0x76d9ec
        call    FUN_0040eda0
        mov     ecx, dword ptr [g_007dc6e8]
        push    ecx
        push    0x773b00
        mov     ecx, eax
        call    FUN_00411d10
L_skip_node:
        push    esi
        mov     esi, dword ptr [g_007dc6dc]
        test    esi, esi
        jz      L_skip_free
        mov     ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip_free:
        mov     edx, dword ptr [g_007dc6e4]
        push    0x1
        push    edx
        mov     dword ptr [g_007dc6dc], 0x0
        call    FUN_006f4850
        mov     dword ptr [g_007dc6e4], 0x0
        pop     esi
        ret
    }
}
