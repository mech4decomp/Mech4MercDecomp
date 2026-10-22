/*
 * FUN_004f8860 (107 B) — point-in-polygon / convex-hull containment test.
 * Iterates over a list of 2D points (8-byte {x,y} pairs), computing a
 * cross-product against a reference edge; returns 0 if any value falls
 * below the epsilon at 0x0076c5b0, else 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;

__declspec(naked) void FUN_004f8860(void)
{
    __asm {
        mov     eax, dword ptr [esp+8]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [eax+4]
        test    edi, edi
        jbe     L_88bf
        mov     esi, dword ptr [eax]
        mov     ebx, dword ptr [esp+0x10]
        mov     edx, 1
        mov     ecx, esi
L_887b:
        cmp     edx, edi
        mov     eax, edx
        jnz     L_8883
        xor     eax, eax
L_8883:
        fld     dword ptr [ecx]
        fsub    dword ptr [ebx]
        fld     dword ptr [ecx+4]
        fsub    dword ptr [ebx+4]
        fld     dword ptr [esi+eax*8]
        fsub    dword ptr [ecx]
        fld     dword ptr [esi+eax*8+4]
        fsub    dword ptr [ecx+4]
        __emit 0xD9   /* fxch st(1): MSVC6 inline asm rejects fxch */
        __emit 0xC9
        fmul    st(0), st(2)
        __emit 0xD9   /* fxch st(1) */
        __emit 0xC9
        fmul    st(0), st(3)
        __emit 0xDE   /* fsubp st(1),st(0): MSVC6 rejects fsubp */
        __emit 0xE9
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        fstp    st(0)
        __emit 0xF6   /* test ah, imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        fstp    st(0)
        jnz     L_88c5
        inc     edx
        lea     eax, [edx-1]
        add     ecx, 8
        cmp     eax, edi
        jc      L_887b
L_88bf:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
L_88c5:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret
    }
}
