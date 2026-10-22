/*
 * FUN_004e5fe0 (84 B) — MLR/Adept state-engine subsystem init (__cdecl).
 * Allocates + constructs an object (FUN_004d5c10) stored at g_007dc76c,
 * then registers a handler via FUN_006f4710 stored at g_007dc770.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007dc140;
extern int   g_007dc76c;
extern int   g_00849304;
extern int   g_007dc770;
extern void  FUN_004084d0(void);
extern void  FUN_004d5c10(void);
extern void  FUN_006f4710(void);

__declspec(naked) void FUN_004e5fe0(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4e6011
        mov     ecx, dword ptr [g_007dc140]
        push    0x0
        push    0x0
        push    ecx
        push    0x7740a8
        push    0x1d4
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc76c], eax
        jmp     L_4e601b
    L_4e6011:
        mov     dword ptr [g_007dc76c], 0x0
    L_4e601b:
        mov     edx, dword ptr [g_00849304]
        push    edx
        push    0x0
        push    0x774098
        call    FUN_006f4710
        mov     dword ptr [g_007dc770], eax
        ret
    }
}
