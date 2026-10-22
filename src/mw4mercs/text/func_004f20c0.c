/*
 * FUN_004f20c0 (59 B) -- MLR/Adept component factory init (__cdecl, no
 * params). Allocates 0x20 bytes via FUN_004084d0; if non-null, constructs
 * an "Adept::Component" (0x1eb) via FUN_004d5c10 and stores the result in
 * g_007dc860; else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_004d5c10(void);

extern int g_007dc140;   /* DAT_007dc140 */
extern int g_007dc860;   /* DAT_007dc860 */

__declspec(naked) void func_004f20c0(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_f0
        mov     ecx, dword ptr [g_007dc140]
        push    0
        push    0
        push    ecx
        push    0x774fd0
        push    0x1eb
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc860], eax
        ret
    l_f0:
        mov     dword ptr [g_007dc860], 0
        ret
    }
}
