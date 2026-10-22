/*
 * FUN_006FBE80 (919 B) — LZW compressor primitive.
 * __stdcall RET 0x10 (4 params). Compression counterpart to the matched
 * decompressor FUN_006FC220.
 *
 * Uses a global dictionary at 0x00849EC8 and a set of globals in 0x008567xx.
 * Pure computation + rep stosb/stosw/stosb/lodsb; no external calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008562c8;
extern int g_0085672c;
extern int g_00856734;
extern int g_00856730;
extern int g_00856724;
extern int g_00856728;
extern int g_00856720;
extern int g_00856748;
extern int g_00856744;
extern int g_00856740;
extern int g_0085673c;
extern int g_00856738;
extern char g_0085674c;

__declspec(naked) void FUN_006FBE80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x8
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x4], 0x0
        mov     dword ptr [ebp - 0x8], 0xc00
        mov     dword ptr [g_008562c8], esp
        cmp     dword ptr [ebp + 0x14], 0x0
        jnz     L_fbeaa
        mov     dword ptr [ebp + 0x14], 0x40000000
L_fbeaa:
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [g_0085672c], eax
        mov     dword ptr [g_00856734], eax
        add     eax, dword ptr [ebp + 0x14]
        sub     eax, 0x3
        mov     dword ptr [g_00856730], eax
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [g_00856724], eax
        mov     dword ptr [g_00856728], eax
        add     eax, dword ptr [ebp + 0x10]
        mov     dword ptr [g_00856720], eax
        mov     dword ptr [g_00856748], 0x0
        mov     dword ptr [g_00856744], 0x9
        mov     dword ptr [g_00856740], 0x200
        mov     eax, 0xffffffff
        mov     ecx, dword ptr [ebp - 0x8]
        mov     edi, 0x849ec8
        rep     stosb
        mov     dword ptr [g_0085673c], 0x102
        mov     eax, 0x100
        xor     edx, edx
        mov     edi, dword ptr [g_0085672c]
        cmp     edi, dword ptr [g_00856730]
        jnc     L_fc200
        mov     ecx, dword ptr [g_00856748]
        jecxz   L_fbf38
L_fbf2f:
        shl     ax, 0x1
        rcl     edx, 0x1
        loop    L_fbf2f
        or      al, byte ptr [edi]
L_fbf38:
        stosw
        mov     al, dl
        stosb
        mov     ecx, dword ptr [g_00856744]
        mov     eax, dword ptr [g_00856748]
        add     eax, ecx
        mov     cl, al
        shr     al, 0x3
        add     dword ptr [g_0085672c], eax
        and     cl, 0x7
        movzx   ecx, cl
        mov     dword ptr [g_00856748], ecx
        mov     esi, dword ptr [g_00856724]
        cmp     esi, dword ptr [g_00856720]
        cmc
        jc      L_fbf78
        lodsb
        mov     dword ptr [g_00856724], esi
        clc
L_fbf78:
        movzx   eax, al
L_fbf7b:
        mov     dword ptr [g_00856738], eax
        mov     esi, dword ptr [g_00856724]
        cmp     esi, dword ptr [g_00856720]
        cmc
        jc      L_fbf97
        lodsb
        mov     dword ptr [g_00856724], esi
        clc
L_fbf97:
        jc      L_fc137
        mov     byte ptr [g_0085674c], al
        mov     ebx, dword ptr [g_00856738]
        __emit 0x8D  /* __emit: no-base SIB form lea esi,[ebx*8+0] (8D 34 DD 00000000) — MSVC6 re-bases via different SIB */
        __emit 0x34
        __emit 0xDD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        add     esi, ebx
        add     esi, 0x849ec8
        xor     edi, edi
        cmp     dword ptr [esi], -0x1
        jz      L_fbfe5
L_fbfbe:
        inc     edi
        mov     ebx, dword ptr [esi]
L_fbfc1:
        __emit 0x8D  /* __emit: no-base SIB form lea esi,[ebx*8+0] (8D 34 DD 00000000) — MSVC6 re-bases via different SIB */
        __emit 0x34
        __emit 0xDD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        add     esi, ebx
        add     esi, 0x849ec8
        cmp     byte ptr [esi + 0x8], al
        jnz     L_fbfda
        clc
        mov     eax, ebx
        jmp     L_fbfe6
L_fbfda:
        cmp     dword ptr [esi + 0x4], -0x1
        jz      L_fbfe5
        mov     ebx, dword ptr [esi + 0x4]
        jmp     L_fbfc1
L_fbfe5:
        stc
L_fbfe6:
        jnc     L_fbf7b
        mov     ebx, dword ptr [g_0085673c]
        push    ebx
        or      edi, edi
        jz      L_fbff8
        mov     dword ptr [esi + 0x4], ebx
        jmp     L_fbffa
L_fbff8:
        mov     dword ptr [esi], ebx
L_fbffa:
        cmp     ebx, 0x1000
        jz      L_fc022
        __emit 0x8D  /* __emit: no-base SIB form lea esi,[ebx*8+0] (8D 34 DD 00000000) — MSVC6 re-bases via different SIB */
        __emit 0x34
        __emit 0xDD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        add     esi, ebx
        add     esi, 0x849ec8
        mov     dword ptr [esi], 0xffffffff
        mov     dword ptr [esi + 0x4], 0xffffffff
        mov     byte ptr [esi + 0x8], al
        inc     ebx
L_fc022:
        mov     dword ptr [g_0085673c], ebx
        pop     ebx
        push    ebx
        mov     eax, dword ptr [g_00856738]
        xor     edx, edx
        mov     edi, dword ptr [g_0085672c]
        cmp     edi, dword ptr [g_00856730]
        jnc     L_fc200
        mov     ecx, dword ptr [g_00856748]
        jecxz   L_fc054
L_fc04b:
        shl     ax, 0x1
        rcl     edx, 0x1
        loop    L_fc04b
        or      al, byte ptr [edi]
L_fc054:
        stosw
        mov     al, dl
        stosb
        mov     ecx, dword ptr [g_00856744]
        mov     eax, dword ptr [g_00856748]
        add     eax, ecx
        mov     cl, al
        shr     al, 0x3
        add     dword ptr [g_0085672c], eax
        and     cl, 0x7
        movzx   ecx, cl
        mov     dword ptr [g_00856748], ecx
        pop     ebx
        mov     al, byte ptr [g_0085674c]
        cmp     ebx, dword ptr [g_00856740]
        jc      L_fbf78
        cmp     dword ptr [g_00856744], 0xc
        jc      L_fc126
        mov     eax, 0x100
        xor     edx, edx
        mov     edi, dword ptr [g_0085672c]
        cmp     edi, dword ptr [g_00856730]
        jnc     L_fc200
        mov     ecx, dword ptr [g_00856748]
        jecxz   L_fc0c6
L_fc0bd:
        shl     ax, 0x1
        rcl     edx, 0x1
        loop    L_fc0bd
        or      al, byte ptr [edi]
L_fc0c6:
        stosw
        mov     al, dl
        stosb
        mov     ecx, dword ptr [g_00856744]
        mov     eax, dword ptr [g_00856748]
        add     eax, ecx
        mov     cl, al
        shr     al, 0x3
        add     dword ptr [g_0085672c], eax
        and     cl, 0x7
        movzx   ecx, cl
        mov     dword ptr [g_00856748], ecx
        mov     dword ptr [g_00856744], 0x9
        mov     dword ptr [g_00856740], 0x200
        mov     eax, 0xffffffff
        mov     ecx, dword ptr [ebp - 0x8]
        mov     edi, 0x849ec8
        rep     stosb
        mov     dword ptr [g_0085673c], 0x102
        mov     al, byte ptr [g_0085674c]
        jmp     L_fbf78
L_fc126:
        inc     dword ptr [g_00856744]
        shl     dword ptr [g_00856740], 0x1
        jmp     L_fbf78
L_fc137:
        mov     eax, dword ptr [g_00856738]
        xor     edx, edx
        mov     edi, dword ptr [g_0085672c]
        cmp     edi, dword ptr [g_00856730]
        jnc     L_fc200
        mov     ecx, dword ptr [g_00856748]
        jecxz   L_fc161
L_fc158:
        shl     ax, 0x1
        rcl     edx, 0x1
        loop    L_fc158
        or      al, byte ptr [edi]
L_fc161:
        stosw
        mov     al, dl
        stosb
        mov     ecx, dword ptr [g_00856744]
        mov     eax, dword ptr [g_00856748]
        add     eax, ecx
        mov     cl, al
        shr     al, 0x3
        add     dword ptr [g_0085672c], eax
        and     cl, 0x7
        movzx   ecx, cl
        mov     dword ptr [g_00856748], ecx
        mov     eax, 0x101
        xor     edx, edx
        mov     edi, dword ptr [g_0085672c]
        cmp     edi, dword ptr [g_00856730]
        jnc     L_fc200
        mov     ecx, dword ptr [g_00856748]
        jecxz   L_fc1b0
L_fc1a7:
        shl     ax, 0x1
        rcl     edx, 0x1
        loop    L_fc1a7
        or      al, byte ptr [edi]
L_fc1b0:
        stosw
        mov     al, dl
        stosb
        mov     ecx, dword ptr [g_00856744]
        mov     eax, dword ptr [g_00856748]
        add     eax, ecx
        mov     cl, al
        shr     al, 0x3
        add     dword ptr [g_0085672c], eax
        and     cl, 0x7
        movzx   ecx, cl
        mov     dword ptr [g_00856748], ecx
        mov     eax, dword ptr [g_00856748]
        or      eax, eax
        jz      L_fc1e8
        inc     dword ptr [g_0085672c]
L_fc1e8:
        mov     eax, dword ptr [g_0085672c]
        add     eax, 0x3
        cmp     eax, dword ptr [g_00856730]
        jnc     L_fc200
        sub     eax, dword ptr [g_00856734]
        jmp     L_fc208
L_fc200:
        mov     esp, dword ptr [g_008562c8]
        xor     eax, eax
L_fc208:
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
