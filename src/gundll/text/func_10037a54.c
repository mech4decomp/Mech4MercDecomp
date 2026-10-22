/*
 * FUN_10037A54 (186 B) - __cdecl, 1 arg (string). 64-bit number parser
 * (atoi-like): skips whitespace via the flag table g_10051984 /
 * g_10051b90 gate (or FUN_100399db), parses an optional sign, then
 * accumulates digits into a 64-bit value (ebx:ebp) using the 64-bit
 * multiply helper FUN_10039a50. Returns the value in edx:eax.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10051b90;                    /* cmp dword ptr [g],imm */
extern char *g_10051984;                  /* mov reg,[g] byte table base */
extern void __cdecl FUN_100399db(void);   /* rel32 call */
extern void __cdecl FUN_10039a50(void);   /* rel32 call, __stdcall RET 0x10 */

__declspec(naked) void __cdecl FUN_10037A54(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x18]
L_skipws:
        cmp     dword ptr [g_10051b90], 1
        jle     L_skipws2
        movzx   eax, byte ptr [edi]
        push    8
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_afterws
L_skipws2:
        movzx   eax, byte ptr [edi]
        mov     ecx, dword ptr [g_10051984]
        mov     al, byte ptr [ecx+eax*2]
        and     eax, 8
L_afterws:
        test    eax, eax
        je      L_sign
        inc     edi
        jmp     L_skipws
L_sign:
        movzx   esi, byte ptr [edi]
        inc     edi
        cmp     esi, 0x2d
        mov     dword ptr [esp+0x10], esi
        je      L_sign2
        cmp     esi, 0x2b
        jne     L_digits
L_sign2:
        movzx   esi, byte ptr [edi]
        inc     edi
L_digits:
        xor     ebx, ebx
        xor     ebp, ebp
L_digitloop:
        cmp     dword ptr [g_10051b90], 1
        jle     L_digit2
        push    4
        push    esi
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_afterdigit
L_digit2:
        mov     eax, dword ptr [g_10051984]
        mov     al, byte ptr [eax+esi*2]
        and     eax, 4
L_afterdigit:
        test    eax, eax
        je      L_neg
        lea     eax, [esi-0x30]
        push    0
        cdq
        mov     esi, eax
        push    0xa
        push    ebp
        mov     dword ptr [esp+0x24], esi
        push    ebx
        mov     esi, edx
        call    FUN_10039a50
        mov     ecx, dword ptr [esp+0x18]
        add     ecx, eax
        adc     esi, edx
        mov     ebx, ecx
        mov     ebp, esi
        movzx   esi, byte ptr [edi]
        inc     edi
        jmp     L_digitloop
L_neg:
        cmp     dword ptr [esp+0x10], 0x2d
        mov     eax, ebx
        jne     L_ret
        neg     eax
        mov     edx, ebp
        adc     edx, 0
        neg     edx
        jmp     L_ret2
L_ret:
        mov     edx, ebp
L_ret2:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
