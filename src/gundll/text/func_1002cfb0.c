/*
 * FUN_1002cfb0 (215 B) -- __fastcall (this in ECX), `ret` (no stack args).
 * Constructor. Calls FUN_1001add0(0xfe), sets vtable pointers, computes a
 * power-of-two mask (stored at [this+2]), allocates a 0x10-byte-per-entry
 * table via FUN_10001d50, and initializes each entry as a self-linked node.
 *
 * Declared __cdecl (naked, this still arrives in ECX; the emitted bytes are
 * unchanged) so the symbol matches the cdecl-named reference in
 * func_1002ce10.c; the emitted bytes are unchanged.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001add0(void);
extern void __cdecl FUN_10001d50(void);

__declspec(naked) void __cdecl FUN_1002cfb0(void)
{
    __asm {
        push    esi
        push    edi
        push    0xfe
        mov     esi, ecx
        call    FUN_1001add0
        xor     edi, edi
        mov     dword ptr [esi + 0xc], 0x1001b030
        mov     dword ptr [esi + 0x8], 0x10004af0
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0x24], edi
        mov     dword ptr [esi + 0x28], edi
        mov     edx, 0xf
        __emit 0x8D   /* __emit: MSVC6 drops zero-disp on lea esp,[esp]; ref needs 8D 64 24 00 */
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_e0:
        mov     eax, 0x1
        mov     cl, dl
        shl     eax, cl
        test    al, 0x8
        mov     word ptr [esi + 0x2], ax
        jnz     L_f9
        add     edx, 0xffff
        jmp     L_e0
    L_f9:
        xor     eax, 0x8
        test    ax, ax
        jz      L_12
        xor     ecx, ecx
        mov     cl, dl
        inc     cl
        mov     eax, 0x1
        shl     eax, cl
        mov     word ptr [esi + 0x2], ax
    L_12:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x2]
        mov     word ptr [esi], ax
        dec     eax
        mov     word ptr [esi + 0x2], ax
        mov     ax, word ptr [esi]
        cmp     ax, 0x1
        ja      L_31
        lea     ecx, [esi + 0x14]
        mov     dword ptr [esi + 0x4], ecx
        jmp     L_45
    L_31:
        xor     edx, edx
        mov     dx, ax
        shl     edx, 0x4
        push    edx
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esi + 0x4], eax
    L_45:
        xor     edx, edx
        cmp     word ptr [esi], di
        jbe     L_74
        __emit 0x8D   /* __emit: MSVC6 drops zero-disp on lea esp,[esp]; ref needs 8D 64 24 00 */
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_50:
        xor     ecx, ecx
        mov     cx, dx
        mov     eax, ecx
        shl     eax, 0x4
        add     eax, dword ptr [esi + 0x4]
        or      ecx, 0x80000000
        inc     edx
        mov     dword ptr [eax], eax
        mov     dword ptr [eax + 0x4], eax
        mov     dword ptr [eax + 0x8], edi
        mov     dword ptr [eax + 0xc], ecx
        cmp     dx, word ptr [esi]
        jc      L_50
    L_74:
        pop     edi
        mov     dword ptr [esi + 0x2c], 0x1001b030
        mov     dword ptr [esi + 0x30], 0x10004af0
        mov     eax, esi
        pop     esi
        ret
    }
}
