/*
 * FUN_1002b860 (496 B) __stdcall, RET 0x14.
 * Enumerates a COM-style object via its vtable (methods +0x28, +0x2c,
 * +0x00, +0x0c, +0x14), allocating a 0x14-byte-per-entry result table
 * and filling per-entry fields via named-property virtual calls.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);   /* rel32 call (_malloc) */
extern void __cdecl FUN_10037bf0(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (_free) */

__declspec(naked) void __stdcall FUN_1002b860(void)
{
    __asm {
        sub     esp, 0x14
        mov     edx, dword ptr [esp + 0x1c]
        push    ebx
        mov     ebx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ebx]
        push    ebp
        push    esi
        push    edi
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edx
        xor     ebp, ebp
        push    ebx
        mov     dword ptr [esp + 0x1c], ebp
        mov     dword ptr [esp + 0x2c], ebp
        call    dword ptr [eax + 0x28]
        mov     esi, eax
        cmp     esi, ebp
        jl      L_1002ba44
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        jnz     L_1002b8af
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x38]
        mov     dword ptr [eax], ebp
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr [ecx], ebp
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x14
    L_1002b8af:
        lea     edx, [eax + eax*4]
        shl     edx, 0x2
        push    edx
        call    FUN_10001d50
        mov     edi, eax
        add     esp, 0x4
        cmp     edi, ebp
        mov     dword ptr [esp + 0x18], edi
        jnz     L_1002b8d2
        mov     esi, 0x8007000e
        jmp     L_1002ba37
    L_1002b8d2:
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [eax + eax*4]
        shl     ecx, 0x2
        mov     edx, ecx
        shr     ecx, 0x2
        xor     eax, eax
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
        cmp     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x1c], ebp
        jbe     L_1002ba04
        mov     eax, dword ptr [esp + 0x18]
        lea     edi, [eax + 0x8]
    L_1002b905:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [ebx]
        lea     edx, [esp + 0x28]
        push    edx
        mov     edx, dword ptr [esp + 0x30]
        push    eax
        push    edx
        push    ebx
        call    dword ptr [ecx + 0x2c]
        mov     esi, eax
        cmp     esi, ebp
        jl      L_1002ba33
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x20]
        push    ecx
        push    edx
        push    ebx
        call    dword ptr [eax]
        mov     esi, eax
        cmp     esi, ebp
        jl      L_1002ba33
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x20]
        push    eax
        push    ecx
        call    FUN_10037bf0
        add     esp, 0x8
        test    eax, eax
        jnz     L_1002b9e6
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [ebx]
        lea     eax, [edi - 0x8]
        push    eax
        push    0x10049bf0
        push    ecx
        push    ebx
        call    dword ptr [edx + 0xc]
        mov     esi, eax
        cmp     esi, ebp
        jl      L_1002ba33
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [ebx]
        lea     eax, [edi - 0x4]
        push    eax
        push    0x10049c08
        push    ecx
        push    ebx
        call    dword ptr [edx + 0xc]
        mov     esi, eax
        cmp     esi, ebp
        jl      L_1002ba33
        mov     eax, dword ptr [esp + 0x28]
        mov     edx, dword ptr [ebx]
        push    edi
        push    0x10049c10
        push    eax
        push    ebx
        call    dword ptr [edx + 0x14]
        mov     esi, eax
        cmp     esi, ebp
        jl      L_1002ba33
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [ebx]
        lea     edx, [edi + 0x4]
        push    edx
        push    0x10049c50
        push    eax
        push    ebx
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebp
        jl      L_1002ba33
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [ebx]
        lea     edx, [edi + 0x8]
        push    edx
        push    0x10049c18
        push    eax
        push    ebx
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebp
        jl      L_1002ba33
        inc     dword ptr [esp + 0x14]
    L_1002b9e6:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x10]
        inc     eax
        add     edi, 0x14
        cmp     eax, ecx
        mov     dword ptr [esp + 0x1c], eax
        jc      L_1002b905
        cmp     dword ptr [esp + 0x14], ebp
        jnz     L_1002ba13
    L_1002ba04:
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        call    FUN_10001d60
        add     esp, 0x4
        jmp     L_1002ba17
    L_1002ba13:
        mov     ebp, dword ptr [esp + 0x18]
    L_1002ba17:
        mov     edx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [edx], ebp
        pop     edi
        mov     dword ptr [eax], ecx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x14
    L_1002ba33:
        mov     edi, dword ptr [esp + 0x18]
    L_1002ba37:
        cmp     edi, ebp
        jz      L_1002ba44
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    L_1002ba44:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x14
    }
}
