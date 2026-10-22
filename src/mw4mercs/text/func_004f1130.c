/*
 * FUN_004f1130 (59 B) — MLR/Adept MatcherOfInt factory. Allocates
 * 0x20 bytes; on success constructs (vtable 0x774e1c) via
 * FUN_004d5c10 and stores in g_007dc13c, else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007dc134;
extern int  g_007dc13c;
extern char g_00774e1c;                 /* "Adept::MatcherOfInt" string */
extern void *__cdecl FUN_004084d0(int);
extern void *__cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004f1130(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_1160
        mov     ecx, dword ptr [g_007dc134]
        push    0x0
        push    0x0
        push    ecx
        push    offset g_00774e1c
        push    0x20e
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc13c], eax
        ret
L_1160:
        mov     dword ptr [g_007dc13c], 0
        ret
    }
}
