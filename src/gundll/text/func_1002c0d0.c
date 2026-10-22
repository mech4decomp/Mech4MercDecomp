/*
 * FUN_1002c0d0 (452 B) __stdcall, RET 0x14.
 * Enumerates a COM-style object via its vtable (methods +0x28, +0x2c,
 * +0x00, +0x14, +0x10), allocating a 0x30-byte-per-entry result table
 * and copying per-entry string pointers from the PTR_s_English_10051310
 * table.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10051310;   /* PTR_s_English_10051310 string-ptr table */
extern void __cdecl FUN_10001d50(void);   /* rel32 call (_malloc) */
extern void __cdecl FUN_10037bf0(void);   /* rel32 call */
extern void __cdecl FUN_1002c390(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1002c0d0(void)
{
    __asm {
        sub     esp, 0x18
        mov     edx, dword ptr [esp + 0x20]
        push    ebx
        mov     ebx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [ebx]
        push    ebp
        push    esi
        push    edi
        lea     ecx, [esp + 0x10]
        push    ecx
        xor     edi, edi
        push    edx
        push    ebx
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x28], edi
        call    dword ptr [eax + 0x28]
        mov     esi, eax
        cmp     esi, edi
        jl      L_1002c288
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, edi
        jnz     L_1002c123
        mov     eax, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [eax], edi
        mov     dword ptr [ecx], edi
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x14
    L_1002c123:
        lea     edx, [eax + eax*2]
        shl     edx, 0x4
        push    edx
        call    FUN_10001d50
        mov     edx, eax
        add     esp, 0x4
        cmp     edx, edi
        mov     dword ptr [esp + 0x18], edx
        jnz     L_1002c146
        mov     esi, 0x8007000e
        jmp     L_1002c277
    L_1002c146:
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [eax + eax*2]
        shl     ecx, 0x4
        mov     ebp, ecx
        shr     ecx, 0x2
        xor     eax, eax
        mov     edi, edx
        rep stosd
        mov     ecx, ebp
        and     ecx, 0x3
        rep stosb
        mov     eax, dword ptr [esp + 0x10]
        xor     ebp, ebp
        test    eax, eax
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x20], ebp
        jbe     L_1002c257
        lea     edi, [edx + 0x8]
        mov     dword ptr [esp + 0x24], edi
        nop
    L_1002c180:
        mov     edx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    ebp
        push    edx
        push    ebx
        call    dword ptr [eax + 0x2c]
        mov     esi, eax
        test    esi, esi
        jl      L_1002c273
        mov     edx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    edx
        push    ebx
        call    dword ptr [eax]
        mov     esi, eax
        test    esi, esi
        jl      L_1002c273
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        call    FUN_10037bf0
        add     esp, 0x8
        test    eax, eax
        jnz     L_1002c23b
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [ebx]
        lea     eax, [edi - 0x8]
        push    eax
        push    0x10049c70
        push    ecx
        push    ebx
        call    dword ptr [edx + 0x14]
        mov     esi, eax
        test    esi, esi
        jl      L_1002c273
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [ebx]
        lea     eax, [edi - 0x4]
        push    eax
        push    0x10049c74
        push    ecx
        push    ebx
        call    dword ptr [edx + 0x14]
        mov     esi, eax
        test    esi, esi
        jl      L_1002c273
        mov     ebp, edi
        xor     edi, edi
    L_1002c206:
        mov     eax, dword ptr [edi + g_10051310]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [ebx]
        push    ebp
        push    eax
        push    ecx
        push    ebx
        call    dword ptr [edx + 0x10]
        mov     esi, eax
        test    esi, esi
        jl      L_1002c273
        add     edi, 0x4
        add     ebp, 0x4
        cmp     edi, 0x28
        jc      L_1002c206
        mov     eax, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esp + 0x20]
        mov     edi, dword ptr [esp + 0x24]
        inc     eax
        mov     dword ptr [esp + 0x14], eax
    L_1002c23b:
        mov     eax, dword ptr [esp + 0x10]
        inc     ebp
        add     edi, 0x30
        cmp     ebp, eax
        mov     dword ptr [esp + 0x20], ebp
        mov     dword ptr [esp + 0x24], edi
        jc      L_1002c180
        mov     edx, dword ptr [esp + 0x18]
    L_1002c257:
        mov     eax, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp + 0x14]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        mov     dword ptr [ecx], edx
        pop     ebx
        add     esp, 0x18
        ret     0x14
    L_1002c273:
        mov     edx, dword ptr [esp + 0x18]
    L_1002c277:
        test    edx, edx
        jz      L_1002c288
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    edx
        push    0x0
        call    FUN_1002c390
    L_1002c288:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x14
    }
}
