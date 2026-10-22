/*
 * FUN_004f12d0 (59 B) — MLR/Adept AttributeWatcherOfInt factory.
 * Allocates 0x20 bytes; on success constructs (vtable 0x774e60) via
 * FUN_004d5c10 and stores in g_007dc138, else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007dc134;
extern int  g_007dc138;
extern char g_00774e60;                 /* "Adept::AttributeWatcherOfInt" string */
extern void *__cdecl FUN_004084d0(int);
extern void *__cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004f12d0(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_1300
        mov     ecx, dword ptr [g_007dc134]
        push    0x0
        push    0x0
        push    ecx
        push    offset g_00774e60
        push    0x1fc
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc138], eax
        ret
L_1300:
        mov     dword ptr [g_007dc138], 0
        ret
    }
}
