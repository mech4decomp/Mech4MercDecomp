/*
 * FUN_1003d187 (179 B) - __cdecl. Configures a global buffer size/type based
 * on the current mode (DAT_10076a94), validating size bounds.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10076a94;    /* global mode */
extern int g_10076860;    /* global size (mode 3) */
extern int g_10053f94;    /* global size (mode 2) */
extern void __cdecl FUN_10038c6d(void);   /* rel32 call */
extern void __cdecl FUN_1003d23a(void);   /* rel32 call */
extern void __cdecl FUN_1003e1a3(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_1003d187(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [g_10076a94]
        push    esi
        cmp     eax, 0x3
        jnz     L_d1ad
        mov     eax, dword ptr [ebp + 0x8]
        cmp     eax, 0x3f8
        ja      L_d235
        mov     dword ptr [g_10076860], eax
        jmp     L_d230
L_d1ad:
        cmp     eax, 0x2
        jnz     L_d1c8
        mov     eax, dword ptr [ebp + 0x8]
        add     eax, 0xf
        and     al, 0xf0
        cmp     eax, 0x780
        ja      L_d235
        mov     dword ptr [g_10053f94], eax
        jmp     L_d230
L_d1c8:
        cmp     eax, 0x1
        jnz     L_d235
        mov     esi, dword ptr [ebp + 0x8]
        test    esi, esi
        jbe     L_d235
        lea     eax, [ebp + 0x8]
        push    eax
        call    FUN_10038c6d
        cmp     byte ptr [ebp + 0x8], 0x6
        pop     ecx
        jc      L_d209
        cmp     esi, 0x3f8
        ja      L_d235
        push    esi
        call    FUN_1003d23a
        test    eax, eax
        pop     ecx
        jz      L_d235
        mov     dword ptr [g_10076860], esi
        mov     dword ptr [g_10076a94], 0x3
        jmp     L_d230
L_d209:
        add     esi, 0xf
        and     esi, 0xfffffff0
        cmp     esi, 0x780
        ja      L_d235
        call    FUN_1003e1a3
        test    eax, eax
        jz      L_d235
        mov     dword ptr [g_10053f94], esi
        mov     dword ptr [g_10076a94], 0x2
L_d230:
        push    0x1
        pop     eax
        jmp     L_d237
L_d235:
        xor     eax, eax
L_d237:
        pop     esi
        pop     ebp
        ret
    }
}
