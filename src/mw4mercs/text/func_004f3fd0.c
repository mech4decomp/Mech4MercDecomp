/*
 * FUN_004F3FD0 (49 B) — Adept::Player class unregistration/teardown. __cdecl.
 * If global 0x7dc890 non-null: __thiscall FUN_00501b40(this) then free via
 * FUN_004084e0. Clears global, then FUN_004c8e90(6).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7dc890;
extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_004c8e90(int);

__declspec(naked) void __cdecl FUN_004f3fd0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_7dc890]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        push    0x6
        mov     dword ptr [g_7dc890], 0
        call    FUN_004c8e90
        add     esp, 0x4
        pop     esi
        ret
    }
}
