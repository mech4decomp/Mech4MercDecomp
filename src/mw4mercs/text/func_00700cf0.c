/*
 * FUN_00700cf0 (468 B) — __stdcall RET 0x10 (4 params).
 *
 * IGunHost::SetItem-style dispatcher. If DAT_008aaaf4==5 and
 * DAT_008aaac0 set and DAT_00856860 non-null, compares param_3 against
 * "GameType"; on match enumerates a string table via DAT_00858a2c and
 * calls a virtual method (DAT_0076b300 / DAT_0076b2f0), else converts
 * param_4 to a wide string and calls the same virtual. On failure logs
 * via FUN_0073e160 / FUN_006fabf0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  DAT_008aaaf4;
extern char DAT_008aaac0;
extern int  DAT_00856860;
extern int  DAT_0076b300;
extern int  DAT_0076b2f0;
extern void *DAT_00858a2c;
extern void *DAT_0076b4f8;
extern void *DAT_0076b3e8;
extern void *DAT_0076b294;
extern void *DAT_0076b2d0;

extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) int __stdcall func_00700cf0(int p1, int p2, void *p3, void *p4)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x160
        cmp     dword ptr [DAT_008aaaf4], 0x5
        push    ebx
        push    edi
        jnz     L_eba
        mov     al, byte ptr [DAT_008aaac0]
        test    al, al
        jz      L_eba
        mov     eax, dword ptr [DAT_00856860]
        test    eax, eax
        jz      L_eba
        mov     eax, dword ptr [ebp + 0x10]
        push    esi
        mov     esi, 0x79fa6c
L_d2b:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_d53
        test    cl, cl
        jz      L_d4f
        mov     dl, byte ptr [eax + 0x1]
        mov     bl, byte ptr [esi + 0x1]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_d53
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_d2b
L_d4f:
        xor     eax, eax
        jmp     L_d58
L_d53:
        sbb     eax, eax
        sbb     eax, -0x1
L_d58:
        test    eax, eax
        jnz     L_e24
        mov     edi, dword ptr [ebp + 0x14]
        mov     ebx, dword ptr [DAT_0076b300]
        xor     esi, esi
L_d6b:
        lea     eax, [ebp - 0x160]
        push    eax
        push    0x100
        push    esi
        push    0x0
        call    dword ptr [DAT_00858a2c]
        lea     ecx, [ebp - 0x160]
        push    edi
        push    ecx
        call    ebx
        add     esp, 0x18
        test    eax, eax
        mov     al, byte ptr [ebp - 0x160]
        jz      L_d9e
        test    al, al
        jz      L_da2
        inc     esi
        jmp     L_d6b
L_d9e:
        test    al, al
        jnz     L_de2
L_da2:
        mov     ebx, dword ptr [DAT_0076b2f0]
        xor     esi, esi
L_daa:
        lea     edx, [ebp - 0x160]
        push    edx
        push    0x100
        push    esi
        push    0x0
        call    dword ptr [DAT_00858a2c]
        lea     eax, [ebp - 0x160]
        push    edi
        push    eax
        call    ebx
        add     esp, 0x18
        test    eax, eax
        mov     al, byte ptr [ebp - 0x160]
        jz      L_ddd
        test    al, al
        jz      L_de1
        inc     esi
        jmp     L_daa
L_ddd:
        test    al, al
        jnz     L_de2
L_de1:
        dec     esi
L_de2:
        push    esi
        lea     ecx, [ebp - 0x20]
        push    0x772f4c
        push    ecx
        call    dword ptr [DAT_0076b4f8]
        push    0x20
        lea     edx, [ebp - 0x20]
        push    edx
        lea     eax, [ebp - 0x60]
        push    eax
        call    dword ptr [DAT_0076b3e8]
        mov     ecx, dword ptr [DAT_00856860]
        mov     eax, dword ptr [ecx + 0x1c]
        mov     ebx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [eax]
        add     esp, 0x18
        lea     ecx, [ebp - 0x60]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    ebx
        push    eax
        call    dword ptr [edx + 0x24]
        mov     edi, eax
        jmp     L_e71
L_e24:
        mov     ebx, dword ptr [ebp + 0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        lea     edi, [ecx + 0x1]
        lea     edx, [edi + edi]
        push    edx
        call    dword ptr [DAT_0076b294]
        push    edi
        mov     esi, eax
        push    ebx
        push    esi
        call    dword ptr [DAT_0076b3e8]
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [DAT_00856860]
        mov     eax, dword ptr [eax + 0x1c]
        mov     ebx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [eax]
        add     esp, 0x10
        push    esi
        push    edx
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x24]
        push    esi
        mov     edi, eax
        call    dword ptr [DAT_0076b2d0]
        add     esp, 0x4
L_e71:
        test    edi, edi
        pop     esi
        jge     L_eba
        cmp     edi, 0xc1120c01
        jnz     L_e88
        pop     edi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_e88:
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jnz     L_e94
        mov     eax, 0x76b9a0
L_e94:
        push    eax
        push    ebx
        push    edi
        call    FUN_0073e160
        push    eax
        push    edi
        push    0x7a1164
        call    FUN_006fabf0
        add     esp, 0x14
        test    eax, eax
        jz      L_eb0
        int     3
L_eb0:
        pop     edi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_eba:
        pop     edi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
