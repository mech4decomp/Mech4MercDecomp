/*
 * FUN_10005d90 (655 B) - __stdcall, RET 0x8.
 * SEH-guarded list builder: allocates a 0x3c-byte object (FUN_10001d50 +
 * FUN_100063b0), validates the source list at param_1+0x90, and if a
 * matching node is found (FUN_10006730), tears down the old object's
 * nodes (FUN_10006020/FUN_1000c4c0) and returns the new object via
 * param_2. On failure returns an HRESULT.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void *__cdecl FUN_10001d50(int);   /* rel32 call, alloc */
extern void  __cdecl FUN_100063b0(void);  /* rel32 call (thiscall, ecx=this) */
extern void  __cdecl FUN_10006730(void);  /* rel32 call, 3 args */
extern void  __cdecl FUN_10006020(void);  /* rel32 call (thiscall, ecx=this) */
extern void  __cdecl FUN_10001d60(void);  /* rel32 call, 1 arg */
extern void  __cdecl FUN_1000c4c0(void);  /* rel32 call, 2 args */
extern void  __cdecl FUN_10006480(void);  /* rel32 call (thiscall, ecx=this) */
extern void  __cdecl FUN_100062a0(void);  /* rel32 call, 3 args */
extern void  __cdecl FUN_1001b700(void);  /* rel32 call (thiscall, ecx=this) */
extern void  __cdecl FUN_10006150(void);  /* function pointer (offset load) */
extern void *g_10055050;                  /* abs data @ 0x10055050 */

__declspec(naked) void __stdcall FUN_10005d90(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x10047073
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        mov     eax, dword ptr [edi + 0x90]
        xor     ebx, ebx
        cmp     eax, ebx
        jnz     L_5dc3
        xor     eax, eax
        jmp     L_5f4e
    L_5dc3:
        push    0x3c
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x14], esi
        cmp     esi, ebx
        mov     dword ptr [esp + 0x20], ebx
        jz      L_5e09
        push    0x10
        push    0x8
        push    ebx
        push    0x10004b20
        push    0x10004b10
        mov     ecx, esi
        call    FUN_100063b0
        mov     dword ptr [esi + 0x2c], 0x10004b10
        mov     dword ptr [esi + 0x30], 0x10004b20
        mov     dword ptr [esi + 0x34], ebx
        mov     dword ptr [esi + 0x38], ebx
        mov     ebp, esi
        jmp     L_5e0b
    L_5e09:
        xor     ebp, ebp
    L_5e0b:
        cmp     ebp, ebx
        mov     dword ptr [esp + 0x20], 0xffffffff
        jnz     L_5e21
        mov     eax, 0x8007000e
        jmp     L_5f4e
    L_5e21:
        mov     eax, dword ptr [edi + 0x90]
        mov     esi, dword ptr [eax + 0x28]
        inc     esi
        xor     ecx, ecx
        cmp     word ptr [eax], bx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [eax + 0x28], esi
        mov     dword ptr [esp + 0x10], ecx
        jbe     L_5e83
        /* __emit: 3-byte alignment NOP (LEA ECX,[ECX+0]); MSVC6 drops the 00 disp */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
    L_5e40:
        mov     esi, dword ptr [eax + 0x4]
        xor     edi, edi
        mov     di, cx
        shl     edi, 0x4
        add     edi, esi
        mov     esi, dword ptr [edi]
        cmp     esi, edi
        jz      L_5e77
    L_5e53:
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        js      L_5e6d
        mov     eax, dword ptr [esi + 0x8]
        push    ebp
        push    esi
        push    eax
        call    FUN_10006730
        test    al, al
        mov     eax, dword ptr [esp + 0x14]
        jz      L_5e8b
    L_5e6d:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_5e53
        mov     ecx, dword ptr [esp + 0x10]
    L_5e77:
        inc     ecx
        cmp     cx, word ptr [eax]
        mov     dword ptr [esp + 0x10], ecx
        jc      L_5e40
        xor     ebx, ebx
    L_5e83:
        dec     dword ptr [eax + 0x28]
        jmp     L_5f63
    L_5e8b:
        dec     dword ptr [eax + 0x28]
        mov     dword ptr [esp + 0x28], 0x80004005
    L_5e96:
        mov     dword ptr [esp + 0x14], ebp
        xor     eax, eax
        cmp     word ptr [ebp], ax
        mov     dword ptr [esp + 0x20], 0x1
        mov     dword ptr [esp + 0x2c], eax
        /* __emit: JBE rel32 to L_5f2b; MSVC6 picks short rel8 form (76 79) */
        __emit 0x0F
        __emit 0x86
        __emit 0x79
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_5eb2:
        mov     edx, dword ptr [ebp + 0x4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 0x4
        mov     esi, dword ptr [ebx + edx]
        add     ebx, edx
        cmp     esi, ebx
        jz      L_5f20
    L_5ec6:
        mov     eax, offset FUN_10006150
        test    eax, eax
        jz      L_5eed
        mov     edi, dword ptr [esi + 0x8]
        test    edi, edi
        jz      L_5eed
        mov     ecx, edi
        call    FUN_10006020
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
        mov     dword ptr [esi + 0x8], 0x0
    L_5eed:
        mov     ecx, dword ptr [esi + 0x4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [ecx], edi
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [edx + 0x4], eax
        mov     dword ptr [esi + 0x4], 0x0
        mov     dword ptr [esi], 0x0
        mov     ecx, dword ptr [g_10055050]
        push    esi
        push    ecx
        call    FUN_1000c4c0
        cmp     edi, ebx
        mov     esi, edi
        jnz     L_5ec6
        mov     eax, dword ptr [esp + 0x2c]
    L_5f20:
        inc     eax
        cmp     ax, word ptr [ebp]
        mov     dword ptr [esp + 0x2c], eax
        jc      L_5eb2
    L_5f2b:
        mov     ecx, ebp
        mov     dword ptr [ebp + 0x24], 0x0
        mov     dword ptr [esp + 0x20], 0xffffffff
        call    FUN_10006480
        push    ebp
        call    FUN_10001d60
        add     esp, 0x4
    L_5f4a:
        mov     eax, dword ptr [esp + 0x28]
    L_5f4e:
        mov     ecx, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x14
        ret     0x8
    L_5f63:
        push    ebx
        call    dword ptr [ebp + 0xc]
        and     ax, word ptr [ebp + 0x2]
        mov     edx, dword ptr [ebp + 0x4]
        movzx   eax, ax
        shl     eax, 0x4
        mov     esi, dword ptr [eax + edx]
        add     eax, edx
        cmp     esi, eax
        mov     dword ptr [esp + 0x14], eax
        jz      L_5fba
    L_5f81:
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        js      L_5f99
        mov     edi, dword ptr [esi + 0x8]
        push    0x0
        push    edi
        call    dword ptr [ebp + 0x8]
        test    al, al
        jnz     L_5fac
        mov     eax, dword ptr [esp + 0x14]
    L_5f99:
        mov     esi, dword ptr [esi]
        cmp     esi, eax
        jnz     L_5f81
        mov     dword ptr [esp + 0x28], 0xc1120003
        /* __emit: JMP rel32 to L_5e96; MSVC6 miscomputes backward rel (off-by-4) */
        __emit 0xE9
        __emit 0xEA
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
    L_5fac:
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jz      L_5fb6
        push    edi
        call    eax
    L_5fb6:
        test    edi, edi
        jnz     L_5fc7
    L_5fba:
        mov     dword ptr [esp + 0x28], 0xc1120003
        /* __emit: JMP rel32 to L_5e96; MSVC6 miscomputes backward rel (off-by-4) */
        __emit 0xE9
        __emit 0xCF
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
    L_5fc7:
        mov     ecx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [ecx + 0x8c]
        push    edi
        push    0x10006570
        push    eax
        call    FUN_100062a0
        neg     al
        sbb     eax, eax
        and     eax, 0x7fffbffb
        add     eax, 0x80004005
        test    eax, eax
        mov     dword ptr [esp + 0x28], eax
        /* __emit: JL rel32 to L_5e96; MSVC6 miscomputes backward rel (off-by-4) */
        __emit 0x0F
        __emit 0x8C
        __emit 0x9F
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
        mov     eax, dword ptr [ebp + 0x24]
        dec     eax
        push    eax
        push    0x10049b68
        mov     ecx, edi
        call    FUN_1001b700
        test    eax, eax
        mov     dword ptr [esp + 0x28], eax
        /* __emit: JL rel32 to L_5e96; MSVC6 miscomputes backward rel (off-by-4) */
        __emit 0x0F
        __emit 0x8C
        __emit 0x82
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
        mov     edx, dword ptr [esp + 0x2c]
        mov     dword ptr [edx], ebp
        jmp     L_5f4a
    }
}
