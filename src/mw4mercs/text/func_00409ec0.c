/*
 * FUN_00409ec0 (85 B) — __thiscall-style scalar destructor with a
 * reference-counted global singleton teardown (DAT_007b87c8 / DAT_007b87cc).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);

extern int g_007b87c8;
extern int g_007b87cc;

__declspec(naked) void FUN_00409ec0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp+8], 1
        jz      skip
        mov     ecx, dword ptr [g_007b87c8]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007b87cc]
        jnz     skip
        push    edi
        mov     edi, dword ptr [g_007b87c8]
        test    edi, edi
        jz      nofree
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 4
nofree:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007b87c8], 0
        pop     esi
        ret     4
skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
