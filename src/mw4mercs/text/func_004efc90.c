/*
 * FUN_004efc90 (59 B) — Adept::LightComponent factory. Allocates a
 * component via FUN_004084d0(0x20); on success constructs it through
 * FUN_004d5c10(0x21c, "Adept::LightComponent", g_007dc83c, 0, 0) and
 * stores the result in g_007dc820; otherwise stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

extern int  g_007dc83c;   /* DAT_007dc83c */
extern int  g_007dc820;   /* DAT_007dc820 */
extern char g_774cc8[];   /* "Adept::LightComponent" @ 0x774cc8 */

__declspec(naked) void FUN_004efc90(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      Lcc0
        mov     ecx, dword ptr [g_007dc83c]
        push    0x0
        push    0x0
        push    ecx
        push    offset g_774cc8
        push    0x21c
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc820], eax
        ret
Lcc0:
        mov     dword ptr [g_007dc820], 0x0
        ret
    }
}
