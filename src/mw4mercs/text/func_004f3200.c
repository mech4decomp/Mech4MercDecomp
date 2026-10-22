/*
 * FUN_004f3200 (59 B) — MLR/Adept renderer singleton init. Allocates 0x20
 * bytes (FUN_004084d0); on success constructs an object via FUN_004d5c10
 * and stores it in global 0x007dc878, else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc140;
extern int g_007dc878;

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004f3200(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_3230
        mov     ecx, dword ptr [g_007dc140]
        push    0x0
        push    0x0
        push    ecx
        push    0x775094
        push    0x1e2
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc878], eax
        ret
L_3230:
        mov     dword ptr [g_007dc878], 0x0
        ret
    }
}
