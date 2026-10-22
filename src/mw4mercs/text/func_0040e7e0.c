/*
 * FUNC_0040e7e0 (1098 B) — __thiscall, RET 0xC. Engine/loader config parser:
 * parses a config line (key=value / quoted values / section markers), builds
 * a value object, and stores it. Heavy use of CRT string IAT helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *DAT_0076b2b0;   /* IAT: strncmp-ish */
extern int *DAT_0076b2a8;   /* IAT: strchr */
extern int *DAT_0076b2a4;   /* IAT: strchr */
extern int *DAT_0076b2a0;   /* IAT: strrchr */
extern int *DAT_0076b2ac;   /* IAT: _stricmp */
extern int *DAT_0076b318;   /* IAT: atoi */
extern int *DAT_0076b308;   /* IAT: strchr */
extern int  DAT_007b87e8;   /* global */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004103c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_00410490(void);
extern void __cdecl FUN_0040f0e0(void);
extern void __cdecl FUN_0040f220(void);
extern void __cdecl FUN_00412bf0(void);
extern void __cdecl FUN_0040df40(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_0040d9f0(void);

__declspec(naked) void FUN_0040e7e0(void)
{
    __asm {
        sub     esp, 0x24c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0x25c]
        mov     ebp, ecx
        push    edi
        mov     dword ptr [esp+0x1c], ebp
loc_40E7F7:
        mov     al, byte ptr [esi]
        cmp     al, 0x20
        jz      loc_40E801
        cmp     al, 0x9
        jnz     loc_40E804
loc_40E801:
        inc     esi
        jmp     loc_40E7F7
loc_40E804:
        cmp     byte ptr [esi], 0x0
        jz      loc_40EC1D
        mov     edi, dword ptr [DAT_0076b2b0]
        push    0x7
        push    0x76d184
        push    esi
        call    edi
        add     esp, 0xc
        test    eax, eax
        jnz     loc_40EABE
        lea     eax, [esi+7]
loc_40E82B:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x20
        jz      loc_40E837
        cmp     cl, 0x9
        jnz     loc_40E83A
loc_40E837:
        inc     eax
        jmp     loc_40E82B
loc_40E83A:
        cmp     byte ptr [eax], 0x3d
        jnz     loc_40E84D
loc_40E83F:
        mov     cl, byte ptr [eax+1]
        inc     eax
        cmp     cl, 0x20
        jz      loc_40E83F
        cmp     cl, 0x9
        jz      loc_40E83F
loc_40E84D:
        cmp     byte ptr [eax], 0x22
        jnz     loc_40E86A
        inc     eax
        push    0x22
        push    eax
        mov     ebx, eax
        call    dword ptr [DAT_0076b2a8]
        add     esp, 0x8
        test    eax, eax
        jz      loc_40E86C
        mov     byte ptr [eax], 0x0
        jmp     loc_40E86C
loc_40E86A:
        mov     ebx, eax
loc_40E86C:
        push    0x5c
        push    ebx
        call    dword ptr [DAT_0076b2a4]
        add     esp, 0x8
        test    eax, eax
        jnz     loc_40E8D8
        mov     edi, dword ptr [ebp]
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [esp+0x5c]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        lea     ecx, [esp+0x5c]
        push    0x5c
        push    ecx
        call    dword ptr [DAT_0076b2a0]
        add     esp, 0x8
        test    eax, eax
        jz      loc_40E8D8
        or      ecx, 0xffffffff
        lea     edx, [eax+1]
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        lea     ebx, [esp+0x5c]
loc_40E8D8:
        mov     eax, dword ptr [DAT_007b87e8]
        test    eax, eax
        jz      loc_40EA71
        mov     edi, eax
        push    ebx
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x1c], edi
        call    FUN_00412570
        push    ebx
        lea     ecx, [esp+0x14]
        call    FUN_00412570
        lea     ecx, [esp+0x10]
        push    ecx
        lea     edx, [esp+0x2c]
        push    edx
        mov     ecx, edi
        call    FUN_004103c0
        mov     esi, dword ptr [eax]
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        jz      loc_40E92D
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_40E92D
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_40E92D:
        cmp     esi, dword ptr [edi]
        jz      loc_40E949
        mov     edi, dword ptr [esi+0x14]
        mov     eax, dword ptr [edi]
        push    0x0
        mov     ecx, edi
        call    dword ptr [eax+0xc]
        mov     dword ptr [edi+0x8], 0xffffffec
        jmp     loc_40EA1E
loc_40E949:
        push    0x30
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      loc_40E969
        mov     ecx, dword ptr [esp+0x14]
        push    0x0
        push    ecx
        mov     ecx, eax
        call    FUN_0041de80
        mov     edi, eax
        jmp     loc_40E96B
loc_40E969:
        xor     edi, edi
loc_40E96B:
        mov     esi, dword ptr [esp+0x18]
        lea     edx, [esp+0x14]
        push    edx
        lea     eax, [esp+0x2c]
        push    eax
        mov     ecx, esi
        call    FUN_00410490
        mov     ebp, dword ptr [eax]
        cmp     ebp, dword ptr [esi]
        mov     eax, dword ptr [esp+0x14]
        mov     dword ptr [esp+0x10], ebp
        jz      loc_40E9C4
        mov     esi, dword ptr [ebp+0x10]
        mov     ecx, eax
loc_40E993:
        mov     bl, byte ptr [ecx]
        mov     dl, bl
        cmp     bl, byte ptr [esi]
        jnz     loc_40E9B7
        test    dl, dl
        jz      loc_40E9B3
        mov     bl, byte ptr [ecx+1]
        mov     dl, bl
        cmp     bl, byte ptr [esi+1]
        jnz     loc_40E9B7
        add     ecx, 0x2
        add     esi, 0x2
        test    dl, dl
        jnz     loc_40E993
loc_40E9B3:
        xor     ecx, ecx
        jmp     loc_40E9BC
loc_40E9B7:
        sbb     ecx, ecx
        sbb     ecx, -0x1
loc_40E9BC:
        test    ecx, ecx
        jge     loc_40EA17
        mov     esi, dword ptr [esp+0x18]
loc_40E9C4:
        test    eax, eax
        mov     dword ptr [esp+0x20], eax
        jz      loc_40E9CF
        inc     byte ptr [eax-1]
loc_40E9CF:
        lea     ecx, [esp+0x20]
        push    ecx
        push    ecx
        lea     edx, [esp+0x18]
        mov     ecx, esp
        push    edx
        mov     dword ptr [esp+0x30], 0x0
        call    FUN_0040f0e0
        lea     eax, [esp+0x20]
        push    eax
        mov     ecx, esi
        call    FUN_0040f220
        mov     ecx, dword ptr [esp+0x20]
        test    ecx, ecx
        mov     ebp, dword ptr [eax]
        mov     dword ptr [esp+0x10], ebp
        jz      loc_40EA17
        lea     eax, [ecx-1]
        dec     byte ptr [eax]
        jnz     loc_40EA13
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_40EA13:
        mov     ebp, dword ptr [esp+0x10]
loc_40EA17:
        mov     dword ptr [ebp+0x14], edi
        mov     ebp, dword ptr [esp+0x1c]
loc_40EA1E:
        push    edi
        lea     ecx, [ebp+0xc]
        call    FUN_00412bf0
        mov     ecx, dword ptr [esp+0x268]
        mov     edx, dword ptr [esp+0x264]
        push    0x0
        push    ecx
        push    edx
        push    edi
        mov     ecx, ebp
        call    FUN_0040df40
        mov     eax, dword ptr [esp+0x14]
        test    eax, eax
        jz      loc_40EC1D
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_40EC1D
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24c
        ret     0xc
loc_40EA71:
        push    0x0
        push    ebx
        lea     ecx, [esp+0x34]
        call    FUN_0041de80
        lea     eax, [esp+0x2c]
        push    eax
        lea     ecx, [ebp+0xc]
        call    FUN_00412bf0
        mov     ecx, dword ptr [esp+0x268]
        mov     edx, dword ptr [esp+0x264]
        push    0x0
        push    ecx
        push    edx
        lea     eax, [esp+0x38]
        push    eax
        mov     ecx, ebp
        call    FUN_0040df40
        lea     ecx, [esp+0x2c]
        call    FUN_0041dec0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24c
        ret     0xc
loc_40EABE:
        push    0xb
        push    0x76d178
        push    esi
        call    edi
        add     esp, 0xc
        test    eax, eax
        jnz     loc_40EB47
        add     esi, 0xb
loc_40EAD2:
        mov     al, byte ptr [esi]
        cmp     al, 0x20
        jz      loc_40EADC
        cmp     al, 0x9
        jnz     loc_40EADF
loc_40EADC:
        inc     esi
        jmp     loc_40EAD2
loc_40EADF:
        cmp     byte ptr [esi], 0x3d
        jnz     loc_40EAF0
loc_40EAE4:
        mov     al, byte ptr [esi+1]
        inc     esi
        cmp     al, 0x20
        jz      loc_40EAE4
        cmp     al, 0x9
        jz      loc_40EAE4
loc_40EAF0:
        mov     edi, dword ptr [DAT_0076b2ac]
        push    0x76d170
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jz      loc_40EB32
        push    0x76ccac
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jz      loc_40EB32
        push    esi
        call    dword ptr [DAT_0076b318]
        add     esp, 0x4
        test    eax, eax
        jnz     loc_40EB32
        mov     byte ptr [ebp+5], al
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24c
        ret     0xc
loc_40EB32:
        mov     eax, 0x1
        mov     byte ptr [ebp+5], al
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24c
        ret     0xc
loc_40EB47:
        push    0xc
        push    0x76d160
        push    esi
        call    edi
        add     esp, 0xc
        test    eax, eax
        jnz     loc_40EBD0
        add     esi, 0xc
loc_40EB5B:
        mov     al, byte ptr [esi]
        cmp     al, 0x20
        jz      loc_40EB65
        cmp     al, 0x9
        jnz     loc_40EB68
loc_40EB65:
        inc     esi
        jmp     loc_40EB5B
loc_40EB68:
        cmp     byte ptr [esi], 0x3d
        jnz     loc_40EB79
loc_40EB6D:
        mov     al, byte ptr [esi+1]
        inc     esi
        cmp     al, 0x20
        jz      loc_40EB6D
        cmp     al, 0x9
        jz      loc_40EB6D
loc_40EB79:
        mov     edi, dword ptr [DAT_0076b2ac]
        push    0x76d170
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jz      loc_40EBBB
        push    0x76ccac
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jz      loc_40EBBB
        push    esi
        call    dword ptr [DAT_0076b318]
        add     esp, 0x4
        test    eax, eax
        jnz     loc_40EBBB
        mov     byte ptr [ebp+6], al
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24c
        ret     0xc
loc_40EBBB:
        mov     eax, 0x1
        mov     byte ptr [ebp+6], al
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24c
        ret     0xc
loc_40EBD0:
        push    0x3d
        push    esi
        xor     edi, edi
        call    dword ptr [DAT_0076b308]
        add     esp, 0x8
        test    eax, eax
        jz      loc_40EBFD
        mov     byte ptr [eax], 0x0
        lea     edi, [eax+1]
        dec     eax
loc_40EBE9:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x20
        jz      loc_40EBF5
        cmp     cl, 0x9
        jnz     loc_40EBFD
loc_40EBF5:
        mov     byte ptr [eax], 0x0
        dec     eax
        cmp     eax, esi
        jnc     loc_40EBE9
loc_40EBFD:
        cmp     byte ptr [esi], 0x0
        jz      loc_40EC1D
        test    edi, edi
        jz      loc_40EC1D
        cmp     byte ptr [edi], 0x0
        jz      loc_40EC1D
        mov     ecx, dword ptr [esp+0x264]
        push    edi
        push    esi
        push    ecx
        call    FUN_0040d9f0
        add     esp, 0xc
loc_40EC1D:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24c
        ret     0xc
    }
}
