/*
 * FUN_00719a00 (221 B) — D3D8 error-code -> string lookup.
 *
 * Returns a string pointer for a D3D8 HRESULT, or formats "Unknown 0x%x" via
 * sprintf (IAT) into g_87db38 for unrecognized codes. Uses a jump table at
 * 0x719ae0 (outside the 221-byte function region) referenced via extern symbol
 * g_719ae0 for the `jmp dword ptr [ecx*4 + g_719ae0]` dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_719ae0;   /* jump table base (data beyond function region) */
extern int g_76b420;   /* IAT: sprintf */

__declspec(naked) void __stdcall FUN_00719a00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        cmp     eax, 0x8876081b
        ja      L_7f
        jz      L_77
        cmp     eax, 0x88760082
        ja      L_4a
        jz      L_42
        test    eax, eax
        jz      L_3a
        cmp     eax, 1
        jz      L_32
        cmp     eax, 0x80070057
        jnz     L_c1
        mov     eax, 0x7a379c
        ret     4
L_32:
        mov     eax, 0x770d24
        ret     4
L_3a:
        mov     eax, 0x7a3798
        ret     4
L_42:
        mov     eax, 0x7a3788
        ret     4
L_4a:
        cmp     eax, 0x88760818
        jz      L_6f
        cmp     eax, 0x88760819
        jz      L_67
        cmp     eax, 0x8876081a
        jnz     L_c1
        mov     eax, 0x7a3770
        ret     4
L_67:
        mov     eax, 0x7a3754
        ret     4
L_6f:
        mov     eax, 0x7a373c
        ret     4
L_77:
        mov     eax, 0x7a3720
        ret     4
L_7f:
        lea     ecx, [eax + 0x7789f7e4]
        cmp     ecx, 0xa
        ja      L_c1
        jmp     dword ptr [ecx*4 + g_719ae0]
L_91:
        mov     eax, 0x7a370c
        ret     4
L_99:
        mov     eax, 0x7a36f4
        ret     4
L_a1:
        mov     eax, 0x7a36d8
        ret     4
L_a9:
        mov     eax, 0x7a36bc
        ret     4
L_b1:
        mov     eax, 0x7a36a0
        ret     4
L_b9:
        mov     eax, 0x7a3684
        ret     4
L_c1:
        push    eax
        push    0x7a3674
        push    0x87db38
        call    dword ptr [g_76b420]
        add     esp, 0xc
        mov     eax, 0x87db38
        ret     4
    }
}
