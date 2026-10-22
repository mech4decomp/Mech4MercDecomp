/*
 * FUN_006fd510 (1261 B) — gundll save/load state dispatcher. Reads a mode
 * word from param_2+8 and switches (jump table at 0x6fda00) over the
 * 0x2200..0x2205 command codes, calling virtual methods on the object at
 * g_00856860+0xc / +0x14, formatting wide strings via _itow/wcscpy/wcscat
 * (IATs 0x76b374/0x76b3e0/0x76b3f4), and updating the g_008568xx state
 * globals. Errors route through FUN_006fde20 and set g_007b6f08/0x4c/0x48.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00856850;
extern int g_00856848;
extern int g_00856860;
extern int g_0085684c;
extern int g_00856858;
extern int g_00856854;
extern int g_007b6f08;
extern int g_007b6f04;
extern void * g_0076b374;   /* _itow IAT */
extern void * g_0076b3e0;   /* wcscpy IAT */
extern void * g_0076b3f4;   /* wcscat IAT */
extern void __cdecl FUN_006fde20(void);
extern int __cdecl FUN_007047f0(void);

__declspec(naked) void FUN_006fd510(void)
{
    __asm {
        mov     eax, dword ptr [g_00856850]
        sub     esp, 0x28
        push    esi
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jnz     L_d534
        pop     edi
        mov     dword ptr [g_00856848], 0x4
        xor     eax, eax
        pop     esi
        add     esp, 0x28
        ret     0x8
L_d534:
        mov     esi, dword ptr [esp + 0x38]
        mov     al, byte ptr [esi + 0x4]
        test    al, al
        mov     ecx, dword ptr [esi + 0x8]
        jz      L_d59c
        mov     eax, dword ptr [esi + 0x20]
        add     ecx, 0xffffde00
        cmp     ecx, 0x5
        push    ebx
        push    ebp
        ja      L_d7cb
        /* __emit: jump-table dispatch FF 24 8D [ecx*4+0x6fda00]; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x8D
        __emit 0x00
        __emit 0xDA
        __emit 0x6F
        __emit 0x00
L_d55d:
        mov     esi, dword ptr [esi + 0x24]
        or      ebx, 0xffffffff
        cmp     eax, edi
        mov     ebp, 0x4
        jnz     L_d5a9
        mov     eax, dword ptr [esp + 0x3c]
        mov     byte ptr [eax + 0x2f47c], 0x0
        mov     dword ptr [eax + 0x3878], edi
        mov     eax, dword ptr [g_00856860]
        mov     eax, dword ptr [eax + 0x14]
        mov     ecx, dword ptr [eax]
        push    edi
        push    eax
        mov     dword ptr [g_00856848], 0x2
        call    dword ptr [ecx + 0xc]
        test    eax, eax
        jge     L_d5cb
        jmp     L_d5b4
L_d59c:
        pop     edi
        mov     eax, 0xc1120008
        pop     esi
        add     esp, 0x28
        ret     0x8
L_d5a9:
        cmp     eax, 0xc1121007
        jz      L_d5b4
        cmp     eax, edi
        jge     L_d5cb
L_d5b4:
        call    FUN_006fde20
        mov     dword ptr [g_007b6f08], ebx
        mov     dword ptr [g_0085684c], ebp
        mov     dword ptr [g_00856848], ebp
L_d5cb:
        cmp     esi, 0x1
        jnz     L_d7cb
        mov     eax, dword ptr [g_007b6f04]
        push    0xa
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        call    dword ptr [g_0076b374]
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        call    dword ptr [g_0076b3e0]
        lea     eax, [esp + 0x2c]
        push    0x7a0c00
        push    eax
        call    dword ptr [g_0076b3f4]
        mov     ecx, dword ptr [g_00856860]
        mov     eax, dword ptr [ecx + 0xc]
        mov     edx, dword ptr [eax]
        add     esp, 0x1c
        push    edi
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [g_00856850]
        push    ecx
        push    eax
        call    dword ptr [edx + 0xc]
        test    eax, eax
        jge     L_d7c1
        jmp     L_d9da
L_d633:
        call    FUN_006fde20
        pop     ebp
        pop     ebx
        mov     dword ptr [g_0085684c], edi
        mov     dword ptr [g_00856848], edi
        pop     edi
        mov     dword ptr [g_007b6f08], 0xffffffff
        xor     eax, eax
        pop     esi
        add     esp, 0x28
        ret     0x8
L_d65a:
        cmp     eax, edi
        jnz     L_d6d4
        mov     eax, dword ptr [g_007b6f04]
        push    0xa
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        call    dword ptr [g_0076b374]
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        call    dword ptr [g_0076b3e0]
        lea     eax, [esp + 0x2c]
        push    0x7a0c00
        push    eax
        call    dword ptr [g_0076b3f4]
        mov     ecx, dword ptr [g_00856860]
        mov     eax, dword ptr [ecx + 0xc]
        mov     edx, dword ptr [eax]
        add     esp, 0x1c
        push    edi
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [g_00856850]
        push    ecx
        push    eax
        call    dword ptr [edx + 0xc]
        test    eax, eax
        jl      L_d7e2
        pop     ebp
        pop     ebx
        mov     dword ptr [g_00856858], edi
        pop     edi
        mov     dword ptr [g_00856848], 0x1
        xor     eax, eax
        pop     esi
        add     esp, 0x28
        ret     0x8
L_d6d4:
        cmp     eax, 0xc1121000
        jnz     L_d7d7
        cmp     dword ptr [g_00856858], 0x32
        jge     L_d7e2
        call    FUN_007047f0
        cdq
        mov     ecx, 0x3e8
        idiv    ecx
        push    0xa
        lea     eax, [esp + 0x14]
        push    eax
        push    edx
        mov     dword ptr [g_007b6f04], edx
        call    dword ptr [g_0076b374]
        mov     ecx, dword ptr [g_00856854]
        mov     edx, dword ptr [g_00856850]
        mov     edi, dword ptr [g_0076b3e0]
        push    ecx
        push    edx
        call    edi
        mov     eax, dword ptr [g_00856850]
        mov     esi, dword ptr [g_0076b3f4]
        push    0x7a0bfc
        push    eax
        call    esi
        mov     edx, dword ptr [g_00856850]
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    edx
        call    esi
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x40]
        push    ecx
        call    edi
        lea     edx, [esp + 0x44]
        push    0x7a0c00
        push    edx
        call    esi
        mov     eax, dword ptr [g_00856860]
        mov     eax, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax]
        add     esp, 0x34
        push    0x0
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [g_00856850]
        push    ecx
        lea     esi, [esp + 0x24]
        push    esi
        push    ecx
        push    eax
        call    dword ptr [edx + 0x14]
        test    eax, eax
        jge     L_d7bb
        call    FUN_006fde20
        mov     ebp, 0x4
        mov     dword ptr [g_0085684c], ebp
        mov     dword ptr [g_00856848], ebp
        pop     ebp
        pop     ebx
        pop     edi
        mov     dword ptr [g_007b6f08], 0xffffffff
        mov     dword ptr [g_00856858], 0x0
        xor     eax, eax
        pop     esi
        add     esp, 0x28
        ret     0x8
L_d7bb:
        inc     dword ptr [g_00856858]
L_d7c1:
        mov     dword ptr [g_00856848], 0x1
L_d7cb:
        pop     ebp
        pop     ebx
        pop     edi
        xor     eax, eax
        pop     esi
        add     esp, 0x28
        ret     0x8
L_d7d7:
        cmp     eax, 0xc1120005
        jz      L_d7e2
        cmp     eax, edi
        jge     L_d802
L_d7e2:
        call    FUN_006fde20
        mov     ebp, 0x4
        mov     dword ptr [g_007b6f08], 0xffffffff
        mov     dword ptr [g_0085684c], ebp
        mov     dword ptr [g_00856848], ebp
L_d802:
        pop     ebp
        pop     ebx
        mov     dword ptr [g_00856858], edi
        pop     edi
        xor     eax, eax
        pop     esi
        add     esp, 0x28
        ret     0x8
L_d814:
        cmp     eax, 0xc1120012
        jnz     L_d8ab
        mov     eax, dword ptr [g_007b6f04]
        push    0xa
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        call    dword ptr [g_0076b374]
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        call    dword ptr [g_0076b3e0]
        lea     eax, [esp + 0x2c]
        push    0x7a0c00
        push    eax
        call    dword ptr [g_0076b3f4]
        mov     ecx, dword ptr [g_00856860]
        mov     eax, dword ptr [ecx + 0xc]
        mov     edx, dword ptr [eax]
        add     esp, 0x1c
        push    edi
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [g_00856850]
        push    ecx
        lea     esi, [esp + 0x24]
        push    esi
        push    ecx
        push    eax
        call    dword ptr [edx + 0x14]
        test    eax, eax
        jge     L_d7c1
        call    FUN_006fde20
        mov     ebp, 0x4
        mov     dword ptr [g_0085684c], ebp
        mov     dword ptr [g_00856848], ebp
        pop     ebp
        pop     ebx
        pop     edi
        mov     dword ptr [g_007b6f08], 0xffffffff
        xor     eax, eax
        pop     esi
        add     esp, 0x28
        ret     0x8
L_d8ab:
        or      ebx, 0xffffffff
        cmp     eax, edi
        mov     ebp, 0x4
        jge     L_d8ce
        call    FUN_006fde20
        mov     dword ptr [g_007b6f08], ebx
        mov     dword ptr [g_0085684c], ebp
        mov     dword ptr [g_00856848], ebp
L_d8ce:
        mov     esi, dword ptr [esi + 0x24]
        cmp     esi, edi
        jnz     L_d934
        mov     eax, dword ptr [g_007b6f04]
        push    0xa
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        call    dword ptr [g_0076b374]
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        call    dword ptr [g_0076b3e0]
        lea     eax, [esp + 0x2c]
        push    0x7a0c00
        push    eax
        call    dword ptr [g_0076b3f4]
        mov     ecx, dword ptr [g_00856860]
        mov     eax, dword ptr [ecx + 0xc]
        mov     edx, dword ptr [eax]
        add     esp, 0x1c
        push    edi
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [g_00856850]
        push    ecx
        push    eax
        call    dword ptr [edx + 0xc]
        test    eax, eax
        jge     L_d7c1
        jmp     L_d9da
L_d934:
        cmp     esi, 0x1
        jnz     L_d7cb
        call    FUN_007047f0
        cdq
        mov     ecx, 0x3e8
        idiv    ecx
        push    0xa
        lea     eax, [esp + 0x14]
        push    eax
        push    edx
        mov     dword ptr [g_007b6f04], edx
        call    dword ptr [g_0076b374]
        mov     ecx, dword ptr [g_00856854]
        mov     edx, dword ptr [g_00856850]
        mov     edi, dword ptr [g_0076b3e0]
        push    ecx
        push    edx
        call    edi
        mov     eax, dword ptr [g_00856850]
        mov     esi, dword ptr [g_0076b3f4]
        push    0x7a0bfc
        push    eax
        call    esi
        mov     edx, dword ptr [g_00856850]
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    edx
        call    esi
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x40]
        push    ecx
        call    edi
        lea     edx, [esp + 0x44]
        push    0x7a0c00
        push    edx
        call    esi
        mov     eax, dword ptr [g_00856860]
        mov     eax, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax]
        add     esp, 0x34
        push    0x0
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [g_00856850]
        push    ecx
        lea     esi, [esp + 0x24]
        push    esi
        push    ecx
        push    eax
        call    dword ptr [edx + 0x14]
        test    eax, eax
        jge     L_d7c1
L_d9da:
        call    FUN_006fde20
        mov     dword ptr [g_0085684c], ebp
        mov     dword ptr [g_00856848], ebp
        pop     ebp
        mov     dword ptr [g_007b6f08], ebx
        pop     ebx
        pop     edi
        xor     eax, eax
        pop     esi
        add     esp, 0x28
        ret     0x8
    }
}
