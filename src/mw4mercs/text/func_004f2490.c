/*
 * FUN_004f2490 (103 B) -- MLR/Adept audio renderer factory init (__cdecl,
 * no params). Calls FUN_006f4710("Audio Renderer",0,g_007dc130) storing into
 * g_007dc86c, allocates 0x20 bytes, constructs "Adept::AudioRenderer" (0x1e4)
 * via FUN_004d5c10 into g_007dc864 (or 0), then sets g_007b4358/g_007b435c
 * to 1.0f.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4710(void);
extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_004d5c10(void);

extern int g_007dc130;   /* DAT_007dc130 */
extern int g_007dc86c;   /* DAT_007dc86c */
extern int g_007dc864;   /* DAT_007dc864 */
extern int g_007dc878;   /* DAT_007dc878 */
extern int g_007b4358;   /* DAT_007b4358 */
extern int g_007b435c;   /* DAT_007b435c */

__declspec(naked) void func_004f2490(void)
{
    __asm {
        mov     eax, dword ptr [g_007dc130]
        push    eax
        push    0
        push    0x775010
        call    FUN_006f4710
        push    0x20
        mov     dword ptr [g_007dc86c], eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_d8
        mov     ecx, dword ptr [g_007dc878]
        push    0
        push    0
        push    ecx
        push    0x774ff8
        push    0x1e4
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc864], eax
        jmp     l_e2
    l_d8:
        mov     dword ptr [g_007dc864], 0
    l_e2:
        mov     dword ptr [g_007b4358], 0x3f800000
        mov     dword ptr [g_007b435c], 0x3f800000
        ret
    }
}
