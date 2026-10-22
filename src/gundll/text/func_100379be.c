/*
 * FUN_100379be (139 B) - __thiscall, RET.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100399db(void);   /* rel32 call */
extern int g_10051b90;                    /* cmp dword ptr [g],imm */
extern char *g_10051984;                  /* mov reg,[g] byte table base */

__declspec(naked) void FUN_100379be(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
L_c6:
        cmp     dword ptr [g_10051b90], 1
        jle     L_de
        movzx   eax, byte ptr [edi]
        push    8
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_ed
L_de:
        movzx   eax, byte ptr [edi]
        mov     ecx, dword ptr [g_10051984]
        mov     al, byte ptr [ecx + eax*2]
        and     eax, 8
L_ed:
        test    eax, eax
        jz      L_f4
        inc     edi
        jmp     L_c6
L_f4:
        movzx   esi, byte ptr [edi]
        inc     edi
        cmp     esi, 0x2d
        mov     ebp, esi
        jz      L_04
        cmp     esi, 0x2b
        jnz     L_08
L_04:
        movzx   esi, byte ptr [edi]
        inc     edi
L_08:
        xor     ebx, ebx
L_0a:
        cmp     dword ptr [g_10051b90], 1
        jle     L_1f
        push    4
        push    esi
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_2a
L_1f:
        mov     eax, dword ptr [g_10051984]
        mov     al, byte ptr [eax + esi*2]
        and     eax, 4
L_2a:
        test    eax, eax
        jz      L_3b
        lea     eax, [ebx + ebx*4]
        lea     ebx, [esi + eax*2 - 0x30]
        movzx   esi, byte ptr [edi]
        inc     edi
        jmp     L_0a
L_3b:
        cmp     ebp, 0x2d
        mov     eax, ebx
        jnz     L_44
        neg     eax
L_44:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
