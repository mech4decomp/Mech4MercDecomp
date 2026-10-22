/* FUN_004e6a50 - MLR/Adept internal-damage object constructor (564 B) */

extern unsigned short g_7db0ac;   /* 0x007db0ac */
extern unsigned short g_7db0ae;   /* 0x007db0ae */
extern void __cdecl FUN_004d5b10(int param);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00412a00(void);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004e8330(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern double __cdecl FUN_00707e70(int);

__declspec(naked) void FUN_004e6a50(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004d5b10
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        push    1
        lea     edi, [esi + 0x58]
        mov     word ptr [esi + 0x24], 0xffff
        mov     word ptr [esi + 0x26], ax
        lea     ebp, [esi + 0x40]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [ebp], eax
        call    FUN_00416990
        lea     ebx, [esi + 0x6c]
        push    edi
        mov     ecx, ebx
        mov     dword ptr [edi], 0x774258
        call    FUN_00416bc0
        mov     dword ptr [ebx], 0x774218
        lea     ebx, [esi + 0x80]
        push    edi
        mov     ecx, ebx
        call    FUN_00416bc0
        mov     edi, dword ptr [esp + 0x24]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi + 0x10]
        mov     dword ptr [ebx], 0x774218
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi], 0x774200
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi + 0x14]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        call    FUN_00412a00
        mov     edx, dword ptr [edi]
        add     esp, 8
        lea     eax, [esi + 0x38]
        push    4
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [edi]
        push    4
        lea     ecx, [esi + 0x3c]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi + 0x34]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi + 0x50]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi + 0x54]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esi + 0x20]
        cmp     eax, ebx
        mov     dword ptr [esp + 0x10], eax
        jz      L_004e6c22
        xor     ebp, ebp
        cmp     eax, ebp
        jbe     L_004e6c06
        lea     ecx, [eax*8]
        push    ecx
        mov     ebp, eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_004e6b86
        lea     edx, [ebp - 1]
        xor     ebp, ebp
        cmp     edx, ebp
        mov     ecx, eax
        jl      L_004e6b7e
        inc     edx
L_004e6b6f:
        mov     word ptr [ecx], 0xffff
        mov     word ptr [ecx + 2], bp
        add     ecx, 8
        dec     edx
        jnz     L_004e6b6f
L_004e6b7e:
        mov     ecx, eax
        mov     dword ptr [esp + 0x20], ecx
        jmp     L_004e6b92
L_004e6b86:
        mov     dword ptr [esp + 0x20], 0
        mov     ecx, dword ptr [esp + 0x20]
L_004e6b92:
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jz      L_004e6bf4
        mov     edx, dword ptr [esp + 0x10]
        cmp     edx, ebx
        jnc     L_004e6ba3
        mov     ebx, edx
L_004e6ba3:
        mov     edx, ebx
        dec     ebx
        test    edx, edx
        jz      L_004e6be4
        lea     edx, [eax + ebx*8 + 4]
        sub     eax, ecx
        lea     ebp, [ecx + ebx*8]
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x18], eax
        inc     ebx
        jmp     L_004e6bc2
L_004e6bbe:
        mov     eax, dword ptr [esp + 0x18]
L_004e6bc2:
        add     eax, ebp
        push    eax
        mov     ecx, ebp
        call    FUN_004e8330
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp + 4], ecx
        dec     ebx
        sub     eax, 8
        sub     ebp, 8
        test    ebx, ebx
        mov     dword ptr [esp + 0x24], eax
        ja      L_004e6bbe
L_004e6be4:
        mov     eax, dword ptr [esi + 0x1c]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 4
L_004e6bf4:
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x20], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x1c], ecx
        xor     ebp, ebp
        jmp     L_004e6c24
L_004e6c06:
        mov     edx, dword ptr [esi + 0x1c]
        push    edx
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x20], eax
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 4
        mov     dword ptr [esi + 0x1c], ebp
        jmp     L_004e6c24
L_004e6c22:
        xor     ebp, ebp
L_004e6c24:
        cmp     eax, ebp
        jbe     L_004e6c37
        mov     ecx, dword ptr [esi + 0x1c]
        mov     edx, dword ptr [edi]
        shl     eax, 3
        push    eax
        push    ecx
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
L_004e6c37:
        cmp     dword ptr [esi + 0x38], 7
        jnz     L_004e6c4a
        mov     byte ptr [esi + 0x4c], 1
        mov     dword ptr [esi + 0x38], 3
        jmp     L_004e6c4e
L_004e6c4a:
        mov     byte ptr [esi + 0x4c], 0
L_004e6c4e:
        mov     dx, word ptr [g_7db0ac]
        mov     ax, word ptr [g_7db0ae]
        push    ebp
        mov     word ptr [esi + 0x24], dx
        mov     word ptr [esi + 0x26], ax
        mov     dword ptr [esi + 0x30], ebp
        mov     dword ptr [esi + 0x2c], ebp
        mov     dword ptr [esi + 0x28], ebp
        mov     dword ptr [esi + 0x18], ebp
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x44]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     8
    }
}
