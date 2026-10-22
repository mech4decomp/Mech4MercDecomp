/*
 * FUN_004eff30 (59 B) — Adept::CameraComponent factory. Allocates a
 * component via FUN_004084d0(0x20); on success constructs it through
 * FUN_004d5c10(0x21b, "Adept::CameraComponent", g_007dc840, 0, 0) and
 * stores the result in g_007dc824; otherwise stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

extern int  g_007dc840;   /* DAT_007dc840 */
extern int  g_007dc824;   /* DAT_007dc824 */
extern char g_774cf8[];   /* "Adept::CameraComponent" @ 0x774cf8 */

__declspec(naked) void FUN_004eff30(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      Lf60
        mov     ecx, dword ptr [g_007dc840]
        push    0x0
        push    0x0
        push    ecx
        push    offset g_774cf8
        push    0x21b
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc824], eax
        ret
Lf60:
        mov     dword ptr [g_007dc824], 0x0
        ret
    }
}
