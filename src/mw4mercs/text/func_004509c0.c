/*
 * FUN_004509c0 (62 B) — MLR class teardown (sibling of FUN_0044cf40).
 * Frees the 0x18-byte object and releases the class registration
 * (FUN_006f4850), clearing globals 0x7b98cc / 0x7b98d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b98cc;
extern int g_007b98d0;

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_004509c0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b98cc]
        test    esi, esi
        jz      L_509db
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_509db:
        mov     eax, dword ptr [g_007b98d0]
        push    0x1
        push    eax
        mov     dword ptr [g_007b98cc], 0x0
        call    FUN_006f4850
        mov     dword ptr [g_007b98d0], 0x0
        pop     esi
        ret
    }
}
