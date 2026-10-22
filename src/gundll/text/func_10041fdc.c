/*
 * FUN_10041fdc (182 B) - __cdecl. Converts a double-precision value into a
 * normalized 80-bit extended representation (bit manipulation, no calls).
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10041fdc(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     edx, dword ptr [ebp + 0xc]
        push    ebx
        push    esi
        push    edi
        mov     ax, word ptr [edx + 0x6]
        mov     edi, 0x7ff
        mov     ecx, eax
        and     eax, 0x8000
        shr     ecx, 0x4
        and     ecx, edi
        mov     dword ptr [ebp + 0xc], eax
        mov     eax, dword ptr [edx + 0x4]
        mov     edx, dword ptr [edx]
        movzx   ebx, cx
        mov     esi, 0x80000000
        and     eax, 0xfffff
        test    ebx, ebx
        mov     dword ptr [ebp - 0x4], esi
        jz      L_4202a
        cmp     ebx, edi
        jz      L_42023
        lea     edi, [ecx + 0x3c00]
        jmp     L_4204b
L_42023:
        mov     edi, 0x7fff
        jmp     L_4204b
L_4202a:
        xor     ebx, ebx
        cmp     eax, ebx
        jnz     L_42042
        cmp     edx, ebx
        jnz     L_42042
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax], ebx
        mov     word ptr [eax + 0x8], bx
        jmp     L_4208d
L_42042:
        lea     edi, [ecx + 0x3c01]
        mov     dword ptr [ebp - 0x4], ebx
L_4204b:
        mov     ecx, edx
        shr     ecx, 0x15
        shl     eax, 0xb
        or      ecx, eax
        mov     eax, dword ptr [ebp + 0x8]
        or      ecx, dword ptr [ebp - 0x4]
        shl     edx, 0xb
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax], edx
L_42063:
        __emit 0x85  /* __emit: reference test esi,ecx (85 CE); MSVC6 normalizes operand order to test ecx,esi (85 F1) */
        __emit 0xCE
        jnz     L_42084
L_42067:
        mov     edx, dword ptr [eax]
        add     ecx, ecx
        mov     ebx, edx
        shr     ebx, 0x1f
        or      ebx, ecx
        lea     ecx, [edx + edx*1]
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x4], ebx
        add     edi, 0xffff
        mov     ecx, ebx
        jmp     L_42063
L_42084:
        mov     ecx, dword ptr [ebp + 0xc]
        or      ecx, edi
        mov     word ptr [eax + 0x8], cx
L_4208d:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
