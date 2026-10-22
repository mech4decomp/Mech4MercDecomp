/*
 * FUN_006fbab0 (385 B) — __cdecl, no params, plain RET.
 * Directory enumeration: calls FindNextFileA (via IAT g_0076b1ac) into
 * DAT_00856450, compares the filename (DAT_0085647c) against two reference
 * strings (0x79278c, 0x7a02ac) using a strcmp-style loop, and returns
 * &DAT_0085647c when the hidden-file bit (0x10) is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0085671c;   /* HANDLE */
extern int g_0076b1ac;   /* FindNextFileA IAT slot */
extern int g_0076b19c;   /* FindClose IAT slot */
extern int g_00856450;   /* WIN32_FIND_DATA */

__declspec(naked) void __cdecl FUN_006fbab0(void)
{
    __asm {
        mov     eax, dword ptr [g_0085671c]
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        push    esi
        push    edi
        jz      L_bc2b
        mov     edi, dword ptr [g_0076b1ac]
        push    0x856450
        push    eax
        call    edi
        test    eax, eax
        jz      L_bc18
        mov     esi, 0x79278c
        mov     eax, 0x85647c
S1:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     S1_mis
        cmp     cl, bl
        jz      S1_ok
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     S1_mis
        add     eax, 0x2
        add     esi, 0x2
        cmp     cl, bl
        jnz     S1
S1_ok:
        xor     eax, eax
        jmp     S1_done
S1_mis:
        sbb     eax, eax
        sbb     eax, -0x1
S1_done:
        cmp     eax, ebx
        jz      L_bb46
        mov     esi, 0x7a02ac
        mov     eax, 0x85647c
S2:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     S2_mis
        cmp     cl, bl
        jz      S2_ok
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     S2_mis
        add     eax, 0x2
        add     esi, 0x2
        cmp     cl, bl
        jnz     S2
S2_ok:
        xor     eax, eax
        jmp     S2_done
S2_mis:
        sbb     eax, eax
        sbb     eax, -0x1
S2_done:
        cmp     eax, ebx
        jnz     L_bb4c
L_bb46:
        mov     dword ptr [g_00856450], ebx
L_bb4c:
        mov     eax, dword ptr [g_00856450]
        and     eax, 0x10
        test    al, al
        jnz     L_bbf6
L_bb5c:
        mov     ecx, dword ptr [g_0085671c]
        push    0x856450
        push    ecx
        call    edi
        test    eax, eax
        jz      L_bbff
        mov     esi, 0x79278c
        mov     eax, 0x85647c
S3:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     S3_mis
        cmp     cl, bl
        jz      S3_ok
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     S3_mis
        add     eax, 0x2
        add     esi, 0x2
        cmp     cl, bl
        jnz     S3
S3_ok:
        xor     eax, eax
        jmp     S3_done
S3_mis:
        sbb     eax, eax
        sbb     eax, -0x1
S3_done:
        cmp     eax, ebx
        jz      L_bbe0
        mov     esi, 0x7a02ac
        mov     eax, 0x85647c
S4:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     S4_mis
        cmp     cl, bl
        jz      S4_ok
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     S4_mis
        add     eax, 0x2
        add     esi, 0x2
        cmp     cl, bl
        jnz     S4
S4_ok:
        xor     eax, eax
        jmp     S4_done
S4_mis:
        sbb     eax, eax
        sbb     eax, -0x1
S4_done:
        cmp     eax, ebx
        jnz     L_bbe6
L_bbe0:
        mov     dword ptr [g_00856450], ebx
L_bbe6:
        mov     eax, dword ptr [g_00856450]
        and     eax, 0x10
        test    al, al
        jz      L_bb5c
L_bbf6:
        pop     edi
        pop     esi
        mov     eax, 0x85647c
        pop     ebx
        ret
L_bbff:
        mov     ecx, dword ptr [g_0085671c]
        push    ecx
        call    dword ptr [g_0076b19c]
        pop     edi
        pop     esi
        mov     dword ptr [g_0085671c], ebx
        xor     eax, eax
        pop     ebx
        ret
L_bc18:
        mov     edx, dword ptr [g_0085671c]
        push    edx
        call    dword ptr [g_0076b19c]
        mov     dword ptr [g_0085671c], ebx
L_bc2b:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret
    }
}
