/*
 * FUN_10013990 (381 B, __stdcall, 5 params) - Validates an input struct
 * (IsBadReadPtr / IsBadStringPtrW), allocates a copy, and dispatches
 * through the object's vtable. Returns HRESULT-style codes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021060;   /* IAT: IsBadReadPtr */
extern void *g_1002105c;   /* IAT: IsBadStringPtrW */
extern void __cdecl FUN_1000a0f0(void);
extern void __cdecl FUN_1001e1b0(void);

__declspec(naked) void __cdecl FUN_10013990(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     eax, dword ptr [esi + 0x34]
        test    eax, eax
        jz      L_139ab
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040210
        pop     ebx
        ret     0x14
    L_139ab:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L_13b01
        mov     edi, dword ptr [esp + 0x1c]
        push    0x38
        push    edi
        call    dword ptr [g_10021060]      /* IsBadReadPtr */
        test    eax, eax
        jnz     L_13b01
        cmp     dword ptr [edi], 0x38
        jnz     L_13b01
        mov     bl, byte ptr [esp + 0x24]
        mov     ebp, dword ptr [g_1002105c]      /* IsBadStringPtrW */
        test    bl, bl
        jz      L_139f3
        mov     eax, dword ptr [edi + 0x18]
        push    -1
        push    eax
        call    ebp
        test    eax, eax
        jnz     L_13b01
    L_139f3:
        mov     eax, dword ptr [edi + 0x34]
        test    eax, eax
        jz      L_13a03
        cmp     eax, -1
        jz      L_13b01
    L_13a03:
        mov     ecx, dword ptr [edi + 0x1c]
        push    -1
        push    ecx
        call    ebp
        test    eax, eax
        jnz     L_13b01
        mov     edx, dword ptr [edi + 0xc]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jnz     L_13b01
        mov     eax, dword ptr [edi + 0x28]
        push    -1
        push    eax
        call    ebp
        test    eax, eax
        jnz     L_13b01
        test    bl, bl
        mov     byte ptr [esi + 0xd4], bl
        jnz     L_13a44
        mov     dword ptr [esi + 0x28], 5
    L_13a44:
        push    0x38
        call    FUN_1000a0f0
        test    eax, eax
        mov     dword ptr [esi + 0x34], eax
        jnz     L_13a5e
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040251
        pop     ebx
        ret     0x14
    L_13a5e:
        mov     ecx, dword ptr [edi]
        push    edi
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edi + 0x34]
        push    esi
        mov     dword ptr [edx + 0x34], eax
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [edi + 0x30]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [ecx + 0x30], edx
        mov     ecx, dword ptr [esi]
        mov     dword ptr [esi + 0x14], eax
        call    dword ptr [ecx + 0x28]
        mov     ebx, eax
        test    ebx, ebx
        jge     L_13a97
        mov     edx, dword ptr [esi]
        push    esi
        call    dword ptr [edx + 0x40]
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebp
        pop     ebx
        ret     0x14
    L_13a97:
        mov     eax, dword ptr [edi + 0x30]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esi]
        lea     ebx, [esi + 0x3c]
        push    ebx
        push    esi
        mov     dword ptr [esi + 4], eax
        mov     dword ptr [esi + 0xc], ecx
        call    dword ptr [edx + 0x34]
        test    eax, eax
        jz      L_13ac4
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x40]
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040253
        pop     ebx
        ret     0x14
    L_13ac4:
        mov     ecx, dword ptr [esi + 0x28]
        mov     edx, dword ptr [edi + 0x34]
        push    ecx
        push    edx
        push    ebx
        push    esi
        call    FUN_1001e1b0
        mov     edi, eax
        test    edi, edi
        jz      L_13ae8
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x40]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x14
    L_13ae8:
        mov     dword ptr [esi + 8], 1
        mov     esi, dword ptr [esi + 0x14]
        push    esi
        mov     ecx, dword ptr [esi]
        call    dword ptr [ecx + 4]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x14
    L_13b01:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80070057
        pop     ebx
        ret     0x14
    }
}
