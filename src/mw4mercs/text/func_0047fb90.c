/* func_0047fb90 - MLR PMesh constructor (__thiscall, RET 0xc) */

extern void __cdecl FUN_00480890(void);
extern int __cdecl FUN_006fab90(void);
extern void __cdecl FUN_004801f0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern char g_76f628[];
extern char g_76e300[];
extern char g_76f60c[];

__declspec(naked) void func_0047fb90(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        mov     eax, dword ptr [ebp+0x8]
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp+0xc]
        push    edi
        mov     edi, dword ptr [ebp+0x10]
        push    edi
        push    esi
        mov     ebx, ecx
        push    eax
        mov     dword ptr [ebp-0x4], ebx
        call    FUN_00480890
        xor     eax, eax
        cmp     edi, eax
        mov     dword ptr [ebx+0x48], eax
        mov     dword ptr [ebx+0x4c], eax
        mov     dword ptr [ebx], offset g_76f628
        jle     L_BED
        cmp     edi, 0x2
        jg      L_BED
        push    offset g_76e300
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_FD8
        int     3
        pop     edi
        pop     esi
        mov     word ptr [ebx+0x56], 0x0
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_BED:
        cmp     edi, 0x12
        jge     L_E09
        mov     edx, dword ptr [esi]
        mov     dword ptr [ebp-0xc], eax
        mov     dword ptr [ebp-0x8], eax
        push    0x4
        lea     eax, [ebp+0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     ecx, dword ptr [ebp+0x10]
        push    ecx
        lea     ecx, [ebp-0xc]
        call    FUN_004801f0
        mov     eax, dword ptr [ebp+0x10]
        xor     edi, edi
        cmp     eax, edi
        jbe     L_C2C
        mov     ecx, dword ptr [ebp-0xc]
        mov     edx, dword ptr [esi]
        add     eax, eax
        push    eax
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx+0x20]
L_C2C:
        cmp     dword ptr [ebx+0xc], edi
        jnz     L_C69
        push    0x30
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L_C64
        mov     dword ptr [eax], edi
        mov     dword ptr [eax+0x4], edi
        mov     dword ptr [eax+0x8], edi
        mov     dword ptr [eax+0xc], edi
        mov     dword ptr [eax+0x10], edi
        mov     dword ptr [eax+0x14], edi
        mov     dword ptr [eax+0x18], edi
        mov     dword ptr [eax+0x1c], edi
        mov     dword ptr [eax+0x20], edi
        mov     dword ptr [eax+0x24], edi
        mov     dword ptr [eax+0x28], edi
        mov     dword ptr [eax+0x2c], edi
        jmp     L_C66
L_C64:
        xor     eax, eax
L_C66:
        mov     dword ptr [ebx+0xc], eax
L_C69:
        mov     ecx, dword ptr [ebp-0x8]
        xor     edx, edx
        mov     eax, ecx
        mov     esi, 0x3
        div     esi
        test    edx, edx
        jz      L_C90
        push    offset g_76f60c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_C8D
        int     3
L_C8D:
        mov     ecx, dword ptr [ebp-0x8]
L_C90:
        mov     esi, dword ptr [ebx+0xc]
        mov     eax, 0xaaaaaaab
        mul     ecx
        mov     eax, dword ptr [esi+0x4]
        mov     edi, edx
        shr     edi, 0x1
        cmp     ecx, eax
        mov     dword ptr [ebp+0x10], ecx
        jz      L_D01
        test    ecx, ecx
        jbe     L_CEA
        push    ecx
        call    FUN_004084d0
        mov     ecx, dword ptr [esi]
        add     esp, 0x4
        test    ecx, ecx
        mov     ebx, eax
        jz      L_CE6
        mov     eax, dword ptr [esi+0x4]
        mov     edx, dword ptr [ebp+0x10]
        cmp     edx, eax
        jnc     L_CC9
        mov     eax, edx
L_CC9:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_CDD
L_CD0:
        mov     dl, byte ptr [ecx+eax*1]
        mov     byte ptr [eax+ebx*1], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_CD0
L_CDD:
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
L_CE6:
        mov     dword ptr [esi], ebx
        jmp     L_CFB
L_CEA:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
L_CFB:
        mov     ecx, dword ptr [ebp+0x10]
        mov     dword ptr [esi+0x4], ecx
L_D01:
        xor     ebx, ebx
        test    edi, edi
        mov     dword ptr [ebp+0x10], ebx
        jle     L_DBE
        xor     edx, edx
        mov     dword ptr [ebp+0xc], edi
        mov     edi, dword ptr [ebp-0xc]
        xor     eax, eax
        mov     ecx, 0x100
L_D1D:
        cmp     word ptr [eax+edi*1], cx
        jnc     L_D60
        cmp     word ptr [eax+edi*1+0x2], cx
        jnc     L_D60
        cmp     word ptr [eax+edi*1+0x4], cx
        jnc     L_D60
        mov     bl, byte ptr [eax+edi*1]
        mov     ecx, dword ptr [esi]
        add     ecx, edx
        mov     byte ptr [ecx], bl
        mov     edi, dword ptr [ebp-0xc]
        mov     bl, byte ptr [eax+edi*1+0x2]
        mov     byte ptr [ecx+0x1], bl
        mov     edi, dword ptr [ebp-0xc]
        mov     bl, byte ptr [eax+edi*1+0x4]
        mov     edi, dword ptr [ebp+0x10]
        inc     edi
        mov     byte ptr [ecx+0x2], bl
        mov     dword ptr [ebp+0x10], edi
        mov     edi, dword ptr [ebp-0xc]
        add     edx, 0x3
        mov     ecx, 0x100
L_D60:
        mov     ebx, dword ptr [ebp+0xc]
        add     eax, 0x6
        dec     ebx
        mov     dword ptr [ebp+0xc], ebx
        jnz     L_D1D
        mov     ebx, dword ptr [ebp+0x10]
L_D6F:
        mov     eax, dword ptr [esi+0x4]
        lea     ebx, [ebx+ebx*2]
        cmp     ebx, eax
        jz      L_DDA
        test    ebx, ebx
        jbe     L_DC3
        push    ebx
        call    FUN_004084d0
        mov     edi, dword ptr [esi]
        add     esp, 0x4
        test    edi, edi
        mov     ecx, eax
        mov     dword ptr [ebp+0x10], ecx
        jz      L_DBA
        mov     eax, dword ptr [esi+0x4]
        cmp     ebx, eax
        jnc     L_D9A
        mov     eax, ebx
L_D9A:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_DAE
L_DA1:
        mov     dl, byte ptr [edi+eax*1]
        mov     byte ptr [eax+ecx*1], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_DA1
L_DAE:
        push    edi
        call    FUN_004084e0
        mov     ecx, dword ptr [ebp+0x10]
        add     esp, 0x4
L_DBA:
        mov     dword ptr [esi], ecx
        jmp     L_DD4
L_DBE:
        mov     edi, dword ptr [ebp-0xc]
        jmp     L_D6F
L_DC3:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
L_DD4:
        mov     dword ptr [esi+0x4], ebx
        mov     edi, dword ptr [ebp-0xc]
L_DDA:
        test    edi, edi
        mov     eax, dword ptr [ebp-0x4]
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esi+0x4]
        mov     dword ptr [eax+0x48], ecx
        mov     dword ptr [eax+0x4c], edx
        jz      L_DF5
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_DF5:
        mov     ebx, dword ptr [ebp-0x4]
L_FD8:
        pop     edi
        pop     esi
        mov     word ptr [ebx+0x56], 0x0
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_E09:
        mov     eax, dword ptr [esi]
        push    0x4
        lea     edi, [ebx+0x4c]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax+0x20]
        mov     edi, dword ptr [edi]
        test    edi, edi
        jbe     L_E3F
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+0x4]
        mov     dword ptr [ebx+0x48], eax
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax+0x18]
        pop     edi
        pop     esi
        mov     word ptr [ebx+0x56], 0x0
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_E3F:
        pop     edi
        pop     esi
        mov     dword ptr [ebx+0x48], 0x0
        mov     word ptr [ebx+0x56], 0x0
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
