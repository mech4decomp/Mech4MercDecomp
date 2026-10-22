/* FUN_006e1c70 - 445 bytes, __thiscall, RET 0x4 */
extern void *g_0076b110;
extern void *g_0076b100;
extern void *g_0076b294;
extern void *g_0076b2d0;
extern void *__cdecl FUN_006e1e30(unsigned int);
extern void __cdecl FUN_006e2840(void);
extern void __cdecl FUN_006e2950(void);
extern void __cdecl FUN_006e2b60(void *);
extern void __cdecl FUN_006e29e0(void);
extern void __cdecl FUN_006e1e40(void *);
__declspec(naked) void FUN_006e1c70(void)
{
    __asm {
        sub     esp, 0x18
        push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x14]
        push    esi
        mov     dword ptr [esp + 0xc], edi
        mov     dword ptr [esp + 0x20], esi
        call    dword ptr [g_0076b110]
        mov     al, byte ptr [edi + 0x38]
        test    al, al
        jnz     L_e1c9f
        push    esi
        call    dword ptr [g_0076b100]
        pop     edi
        pop     esi
        add     esp, 0x18
        ret     0x4
    L_e1c9f:
        mov     ecx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [edi + 0x8]
        cmp     ecx, eax
        push    ebx
        push    ebp
        jnz     L_e1dcc
        lea     ebx, [eax + 0x32]
        lea     eax, [ebx*0x8 + 0x0]
        sub     eax, ebx
        lea     ecx, [ebx + eax*0x4]
        lea     edx, [ecx*0x4 + 0x4]
        push    edx
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_006e1e30
        add     esp, 0x4
        test    eax, eax
        jz      L_e1d12
        lea     esi, [eax + 0x4]
        mov     dword ptr [eax], ebx
        lea     eax, [ebx + -0x1]
        test    eax, eax
        mov     dword ptr [esp + 0x18], esi
        jl      L_e1d14
        lea     ebp, [eax + 0x1]
    L_e1ce9:
        mov     ecx, esi
        call    FUN_006e2840
        mov     ecx, esi
        mov     dword ptr [esi + 0x70], 0x0
        call    FUN_006e2950
        xor     eax, eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0x4], eax
        add     esi, 0x74
        dec     ebp
        /* __emit: MSVC6 miscomputes backward short jcc rel8 (off-by-2) */
        __emit 0x75
        __emit 0xDD
        mov     esi, dword ptr [esp + 0x18]
        jmp     L_e1d14
    L_e1d12:
        xor     esi, esi
    L_e1d14:
        mov     eax, dword ptr [edi + 0x4]
        test    eax, eax
        mov     dword ptr [esp + 0x18], esi
        jle     L_e1d83
        mov     edi, dword ptr [edi]
        lea     ebx, [edi + 0x8]
        sub     edi, esi
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x14], eax
        jmp     L_e1d34
    L_e1d30:
        mov     edi, dword ptr [esp + 0x1c]
    L_e1d34:
        add     edi, esi
        push    edi
        mov     ecx, esi
        call    FUN_006e2b60
        mov     ecx, dword ptr [ebx]
        mov     eax, dword ptr [ebx + -0x4]
        mov     dword ptr [esi + 0x8], ecx
        mov     ecx, edi
        mov     dword ptr [esi + 0x4], eax
        lea     eax, [esi + 0xc]
        sub     ecx, esi
        mov     edx, 0x19
    L_e1d55:
        mov     ebp, dword ptr [ecx + eax*0x1]
        mov     dword ptr [eax], ebp
        add     eax, 0x4
        dec     edx
        /* __emit: MSVC6 miscomputes backward short jcc rel8 (off-by-2) */
        __emit 0x75
        __emit 0xF5
        mov     edx, dword ptr [edi + 0x70]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x70], edx
        add     ebx, 0x74
        add     esi, 0x74
        dec     eax
        mov     dword ptr [esp + 0x14], eax
        /* __emit: MSVC6 miscomputes backward short jcc rel8 (off-by-2) */
        __emit 0x75
        __emit 0xB9
        mov     esi, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [esp + 0x20]
        mov     edi, dword ptr [esp + 0x10]
    L_e1d83:
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        jz      L_e1dc7
        mov     eax, dword ptr [ecx + -0x4]
        lea     edx, [ecx + -0x4]
        lea     ebp, [eax*0x8 + 0x0]
        sub     ebp, eax
        lea     ebp, [eax + ebp*0x4]
        dec     eax
        mov     dword ptr [esp + 0x20], edx
        lea     ebp, [ecx + ebp*0x4]
        js      L_e1dbe
        inc     eax
        mov     dword ptr [esp + 0x18], eax
    L_e1daa:
        sub     ebp, 0x74
        mov     ecx, ebp
        call    FUN_006e29e0
        dec     dword ptr [esp + 0x18]
        /* __emit: MSVC6 miscomputes backward short jcc rel8 (off-by-2) */
        __emit 0x75
        __emit 0xF0
        mov     edx, dword ptr [esp + 0x20]
    L_e1dbe:
        push    edx
        call    FUN_006e1e40
        add     esp, 0x4
    L_e1dc7:
        mov     dword ptr [edi], esi
        mov     dword ptr [edi + 0x8], ebx
    L_e1dcc:
        mov     eax, dword ptr [edi + 0x4]
        mov     ebp, dword ptr [esp + 0x2c]
        lea     ecx, [eax*0x8 + 0x0]
        sub     ecx, eax
        lea     edx, [eax + ecx*0x4]
        mov     eax, dword ptr [edi]
        lea     ebx, [eax + edx*0x4]
        push    ebp
        mov     ecx, ebx
        call    FUN_006e2b60
        mov     ecx, dword ptr [ebp + 0x4]
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0x70]
        mov     dword ptr [ebx + 0x4], ecx
        mov     dword ptr [ebx + 0x8], edx
        lea     edi, [ebx + 0xc]
        lea     esi, [ebp + 0xc]
        mov     ecx, 0x19
        rep movsd
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ebx + 0x70], eax
        mov     eax, dword ptr [ecx + 0x4]
        inc     eax
        mov     edx, ecx
        mov     dword ptr [edx + 0x4], eax
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        call    dword ptr [g_0076b100]
        pop     ebp
        pop     ebx
        pop     edi
        pop     esi
        add     esp, 0x18
        ret     0x4
    }
}
