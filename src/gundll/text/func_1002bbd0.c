/*
 * FUN_1002bbd0 (231 B) — __stdcall, RET 0x18 (6 params).
 * Iterates over a table of (string, len) pairs, converting each via
 * FUN_1002af80 + FUN_10038141, accumulating output length. Returns
 * 0, an error code, or -0x3eedfffe.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_10038141(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1002bbd0(void)
{
    __asm {
        sub     esp, 0xc
        mov     ecx, dword ptr [esp + 0x24]
        push    ebx
        xor     eax, eax
        cmp     ecx, eax
        push    ebp
        push    esi
        push    edi
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x18], eax
        jbe     L_bc94
        mov     eax, dword ptr [esp + 0x30]
        mov     ebx, dword ptr [esp + 0x20]
        lea     edi, [eax + 0x4]
        __emit 0x8D  /* __emit: lea esp,[esp+0] (8D 64 24 00) — MSVC6 drops the 00 disp byte */
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_bc00:
        mov     edx, dword ptr [edi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edx
        call    FUN_1002af80
        test    eax, eax
        mov     dword ptr [esp + 0x30], eax
        jl      L_bc9e
        mov     eax, dword ptr [edi - 0x4]
        mov     ebp, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x24]
        push    eax
        push    0x10049c60
        push    ebp
        push    0x10049b60
        push    ecx
        push    0x100513f0
        push    edx
        push    ebx
        call    FUN_10038141
        mov     esi, eax
        mov     eax, dword ptr [edi]
        add     esp, 0x20
        cmp     eax, ebp
        jz      L_bc55
        push    ebp
        call    FUN_10001d60
        add     esp, 0x4
    L_bc55:
        test    esi, esi
        mov     dword ptr [esp + 0x10], 0x0
        jl      L_bca8
        mov     eax, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x34]
        add     eax, esi
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esp + 0x18]
        sub     ebp, esi
        inc     eax
        add     edi, 0x8
        cmp     eax, ecx
        mov     dword ptr [esp + 0x24], ebp
        lea     ebx, [ebx + esi*2]
        mov     dword ptr [esp + 0x18], eax
        jc      L_bc00
        mov     eax, dword ptr [esp + 0x30]
    L_bc94:
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx], edx
    L_bc9e:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x18
    L_bca8:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120002
        pop     ebx
        add     esp, 0xc
        ret     0x18
    }
}
