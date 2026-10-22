/*
 * FUN_1002c540 (418 B) — __stdcall, RET 0x14.
 * Enumerates a collection via vtable calls, building a result array.
 *
 * CFLAGS: /O1
 */

extern void * __cdecl FUN_10001d50(unsigned int);
extern void __cdecl FUN_10001d60(void *);
extern void __cdecl FUN_10037bf0(void);

__declspec(naked) void __stdcall FUN_1002c540(void)
{
    __asm {
        sub     esp, 0x10
        mov     edx, dword ptr [esp + 0x18]
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [ebx]
        push    ebp
        push    esi
        push    edi
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edx
        xor     edi, edi
        push    ebx
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x28], edi
        call    dword ptr [eax + 0x28]
        mov     esi, eax
        cmp     esi, edi
        jl      L_1002c6d6
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, edi
        jnz     L_1002c58f
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [eax], edi
        mov     dword ptr [ecx], edi
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x14
    L_1002c58f:
        lea     edx, [eax + eax*2]
        shl     edx, 0x2
        push    edx
        call    FUN_10001d50
        mov     edx, eax
        add     esp, 0x4
        cmp     edx, edi
        mov     dword ptr [esp + 0x18], edx
        jnz     L_1002c5b2
        mov     esi, 0x8007000e
        jmp     L_1002c6c9
    L_1002c5b2:
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [eax + eax*2]
        shl     ecx, 0x2
        mov     ebp, ecx
        shr     ecx, 0x2
        xor     eax, eax
        mov     edi, edx
        rep     stosd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     stosb
        mov     eax, dword ptr [esp + 0x10]
        xor     ebp, ebp
        test    eax, eax
        mov     dword ptr [esp + 0x14], ebp
        jbe     L_1002c698
        lea     edi, [edx + 0x8]
    L_1002c5e3:
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x24]
        push    ecx
        push    ebp
        push    edx
        push    ebx
        call    dword ptr [eax + 0x2c]
        mov     esi, eax
        test    esi, esi
        jl      L_1002c6c5
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    edx
        push    ebx
        call    dword ptr [eax]
        mov     esi, eax
        test    esi, esi
        jl      L_1002c6c5
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        call    FUN_10037bf0
        add     esp, 0x8
        test    eax, eax
        jnz     L_1002c67c
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [ebx]
        lea     eax, [edi - 0x8]
        push    eax
        push    0x10049b60
        push    ecx
        push    ebx
        call    dword ptr [edx + 0xc]
        mov     esi, eax
        test    esi, esi
        jl      L_1002c6c5
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [ebx]
        lea     eax, [edi - 0x4]
        push    eax
        push    0x10049c10
        push    ecx
        push    ebx
        call    dword ptr [edx + 0x14]
        mov     esi, eax
        test    esi, esi
        jl      L_1002c6c5
        mov     eax, dword ptr [esp + 0x24]
        mov     edx, dword ptr [ebx]
        push    edi
        push    0x10049c54
        push    eax
        push    ebx
        call    dword ptr [edx + 0xc]
        mov     esi, eax
        test    esi, esi
        jl      L_1002c6c5
        inc     dword ptr [esp + 0x14]
    L_1002c67c:
        mov     eax, dword ptr [esp + 0x10]
        inc     ebp
        add     edi, 0xc
        cmp     ebp, eax
        jc      L_1002c5e3
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jnz     L_1002c6a5
        mov     edx, dword ptr [esp + 0x18]
    L_1002c698:
        push    edx
        call    FUN_10001d60
        add     esp, 0x4
        xor     eax, eax
        jmp     L_1002c6a9
    L_1002c6a5:
        mov     eax, dword ptr [esp + 0x18]
    L_1002c6a9:
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x34]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [esp + 0x14]
        pop     edi
        mov     dword ptr [edx], eax
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x14
    L_1002c6c5:
        mov     edx, dword ptr [esp + 0x18]
    L_1002c6c9:
        test    edx, edx
        jz      L_1002c6d6
        push    edx
        call    FUN_10001d60
        add     esp, 0x4
    L_1002c6d6:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x14
    }
}
