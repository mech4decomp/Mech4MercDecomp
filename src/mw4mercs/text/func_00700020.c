/*
 * FUN_00700020 (77 B) — Teardown helper that drains two object lists
 * (calling FUN_006ffeb0 on each while non-null), then finalizes two
 * static buffers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006ffeb0(void *obj, int flag);

extern unsigned int g_85682c;   /* DAT_0085682c */
extern unsigned int g_8567ec;   /* DAT_008567ec */

__declspec(naked) void FUN_00700020(void)
{
    __asm {
        mov     eax, dword ptr [g_85682c]
        test    eax, eax
        jz      L_70003a
L_700029:
        push    0x0
        push    eax
        call    FUN_006ffeb0
        mov     eax, dword ptr [g_85682c]
        test    eax, eax
        jnz     L_700029
L_70003a:
        mov     eax, dword ptr [g_8567ec]
        test    eax, eax
        jz      L_700054
L_700043:
        push    0x0
        push    eax
        call    FUN_006ffeb0
        mov     eax, dword ptr [g_8567ec]
        test    eax, eax
        jnz     L_700043
L_700054:
        push    0x0
        push    0x8567f8
        call    FUN_006ffeb0
        push    0x0
        push    0x8567b8
        call    FUN_006ffeb0
        ret
    }
}
