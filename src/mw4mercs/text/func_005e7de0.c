/*
 * FUN_005E7DE0 (492 B) — __cdecl, RET 0 (3 params).
 * Iterates a linked list of objects; for each object whose [0x41c] byte
 * differs from param3, does float->int conversions (via _ftol) and
 * updates a grid/list structure. Calls several sibling helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_005e8060(void);
extern void __cdecl FUN_005e7ff0(void);
extern void __cdecl FUN_005e8190(void);
extern void __cdecl FUN_005e8170(void);
extern void __cdecl FUN_005e7fd0(void);
extern void __cdecl FUN_005e7fe0(void);

__declspec(naked) void __cdecl FUN_005e7de0(void)
{
    
__asm {
/* __emit: MSVC6 encodes mov eax,[imm32] as B8 immediate load, not A1 mem deref */
        _emit   0xA1
        _emit   0x44
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esp + 0x8]
        sub     esp, 0xc
        push    ebx
        /* __emit: MSVC6 encodes xor ecx,[imm32] as 81 F1 immediate, not 33 0D mem deref */
        _emit   0x33
        _emit   0x0D
        _emit   0x40
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     eax, dword ptr [ecx + 0x10]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + edx*0x8 + 0x14]
        test    ecx, ecx
        jle     L_5e7fc7
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        push    esi
        mov     esi, dword ptr [eax + edx*0x8 + 0x10]
        add     esi, 0x14
        push    edi
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x14], ecx
L_5e7e1f:
        mov     ecx, dword ptr [esi]
        call    FUN_0041fd80
        mov     ebp, eax
        test    ebp, ebp
        jz      L_5e7fae
        /* __emit: MSVC6 encodes mov eax,[imm32] as B8 immediate load, not A1 mem deref */
        _emit   0xA1
        _emit   0x68
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        mov     ecx, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_5e7fae
        mov     al, byte ptr [esp + 0x28]
        cmp     byte ptr [ebp + 0x41c], al
        jz      L_5e7fa0
        cmp     al, 0x1
        mov     edi, dword ptr [ebp + 0xd8]
        jnz     L_5e7ecb
        fld     dword ptr [edi + 0x8c]
        add     edi, 0x80
        /* __emit: FPU op with absolute mem operand not supported in MSVC6 inline asm */
        _emit   0xD8
        _emit   0x05
        _emit   0xD8
        _emit   0x6D
        _emit   0x78
        _emit   0x00
        call    FUN_0075db4a
        fld     dword ptr [edi + 0x2c]
        /* __emit: FPU op with absolute mem operand not supported in MSVC6 inline asm */
        _emit   0xD8
        _emit   0x05
        _emit   0xD8
        _emit   0x6D
        _emit   0x78
        _emit   0x00
        mov     esi, eax
        sar     esi, 0x8
        call    FUN_0075db4a
        sar     eax, 0x8
        test    esi, esi
        mov     dword ptr [esp + 0x24], eax
        jge     L_5e7e99
        xor     esi, esi
        jmp     L_5e7ea3
L_5e7e99:
        cmp     esi, 0x13
        jle     L_5e7ea3
        mov     esi, 0x13
L_5e7ea3:
        push    0x13
        push    0x0
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, ebx
        call    FUN_005e8060
        mov     ecx, dword ptr [esp + 0x24]
        lea     eax, [esi + esi*0x4]
        lea     edx, [ecx + eax*0x4]
        push    ebp
        lea     ecx, [ebx + edx*0x8]
        call    FUN_005e7ff0
        jmp     L_5e7fa0
L_5e7ecb:
        fld     dword ptr [edi + 0x8c]
        add     edi, 0x80
        /* __emit: FPU op with absolute mem operand not supported in MSVC6 inline asm */
        _emit   0xD8
        _emit   0x05
        _emit   0xD8
        _emit   0x6D
        _emit   0x78
        _emit   0x00
        call    FUN_0075db4a
        fld     dword ptr [edi + 0x2c]
        /* __emit: FPU op with absolute mem operand not supported in MSVC6 inline asm */
        _emit   0xD8
        _emit   0x05
        _emit   0xD8
        _emit   0x6D
        _emit   0x78
        _emit   0x00
        mov     esi, eax
        sar     esi, 0x8
        call    FUN_0075db4a
        sar     eax, 0x8
        test    esi, esi
        jge     L_5e7f00
        xor     esi, esi
        jmp     L_5e7f0a
L_5e7f00:
        cmp     esi, 0x13
        jle     L_5e7f0a
        mov     esi, 0x13
L_5e7f0a:
        test    eax, eax
        jge     L_5e7f12
        xor     eax, eax
        jmp     L_5e7f1c
L_5e7f12:
        cmp     eax, 0x13
        jle     L_5e7f1c
        mov     eax, 0x13
L_5e7f1c:
        lea     ecx, [esi + esi*0x4]
        lea     edx, [eax + ecx*0x4]
        lea     esi, [ebx + edx*0x8]
        test    esi, esi
        mov     edi, esi
        jz      L_5e7f4c
L_5e7f2b:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_5e7f4c
        cmp     dword ptr [eax + 0x4], ebp
        jnz     L_5e7f46
        mov     ecx, dword ptr [eax]
        push    0x1
        mov     dword ptr [edi], ecx
        push    eax
        mov     ecx, esi
        call    FUN_005e8190
        jmp     L_5e7f48
L_5e7f46:
        mov     edi, eax
L_5e7f48:
        test    edi, edi
        jnz     L_5e7f2b
L_5e7f4c:
        mov     edx, dword ptr [esi]
        push    edx
        call    FUN_005e8170
        shl     eax, 0x18
        mov     dword ptr [esi + 0x4], eax
        add     esp, 0x4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    FUN_005e7fd0
        mov     edi, dword ptr [eax]
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        call    FUN_005e7fe0
        cmp     edi, dword ptr [eax]
        jz      L_5e7fa0
L_5e7f7b:
        mov     edx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [edx + 0x30]
        mov     ecx, dword ptr [esi + 0x4]
        mov     edi, dword ptr [edi]
        and     eax, 0xffffff
        add     ecx, eax
        mov     dword ptr [esi + 0x4], ecx
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        call    FUN_005e7fe0
        cmp     edi, dword ptr [eax]
        jnz     L_5e7f7b
L_5e7fa0:
        mov     dl, byte ptr [esp + 0x28]
        mov     esi, dword ptr [esp + 0x10]
        mov     byte ptr [ebp + 0x41c], dl
L_5e7fae:
        mov     eax, dword ptr [esp + 0x14]
        add     esi, 0x1c
        dec     eax
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x14], eax
        jnz     L_5e7e1f
        pop     edi
        pop     esi
        pop     ebp
L_5e7fc7:
        pop     ebx
        add     esp, 0xc
        ret
    }


}
