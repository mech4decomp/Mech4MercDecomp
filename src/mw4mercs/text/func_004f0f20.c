/*
 * FUN_004f0f20 (59 B) — MLR/Adept GroupComponent factory. Allocates
 * 0x20 bytes; on success constructs a GroupComponent (vtable 0x774df0)
 * via FUN_004d5c10 and stores it in g_007dc840, else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007dc83c;
extern int  g_007dc840;
extern char g_00774df0;                 /* "Adept::GroupComponent" string */
extern void *__cdecl FUN_004084d0(int);
extern void *__cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004f0f20(void)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_0f50
        mov     ecx, dword ptr [g_007dc83c]
        push    0x0
        push    0x0
        push    ecx
        push    offset g_00774df0
        push    0x21a
        mov     ecx, eax
        call    FUN_004d5c10
        mov     dword ptr [g_007dc840], eax
        ret
L_0f50:
        mov     dword ptr [g_007dc840], 0
        ret
    }
}
