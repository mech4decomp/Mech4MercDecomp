/*
 * FUN_006039a0 (62 B) — destroys the object in global 0x007f27a0 (dtor +
 * free), then releases the object in 0x007f27a4 via FUN_006f4850(1, obj),
 * nulling both globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f27a0;
extern int g_007f27a4;
extern void __cdecl FUN_004dd340(void);
extern void __cdecl FUN_004084e0(int);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_006039a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007f27a0]
        test    esi, esi
        jz      L_skip
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov     eax, dword ptr [g_007f27a4]
        push    0x1
        push    eax
        mov     dword ptr [g_007f27a0], 0x0
        call    FUN_006f4850
        mov     dword ptr [g_007f27a4], 0x0
        pop     esi
        ret
    }
}
