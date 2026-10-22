/*
 * FUN_004f6640 (62 B) — MLR/Adept teardown. Destroys the manager object at
 * [0x007dc8a4] (FUN_00501b40 + free FUN_004084e0), then releases the
 * [0x007dc8a8] object via FUN_006f4850, clearing both globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc8a4;
extern int g_007dc8a8;

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_004f6640(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007dc8a4]
        test    esi, esi
        jz      L665B
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L665B:
        mov     eax, dword ptr [g_007dc8a8]
        push    0x1
        push    eax
        mov     dword ptr [g_007dc8a4], 0x0
        call    FUN_006f4850
        mov     dword ptr [g_007dc8a8], 0x0
        pop     esi
        ret
    }
}
