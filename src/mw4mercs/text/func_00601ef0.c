/*
 * FUN_00601EF0 (843 B) — __thiscall (ECX = this), RET 8.
 *
 * Validates weapon/armor distribution counts against a global object
 * (0x7dab44 ^ 0x7dab40), iterating two arrays of slots and counting
 * matches; returns 1 on success, 0 on failure.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_006100a0(void);
extern void __cdecl FUN_0041fd80(void);

extern void *g_7dab44;          /* global object pointer @ 0x7dab44 */
extern void *g_7dab40;          /* xor key @ 0x7dab40 */
extern float g_77b63c;          /* float constant @ 0x77b63c */

__declspec(naked) unsigned char __cdecl FUN_00601ef0(void)
{
    __asm {
        sub     esp, 0x2c
        mov     eax, dword ptr [g_7dab44]
        mov     edx, dword ptr [eax]
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     edx, dword ptr [g_7dab40]
        mov     ebx, dword ptr [edx + 0xc]
        lea     eax, [edx + 0xc]
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     esi, dword ptr [eax + 0x50]
        mov     eax, dword ptr [esi + 0x38]
        xor     ebx, 0x85739531
        test    eax, eax
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x10], esi
        jz      L_1f5a
        mov     eax, dword ptr [esi + 0x40]
        test    eax, eax
        jle     L_1f5a
        mov     al, byte ptr [ecx + 0x2214]
        test    al, al
        jz      L_222f
        add     ecx, 0x21e8
        call    FUN_006100a0
        fcomp   dword ptr [g_77b63c]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_222f

    L_1f5a:
        mov     eax, dword ptr [esi + 0xe4]
        test    eax, eax
        jnz     L_206f
        mov     edi, dword ptr [esp + 0x44]
        xor     ebp, ebp
        lea     edx, [ebx + 0x3584]
        mov     esi, 0xff
    L_1f79:
        mov     al, byte ptr [edx + -0x4c]
        test    al, al
        jz      L_1fec
        mov     eax, dword ptr [edx]
        test    eax, eax
        jz      L_1fec
        mov     eax, dword ptr [eax + 0x170]
        test    eax, eax
        jz      L_1fec
        mov     ecx, dword ptr [eax + 0x4]
        cmp     dword ptr [ecx], 0x429
        jnz     L_1fec
        inc     dword ptr [edi]
        mov     cl, byte ptr [esp + 0x40]
        cmp     cl, byte ptr [eax + 0x14]
        jnz     L_1fb1
        mov     cx, word ptr [esp + 0x42]
        cmp     cx, word ptr [eax + 0x16]
        jz      L_1fdc
    L_1fb1:
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        and     cl, 0x1
        jz      L_1fd6
        mov     eax, dword ptr [eax + 0x4c8]
        mov     ebx, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [ebx + 0x3c]
        jge     L_1fd2
        mov     ebx, dword ptr [esp + 0x14]
        inc     ebp
        jmp     L_1fec
    L_1fd2:
        mov     ebx, dword ptr [esp + 0x14]
    L_1fd6:
        test    cl, cl
        jnz     L_1fec
        jmp     L_1feb
    L_1fdc:
        mov     ecx, dword ptr [eax + 0x4c8]
        mov     eax, dword ptr [esp + 0x10]
        cmp     ecx, dword ptr [eax + 0x3c]
        jge     L_1fec
    L_1feb:
        inc     ebp
    L_1fec:
        add     edx, 0x2038
        dec     esi
        jnz     L_1f79
        lea     edx, [ebx + 0x205d30]
        mov     esi, 0x18
    L_2000:
        mov     eax, dword ptr [edx]
        test    eax, eax
        jz      L_2051
        mov     ecx, dword ptr [edi]
        mov     bl, byte ptr [eax + 0x14]
        inc     ecx
        mov     dword ptr [edi], ecx
        mov     cl, byte ptr [esp + 0x40]
        cmp     cl, bl
        jnz     L_2021
        mov     cx, word ptr [esp + 0x42]
        cmp     cx, word ptr [eax + 0x16]
        jz      L_2041
    L_2021:
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        and     cl, 0x1
        jz      L_203b
        mov     eax, dword ptr [eax + 0x4c8]
        mov     ebx, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [ebx + 0x3c]
        jl      L_2050
    L_203b:
        test    cl, cl
        jnz     L_2051
        jmp     L_2050
    L_2041:
        mov     ecx, dword ptr [eax + 0x4c8]
        mov     eax, dword ptr [esp + 0x10]
        cmp     ecx, dword ptr [eax + 0x3c]
        jge     L_2051
    L_2050:
        inc     ebp
    L_2051:
        add     edx, 0x22ac
        dec     esi
        jnz     L_2000
        cmp     ebp, 0x1
        jg      L_222f
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x2c
        ret     0x8

    L_206f:
        xor     eax, eax
        mov     ecx, 0x8
        lea     edi, [esp + 0x1c]
        rep stosd
        xor     ecx, ecx
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], ecx
        lea     esi, [ebx + 0x3584]
        mov     edi, 0xff
    L_2091:
        mov     al, byte ptr [esi + -0x4c]
        test    al, al
        jz      L_210c
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_210c
        mov     eax, dword ptr [eax + 0x170]
        test    eax, eax
        jz      L_210c
        mov     edx, dword ptr [eax + 0x4]
        cmp     dword ptr [edx], 0x429
        jnz     L_210c
        mov     cl, byte ptr [esp + 0x40]
        cmp     cl, byte ptr [eax + 0x14]
        mov     edx, dword ptr [eax + 0x4cc]
        mov     byte ptr [esp + edx*0x1 + 0x14], 0x1
        jnz     L_20d2
        mov     cx, word ptr [esp + 0x42]
        cmp     cx, word ptr [eax + 0x16]
        jz      L_20f2
    L_20d2:
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        and     cl, 0x1
        jz      L_20ec
        mov     eax, dword ptr [eax + 0x4c8]
        mov     ebp, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [ebp + 0x3c]
        jl      L_2101
    L_20ec:
        test    cl, cl
        jnz     L_210c
        jmp     L_2101
    L_20f2:
        mov     ecx, dword ptr [eax + 0x4c8]
        mov     eax, dword ptr [esp + 0x10]
        cmp     ecx, dword ptr [eax + 0x3c]
        jge     L_210c
    L_2101:
        mov     ecx, dword ptr [esp + edx*0x4 + 0x1c]
        lea     eax, [esp + edx*0x4 + 0x1c]
        inc     ecx
        mov     dword ptr [eax], ecx
    L_210c:
        add     esi, 0x2038
        dec     edi
        jnz     L_2091
        lea     esi, [ebx + 0x205d30]
        mov     bx, word ptr [esp + 0x42]
        mov     edi, 0x18
    L_2129:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_218e
        mov     cl, byte ptr [esp + 0x40]
        cmp     cl, byte ptr [eax + 0x14]
        jnz     L_213e
        cmp     bx, word ptr [eax + 0x16]
        jz      L_2173
    L_213e:
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax + 0x4cc]
        shr     ecx, 0x13
        and     cl, 0x1
        mov     byte ptr [esp + edx*0x1 + 0x14], 0x1
        jz      L_2169
        mov     eax, dword ptr [eax + 0x4c8]
        mov     ebp, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [ebp + 0x3c]
        jge     L_2169
        lea     eax, [esp + edx*0x4 + 0x1c]
        jmp     L_218c
    L_2169:
        test    cl, cl
        jnz     L_218e
        lea     eax, [esp + edx*0x4 + 0x1c]
        jmp     L_218c
    L_2173:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax + 0x4c8]
        cmp     ecx, dword ptr [edx + 0x3c]
        jge     L_218e
        mov     eax, dword ptr [eax + 0x4cc]
        lea     eax, [esp + eax*0x4 + 0x1c]
    L_218c:
        inc     dword ptr [eax]
    L_218e:
        add     esi, 0x22ac
        dec     edi
        jnz     L_2129
        mov     ecx, dword ptr [esp + 0x44]
        xor     eax, eax
    L_219d:
        mov     dl, byte ptr [esp + eax*0x1 + 0x14]
        test    dl, dl
        jz      L_21a7
        inc     dword ptr [ecx]
    L_21a7:
        inc     eax
        cmp     eax, 0x8
        jl      L_219d
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     esi, dword ptr [edx + 0xc]
        xor     esi, 0x85739531
        xor     eax, eax
        lea     ecx, [esp + 0x1c]
    L_21ca:
        cmp     dword ptr [ecx], 0x0
        jnz     L_21e4
        inc     eax
        add     ecx, 0x4
        cmp     eax, 0x8
        jl      L_21ca
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x2c
        ret     0x8
    L_21e4:
        mov     ecx, dword ptr [esi + eax*0x4 + 0x204d00]
        call    FUN_0041fd80
        mov     ebx, dword ptr [eax + 0x514]
        xor     edi, edi
        lea     ebp, [esp + 0x1c]
        add     esi, 0x204d00
    L_2202:
        cmp     dword ptr [ebp], 0x0
        jz      L_2217
        mov     ecx, dword ptr [esi]
        call    FUN_0041fd80
        cmp     ebx, dword ptr [eax + 0x514]
        jnz     L_222f
    L_2217:
        inc     edi
        add     ebp, 0x4
        add     esi, 0x4
        cmp     edi, 0x8
        jl      L_2202
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x2c
        ret     0x8
    L_222f:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x2c
        ret     0x8
    }
}
