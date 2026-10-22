/*
 * FUN_006c8cf0 (290 B) — Pixel-format conversion. Converts the source
 * surface (this+0x18) into the destination (this+0x14) based on bit depth
 * at this+0x10: 0x10 (16-bit RGB565), 0x18 (24-bit), 0x20 (32-bit copy).
 * Unsupported depths log an error via FUN_006bfa50.
 *
 * __fastcall (ECX = this), RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006bfa50(const char *, ...);

__declspec(naked) void __fastcall FUN_006c8cf0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x10]
        cmp     eax, 0x10
        mov     ebx, dword ptr [edi + 0x18]
        jz      L_16bit
        cmp     eax, 0x18
        jz      L_24bit
        cmp     eax, 0x20
        jz      L_32bit
        mov     eax, dword ptr [edi + 0x20]
        push    eax
        push    0x79e220
        call    FUN_006bfa50
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
L_32bit:
        mov     ecx, dword ptr [edi + 0x4]
        test    ecx, ecx
        jle     L_end
        mov     eax, dword ptr [edi + 0x14]
        mov     edx, dword ptr [edi + 0xc]
        sub     ebx, eax
        mov     dword ptr [esp + 0x10], ecx
L_32loop:
        mov     ecx, edx
        mov     ebp, ecx
        shr     ecx, 0x2
        lea     esi, [ebx + eax]
        mov     edi, eax
        rep movsd
        mov     ecx, ebp
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [esp + 0x10]
        add     eax, edx
        dec     ecx
        mov     dword ptr [esp + 0x10], ecx
        jnz     L_32loop
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
L_24bit:
        mov     eax, dword ptr [edi + 0x4]
        xor     ebp, ebp
        test    eax, eax
        jle     L_end
L_24outer:
        mov     ebx, dword ptr [edi + 0x8]
L_24outer_test:
        test    ebx, ebx
        jle     L_24next
        mov     edx, dword ptr [edi + 0xc]
        mov     eax, dword ptr [edi + 0x14]
        imul    edx, ebp
        mov     ecx, dword ptr [edi + 0x18]
        add     eax, edx
        lea     edx, [edx + ecx + 0x2]
        mov     esi, ebx
L_24inner:
        mov     cl, byte ptr [edx - 0x2]
        mov     byte ptr [eax], cl
        mov     cl, byte ptr [edx - 0x1]
        mov     byte ptr [eax + 0x1], cl
        mov     cl, byte ptr [edx]
        mov     byte ptr [eax + 0x2], cl
        mov     byte ptr [eax + 0x3], 0xff
        add     edx, 0x3
        add     eax, 0x4
        dec     esi
        jnz     L_24inner
L_24next:
        mov     eax, dword ptr [edi + 0x4]
        inc     ebp
        cmp     ebp, eax
        jl      L_24outer_test
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
L_16bit:
        mov     eax, dword ptr [edi + 0x4]
        xor     ecx, ecx
        test    eax, eax
        jle     L_end
L_16outer:
        mov     ebp, dword ptr [edi + 0x8]
        test    ebp, ebp
        jle     L_16next
        mov     eax, dword ptr [edi + 0xc]
        mov     esi, dword ptr [edi + 0x18]
        imul    eax, ecx
        mov     edx, dword ptr [edi + 0x14]
        lea     esi, [esi + eax*2]
        add     edx, eax
L_16inner:
        mov     ax, word ptr [esi]
        mov     bl, al
        shl     bl, 0x3
        mov     byte ptr [edx], bl
        mov     byte ptr [edx + 0x3], 0xff
        add     esi, 0x2
        add     edx, 0x4
        mov     ebx, eax
        shr     ebx, 0x2
        shr     eax, 0x7
        and     bl, 0xf8
        and     al, 0xf8
        dec     ebp
        mov     byte ptr [edx - 0x3], bl
        mov     byte ptr [edx - 0x2], al
        jnz     L_16inner
L_16next:
        mov     eax, dword ptr [edi + 0x4]
        inc     ecx
        cmp     ecx, eax
        jl      L_16outer
L_end:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
