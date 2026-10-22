/*
 * FUN_006d57e0 (551 B) - __thiscall linked-list builder. For each tile,
 * frees existing record lists, allocates new 0x20-byte record nodes via
 * FUN_006d4350, and inserts them into a sorted doubly-linked list keyed by
 * the value at +0x8. Calls FUN_006d43a0 to compare/insert.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006d4370(void);
extern void __cdecl FUN_004084e0(void);   /* free */
extern void __cdecl FUN_004084d0(void);   /* alloc */
extern void __cdecl FUN_006d4350(void);
extern void __cdecl FUN_006d43a0(void);

__declspec(naked) void FUN_006d57e0(void)
{
    __asm {
        sub     esp, 0x34
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x8]
        xor     esi, esi
        cmp     edi, esi
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x38], edi
        jle     L_5a01
        mov     edx, dword ptr [ecx + 0xc]
        push    ebx
        push    ebp
        mov     dword ptr [esp + 0x3c], edx
        mov     dword ptr [esp + 0x34], esi
        mov     dword ptr [esp + 0x20], esi
    L_580f:
        test    edx, edx
        mov     dword ptr [esp + 0x10], 0x0
        jle     L_59d0
        mov     ebx, dword ptr [ecx + 0x128]
        mov     ecx, dword ptr [ecx + 0x124]
        mov     edi, dword ptr [esp + 0x20]
        lea     eax, [esi + ecx*1 + 0x4]
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x2c], edi
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x24], ecx
        mov     dword ptr [esp + 0x1c], eax
        jmp     L_584d
    L_5849:
        mov     ebx, dword ptr [esp + 0x28]
    L_584d:
        mov     esi, dword ptr [edi + ebx*1]
        test    esi, esi
        jz      L_586b
        mov     ecx, esi
        call    FUN_006d4370
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + ebx*1], 0x0
    L_586b:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [ecx]
        test    ebp, ebp
        jz      L_598f
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_5890
        mov     ecx, eax
        call    FUN_006d4350
        jmp     L_5892
    L_5890:
        xor     eax, eax
    L_5892:
        mov     edx, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        mov     dword ptr [esp + 0x3c], ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    edx
        mov     edx, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [ecx + edx*1]
        mov     edx, dword ptr [ecx]
        push    edx
        mov     ecx, eax
        mov     dword ptr [edi + ebx*1], eax
        call    FUN_006d43a0
        mov     ebx, 0x1
        cmp     ebp, ebx
        jle     L_598f
    L_58cc:
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_58e5
        mov     ecx, eax
        call    FUN_006d4350
        mov     esi, eax
        jmp     L_58e7
    L_58e5:
        xor     esi, esi
    L_58e7:
        cmp     ebx, ebp
        jge     L_5924
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [eax + ecx*1]
        lea     edi, [edx + ebx*4]
    L_58f9:
        mov     eax, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x18]
        push    eax
        mov     eax, dword ptr [edi]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_006d43a0
        test    al, al
        jnz     L_591e
        inc     ebx
        add     edi, 0x4
        cmp     ebx, ebp
        jl      L_58f9
    L_591e:
        mov     edi, dword ptr [esp + 0x2c]
        cmp     ebx, ebp
    L_5924:
        jz      L_597b
        mov     ecx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [edi + ecx*1]
        mov     edx, dword ptr [esi + 0x8]
        cmp     dword ptr [eax + 0x8], edx
        jle     L_5940
        mov     dword ptr [esi + 0x18], eax
        mov     dword ptr [eax + 0x1c], esi
        mov     dword ptr [edi + ecx*1], esi
        jmp     L_5970
    L_5940:
        mov     ecx, dword ptr [eax + 0x18]
        test    ecx, ecx
        jz      L_5955
    L_5947:
        cmp     dword ptr [ecx + 0x8], edx
        jg      L_5955
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 0x18]
        test    ecx, ecx
        jnz     L_5947
    L_5955:
        mov     ecx, dword ptr [eax + 0x18]
        test    ecx, ecx
        jnz     L_5964
        mov     dword ptr [eax + 0x18], esi
        mov     dword ptr [esi + 0x1c], eax
        jmp     L_5970
    L_5964:
        mov     dword ptr [esi + 0x18], ecx
        mov     dword ptr [ecx + 0x1c], esi
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [eax + 0x18], esi
    L_5970:
        inc     ebx
        cmp     ebx, ebp
        jl      L_58cc
        jmp     L_598f
    L_597b:
        test    esi, esi
        jz      L_598f
        mov     ecx, esi
        call    FUN_006d4370
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_598f:
        mov     eax, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x3c]
        mov     ecx, 0x8
        inc     eax
        add     ebx, ecx
        add     esi, ecx
        add     edi, 0x4
        cmp     eax, edx
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x2c], edi
        jl      L_5849
        mov     edi, dword ptr [esp + 0x40]
        mov     esi, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x30]
    L_59d0:
        mov     ebp, dword ptr [esp + 0x20]
        mov     ebx, dword ptr [esp + 0x18]
        lea     eax, [edx*4 + 0x0]
        add     ebp, eax
        inc     ebx
        lea     eax, [edx*8 + 0x0]
        add     esi, eax
        cmp     ebx, edi
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x20], ebp
        mov     dword ptr [esp + 0x34], esi
        jl      L_580f
        pop     ebp
        pop     ebx
    L_5a01:
        pop     edi
        pop     esi
        add     esp, 0x34
        ret
    }
}
