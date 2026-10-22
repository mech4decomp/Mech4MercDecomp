/*
 * FUN_004f3750 (101 B) — MLR/Adept offscreen/render component factory.
 * Allocates a 0xa4-byte object and, if successful, constructs an
 * "Adept::DropZone" component via FUN_00501a20 with a large argument
 * list; stores the result in global DAT_007dc88c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

extern int g_007dc8cc;   /* DAT_007dc8cc */
extern int g_007dc690;   /* DAT_007dc690 */
extern int g_007dc88c;   /* DAT_007dc88c */

__declspec(naked) void FUN_004f3750(void)
{
    __asm {
        push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L37AA
        mov     ecx, dword ptr [g_007dc8cc]
        mov     edx, dword ptr [g_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0x0
        push    0x501eb0
        push    ecx
        push    0x5070b0
        push    0x4f37f0
        push    0x0
        push    0x0
        push    edx
        push    0x77511c
        push    0x1d5
        mov     ecx, eax
        call    FUN_00501a20
        mov     dword ptr [g_007dc88c], eax
        ret
L37AA:
        mov     dword ptr [g_007dc88c], 0x0
        ret
    }
}
