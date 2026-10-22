/*
 * FUN_006fc220 (465 B) — LZW decompressor primitive (GIF-style, variable
 * 9-12 bit codes, LSB-first). Shared by the .mw4 archive and texture
 * decompression paths. Reads codes from the input stream, walks the
 * dictionary (g_849ec8, 3-byte entries), and writes the decoded run to
 * the output buffer. Returns the number of output bytes.
 *
 * __stdcall, RET 0xC (3 params: out, in, in_size).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_856750;
extern int g_856754;
extern int g_856758;
extern int g_85675c;
extern int g_856760;
extern int g_856764;
extern char g_856768;
extern char g_849eca;
extern short g_849ec8;

__declspec(naked) void __stdcall FUN_006fc220(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x4], 0x0
        mov     esi, dword ptr [ebp + 0xc]
        mov     ebx, dword ptr [ebp + 0x10]
        mov     edi, dword ptr [ebp + 0x8]
        xor     eax, eax
        xor     ecx, ecx
        lea     ebx, [ebx + esi - 0x3]
        mov     dword ptr [g_856750], eax
        mov     dword ptr [g_856764], ebx
        mov     dword ptr [g_856754], eax
        mov     dword ptr [g_856758], eax
        mov     dword ptr [g_85675c], eax
        mov     dword ptr [g_856760], eax
        mov     dword ptr [g_85675c], 0x1ff
        mov     dword ptr [g_856758], 0x200
        mov     dword ptr [g_856760], 0x102
        mov     byte ptr [g_856768], al
        mov     ch, 0x9
        jmp     L6FC2D9
    L6FC285:
        mov     ch, 0x9
        mov     dword ptr [g_85675c], 0x1ff
        mov     dword ptr [g_856758], 0x200
        mov     dword ptr [g_856760], 0x102
        cmp     esi, dword ptr [g_856764]
        ja      L6FC3DF
        mov     eax, dword ptr [esi]
        xor     ebx, ebx
        shr     eax, cl
        add     cl, ch
        mov     edx, dword ptr [g_85675c]
        mov     bl, cl
        and     cl, 0x7
        shr     ebx, 0x3
        and     eax, edx
        add     esi, ebx
        nop
        mov     dword ptr [g_856750], eax
        mov     byte ptr [g_856768], al
        mov     byte ptr [edi], al
        inc     edi
    L6FC2D9:
        cmp     esi, dword ptr [g_856764]
        ja      L6FC3DF
        mov     eax, dword ptr [esi]
        xor     ebx, ebx
        shr     eax, cl
        add     cl, ch
        mov     edx, dword ptr [g_85675c]
        mov     bl, cl
        and     cl, 0x7
        shr     ebx, 0x3
        and     eax, edx
        add     esi, ebx
        nop
        cmp     eax, 0x101
        jz      L6FC3DF
        cmp     eax, 0x100
        jz      L6FC285
        mov     edx, esp
        dec     esp
        mov     dword ptr [g_856754], eax
        lea     ebx, [eax + eax*2 + g_849ec8]
        cmp     eax, dword ptr [g_856760]
        jl      L6FC348
        mov     al, byte ptr [g_856768]
        mov     byte ptr [esp], al
        dec     esp
        mov     byte ptr [ebx + 0x2], al
        mov     eax, dword ptr [g_856750]
        mov     word ptr [ebx], ax
        lea     ebx, [eax + eax*2 + g_849ec8]
    L6FC348:
        test    ah, ah
        jz      L6FC35F
        mov     al, byte ptr [ebx + 0x2]
        mov     byte ptr [esp], al
        dec     esp
        movzx   eax, word ptr [ebx]
        lea     ebx, [eax + eax*2 + g_849ec8]
        jmp     L6FC348
    L6FC35F:
        mov     byte ptr [g_856768], al
        mov     byte ptr [esp], al
        sub     edx, esp
        mov     ebx, dword ptr [g_856760]
    L6FC36F:
        mov     al, byte ptr [esp]
        inc     esp
        mov     byte ptr [edi], al
        inc     edi
        dec     edx
        jnz     L6FC36F
        mov     al, byte ptr [g_856768]
        mov     edx, dword ptr [g_856750]
        mov     byte ptr [ebx + ebx*2 + g_849eca], al
        mov     word ptr [ebx + ebx*2 + g_849ec8], dx
        inc     ebx
        mov     eax, dword ptr [g_856754]
        mov     dword ptr [g_856760], ebx
        mov     edx, dword ptr [g_856758]
        mov     dword ptr [g_856750], eax
        cmp     ebx, edx
        jl      L6FC2D9
        cmp     ch, 0xc
        jz      L6FC2D9
        inc     ch
        mov     ebx, dword ptr [g_85675c]
        mov     eax, dword ptr [g_856758]
        add     ebx, ebx
        add     eax, eax
        or      ebx, 0x1
        mov     dword ptr [g_856758], eax
        mov     dword ptr [g_85675c], ebx
        jmp     L6FC2D9
    L6FC3DF:
        sub     edi, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 0x4], edi
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
