/*
 * FUN_10044dc6 (220 B) — __cdecl, RET (no stack cleanup).
 * Byte-stream reader: dispatches on flags at [ESI+0xc], reads one byte
 * from the stream, returns it (or 0xffffffff on failure).
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076aa0[];
extern void __cdecl FUN_10040b65(void);
extern void __cdecl FUN_10045a57(void);

__declspec(naked) void FUN_10044dc6(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    al, 0x83
        jz      L_e9d
        test    al, 0x40
        jnz     L_e9d
        test    al, 0x2
        jz      L_dec
        or      al, 0x20
        mov     dword ptr [esi + 0xc], eax
        jmp     L_e9d
    L_dec:
        or      al, 0x1
        test    ax, 0x10c
        mov     dword ptr [esi + 0xc], eax
        jnz     L_e00
        push    esi
        call    FUN_10040b65
        pop     ecx
        jmp     L_e05
    L_e00:
        mov     eax, dword ptr [esi + 0x8]
        mov     dword ptr [esi], eax
    L_e05:
        push    dword ptr [esi + 0x18]
        push    dword ptr [esi + 0x8]
        push    dword ptr [esi + 0x10]
        call    FUN_10045a57
        add     esp, 0xc
        mov     dword ptr [esi + 0x4], eax
        test    eax, eax
        jz      L_e8c
        cmp     eax, -0x1
        jz      L_e8c
        mov     edx, dword ptr [esi + 0xc]
        test    dl, 0x82
        jnz     L_e61
        mov     ecx, dword ptr [esi + 0x10]
        push    edi
        cmp     ecx, -0x1
        jz      L_e4a
        mov     edi, ecx
        sar     edi, 0x5
        and     ecx, 0x1f
        mov     edi, dword ptr [edi*4 + g_10076aa0]
        lea     ecx, [ecx + ecx*8]
        lea     edi, [edi + ecx*4]
        jmp     L_e4f
    L_e4a:
        mov     edi, 0x100518b8
    L_e4f:
        mov     cl, byte ptr [edi + 0x4]
        pop     edi
        and     cl, 0x82
        cmp     cl, 0x82
        jnz     L_e61
        or      dh, 0x20
        mov     dword ptr [esi + 0xc], edx
    L_e61:
        cmp     dword ptr [esi + 0x18], 0x200
        jnz     L_e7e
        mov     ecx, dword ptr [esi + 0xc]
        test    cl, 0x8
        jz      L_e7e
        test    ch, 0x4
        jnz     L_e7e
        mov     dword ptr [esi + 0x18], 0x1000
    L_e7e:
        mov     ecx, dword ptr [esi]
        dec     eax
        mov     dword ptr [esi + 0x4], eax
        movzx   eax, byte ptr [ecx]
        inc     ecx
        mov     dword ptr [esi], ecx
        pop     esi
        ret
    L_e8c:
        neg     eax
        sbb     eax, eax
        and     eax, 0x10
        add     eax, 0x10
        or      dword ptr [esi + 0xc], eax
        and     dword ptr [esi + 0x4], 0x0
    L_e9d:
        or      eax, 0xffffffff
        pop     esi
        ret
    }
}
