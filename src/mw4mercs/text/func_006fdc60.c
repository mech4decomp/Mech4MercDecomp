/*
 * FUN_006fdc60 (441 B) — gundll save-data writer/loader. If g_007b6f10 != 1,
 * validates param_2, stores a timestamp (FUN_00707e90) into the object at
 * param_2+0x1c, then switches over the 0x7202..0x7204 command codes in
 * param_2+8, calling FUN_006fe690/FUN_006fe8f0/FUN_006feab0/FUN_006ffeb0/
 * FUN_007004c0 and virtual methods on the object at param_1+0x20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b6f10;
extern double __cdecl FUN_00707e90(void);
extern int __cdecl FUN_006fe8f0(void);
extern int __cdecl FUN_006fe690(void);
extern int __cdecl FUN_006feab0(void);
extern int __cdecl FUN_006ffeb0(void);
extern int __cdecl FUN_007004c0(void);

__declspec(naked) void FUN_006fdc60(void)
{
    __asm {
        sub     esp, 0x10
        mov     al, byte ptr [g_007b6f10]
        push    ebx
        push    ebp
        xor     ebx, ebx
        push    esi
        xor     ebp, ebp
        cmp     al, 0x1
        push    edi
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        jz      L_de0d
        mov     edi, dword ptr [esp + 0x28]
        mov     al, byte ptr [edi + 0x4]
        test    al, al
        jnz     L_dca2
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120008
        pop     ebx
        add     esp, 0x10
        ret     0x8
L_dca2:
        mov     esi, dword ptr [edi + 0x1c]
        cmp     esi, ebx
        jnz     L_dcb8
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80004005
        pop     ebx
        add     esp, 0x10
        ret     0x8
L_dcb8:
        call    FUN_00707e90
        fstp    qword ptr [esi + 0x28]
        mov     al, byte ptr [esi + 0xc]
        test    al, al
        jz      L_de0d
        mov     eax, dword ptr [edi + 0x8]
        sub     eax, 0x7202
        jz      L_ddd8
        dec     eax
        jz      L_dd96
        dec     eax
        jnz     L_de0d
        mov     eax, dword ptr [edi + 0x20]
        test    eax, eax
        jl      L_de0d
        mov     al, byte ptr [edi + 0x4]
        test    al, al
        jz      L_dcfe
        mov     ecx, dword ptr [edi + 0x28]
        jmp     L_dd02
L_dcfe:
        mov     ecx, dword ptr [esp + 0x10]
L_dd02:
        test    al, al
        jz      L_dd10
        mov     ebx, dword ptr [edi + 0x24]
        jz      L_dd10
        mov     ebp, dword ptr [edi + 0x30]
        jmp     L_dd14
L_dd10:
        mov     ebp, dword ptr [esp + 0x14]
L_dd14:
        test    al, al
        jz      L_dd1d
        mov     edi, dword ptr [edi + 0x34]
        jmp     L_dd21
L_dd1d:
        mov     edi, dword ptr [esp + 0x18]
L_dd21:
        mov     eax, dword ptr [esi]
        sub     eax, 0x0
        jz      L_dd36
        dec     eax
        jnz     L_dd3f
        push    ebp
        push    ebx
        push    ecx
        push    esi
        call    FUN_006fe8f0
        jmp     L_dd3f
L_dd36:
        push    ebp
        push    ebx
        push    ecx
        push    esi
        call    FUN_006fe690
L_dd3f:
        lea     eax, [ebx + ebp*1]
        cmp     eax, edi
        mov     dword ptr [esi + 0x18], edi
        jnc     L_dd70
        xor     edx, edx
        div     ebx
        mov     edx, dword ptr [esi + 0x38]
        mov     ecx, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [ecx + 0x20]
        mov     edi, dword ptr [ecx]
        push    esi
        push    0x0
        push    0x0
        push    eax
        push    edx
        push    ecx
        call    dword ptr [edi + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x10
        ret     0x8
L_dd70:
        cmp     dword ptr [esi], 0x0
        mov     byte ptr [esi + 0xc], 0x0
        mov     dword ptr [esi + 0x1c], edi
        jnz     L_dd82
        push    esi
        call    FUN_006feab0
L_dd82:
        push    0x0
        push    esi
        call    FUN_006ffeb0
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x10
        ret     0x8
L_dd96:
        mov     eax, dword ptr [edi + 0x20]
        test    eax, eax
        jl      L_de0d
        mov     al, byte ptr [edi + 0x4]
        test    al, al
        jz      L_dda9
        mov     edi, dword ptr [edi + 0x24]
        jmp     L_ddad
L_dda9:
        mov     edi, dword ptr [esp + 0x1c]
L_ddad:
        push    edi
        push    esi
        call    FUN_007004c0
        mov     edx, dword ptr [esi + 0x38]
        mov     eax, dword ptr [esp + 0x24]
        mov     eax, dword ptr [eax + 0x20]
        mov     ecx, dword ptr [eax]
        push    esi
        push    0x0
        push    0x0
        push    0x0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x10
        ret     0x8
L_ddd8:
        mov     eax, dword ptr [edi + 0x20]
        test    eax, eax
        jl      L_de0d
        mov     al, byte ptr [edi + 0x4]
        test    al, al
        jz      L_dde9
        mov     ebp, dword ptr [edi + 0x28]
L_dde9:
        mov     eax, dword ptr [esi]
        sub     eax, 0x0
        jz      L_ddf8
        dec     eax
        jnz     L_de0d
        mov     eax, dword ptr [ebp + 0x8]
        jmp     L_ddfb
L_ddf8:
        mov     eax, dword ptr [ebp]
L_ddfb:
        mov     ecx, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [ecx + 0x20]
        mov     edx, dword ptr [ecx]
        push    esi
        push    eax
        push    ecx
        mov     dword ptr [esi + 0x38], eax
        call    dword ptr [edx + 0x10]
L_de0d:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x10
        ret     0x8
    }
}
