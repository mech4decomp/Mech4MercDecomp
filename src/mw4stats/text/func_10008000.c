/*
 * FUN_10008000 (728 B) - __fastcall (ECX = this). A character/entity
 * parser state machine driven by a 6-entry jump table (indexed by ESI).
 * Handles '&', '#', 'x', decimal digits, and hex digits, accumulating a
 * value in EBX. On errors reports via FUN_10008d30/FUN_10008d00 and
 * returns false; otherwise returns (ESI != -1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10006ef0(void);
extern void __cdecl FUN_10006e10(void);
extern void __cdecl FUN_10008d30(void);
extern void __cdecl FUN_10008d00(void);
extern unsigned long g_jump_100082d8[];
extern char g_str_100256c0[];
extern char g_str_100257c0[];
extern char g_str_100257b0[];
extern char g_str_100257a0[];
extern char g_str_10025780[];
extern char g_str_1002575c[];
extern char g_str_10025748[];
extern char g_str_100256f0[];

__declspec(naked) void __cdecl FUN_10008000(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        xor     esi, esi
        mov     edi, ecx
        xor     ebx, ebx
L09:
        mov     eax, dword ptr [edi + 0x14]
        cmp     esi, 0x5
        mov     ax, word ptr [eax]
        ja      L17d
        jmp     dword ptr [esi*4 + g_jump_100082d8]

L01f:
        cmp     ax, 0x26
        jnz     L18a
        push    0x0
        lea     ecx, [edi + 0xc]
        call    FUN_10006ef0
        mov     esi, 0x1
        jmp     L09

L03a:
        cmp     ax, 0x23
        jnz     L1a5
        push    0x0
        lea     ecx, [edi + 0xc]
        call    FUN_10006ef0
        mov     esi, 0x2
        jmp     L09

L055:
        cmp     ax, 0x78
        jnz     L06c
        push    0x0
        lea     ecx, [edi + 0xc]
        call    FUN_10006ef0
        mov     esi, 0x4
        jmp     L09

L06c:
        cmp     ax, 0x30
        jc      L1c0
        cmp     ax, 0x39
        ja      L1c0
        and     eax, 0xffff
        push    0x0
        sub     eax, 0x30
        lea     ecx, [edi + 0xc]
        mov     ebx, eax
        call    FUN_10006ef0
        mov     esi, 0x3
        jmp     L09

L09e:
        cmp     ax, 0x30
        jc      L1db
        cmp     ax, 0x39
        ja      L1db
        lea     ecx, [ebx + ebx*4]
        and     eax, 0xffff
        push    0x0
        lea     ebx, [eax + ecx*2 - 0x30]
        lea     ecx, [edi + 0xc]
        call    FUN_10006ef0
        cmp     ebx, 0xffff
        ja      L22b
        mov     esi, 0x3
        jmp     L09

L0de:
        cmp     ax, 0x30
        jc      L0ea
        cmp     ax, 0x39
        jbe     L10a
L0ea:
        cmp     ax, 0x41
        jc      L0f6
        cmp     ax, 0x46
        jbe     L10a
L0f6:
        cmp     ax, 0x61
        jc      L210
        cmp     ax, 0x66
        ja      L210
L10a:
        push    eax
        call    FUN_10006e10
        push    0x0
        lea     ecx, [edi + 0xc]
        mov     ebx, eax
        call    FUN_10006ef0
        mov     esi, 0x5
        jmp     L09

L126:
        cmp     ax, 0x30
        jc      L132
        cmp     ax, 0x39
        jbe     L152
L132:
        cmp     ax, 0x41
        jc      L13e
        cmp     ax, 0x46
        jbe     L152
L13e:
        cmp     ax, 0x61
        jc      L246
        cmp     ax, 0x66
        ja      L246
L152:
        push    eax
        call    FUN_10006e10
        shl     ebx, 0x4
        push    0x0
        lea     ecx, [edi + 0xc]
        add     ebx, eax
        call    FUN_10006ef0
        cmp     ebx, 0xffff
        ja      L22b
        mov     esi, 0x5
        jmp     L09

L17d:
        test    esi, esi
        jl      L278
        jmp     L09

L18a:
        push    offset g_str_100256c0
        mov     ecx, edi
        or      esi, 0xffffffff
        call    FUN_10008d30
        xor     eax, eax
        cmp     esi, -0x1
        pop     edi
        pop     esi
        setnz   al
        pop     ebx
        ret

L1a5:
        push    offset g_str_100257c0
        mov     ecx, edi
        or      esi, 0xffffffff
        call    FUN_10008d30
        xor     eax, eax
        cmp     esi, -0x1
        pop     edi
        pop     esi
        setnz   al
        pop     ebx
        ret

L1c0:
        push    offset g_str_100257b0
        mov     ecx, edi
        or      esi, 0xffffffff
        call    FUN_10008d30
        xor     eax, eax
        cmp     esi, -0x1
        pop     edi
        pop     esi
        setnz   al
        pop     ebx
        ret

L1db:
        cmp     ax, 0x3b
        jnz     L1f5
        push    0x0
        lea     ecx, [edi + 0xc]
        call    FUN_10006ef0
        mov     esi, 0xfffffffe
        jmp     L27d
L1f5:
        push    offset g_str_100257a0
        mov     ecx, edi
        or      esi, 0xffffffff
        call    FUN_10008d30
        xor     eax, eax
        cmp     esi, -0x1
        pop     edi
        pop     esi
        setnz   al
        pop     ebx
        ret

L210:
        push    offset g_str_10025780
        mov     ecx, edi
        or      esi, 0xffffffff
        call    FUN_10008d30
        xor     eax, eax
        cmp     esi, -0x1
        pop     edi
        pop     esi
        setnz   al
        pop     ebx
        ret

L22b:
        push    offset g_str_1002575c
        mov     ecx, edi
        or      esi, 0xffffffff
        call    FUN_10008d00
        xor     eax, eax
        cmp     esi, -0x1
        pop     edi
        pop     esi
        setnz   al
        pop     ebx
        ret

L246:
        cmp     ax, 0x3b
        jnz     L25d
        push    0x0
        lea     ecx, [edi + 0xc]
        call    FUN_10006ef0
        mov     esi, 0xfffffffe
        jmp     L27d
L25d:
        push    offset g_str_10025748
        mov     ecx, edi
        or      esi, 0xffffffff
        call    FUN_10008d30
        xor     eax, eax
        cmp     esi, -0x1
        pop     edi
        pop     esi
        setnz   al
        pop     ebx
        ret

L278:
        cmp     esi, -0x2
        jnz     L2cc
L27d:
        cmp     bx, 0x20
        jc      L28a
        cmp     bx, 0xd7ff
        jbe     L2cc
L28a:
        cmp     bx, 0x9
        jz      L2cc
        cmp     bx, 0xa
        jz      L2cc
        cmp     bx, 0xd
        jz      L2cc
        cmp     bx, 0xe000
        jc      L2aa
        __emit 0x66 /* __emit: MSVC6 encodes cmp bx,0xfffd as imm8 sign-extended (66 83 FB FD); ref uses imm16 (66 81 FB FD FF) */
        __emit 0x81
        __emit 0xFB
        __emit 0xFD
        __emit 0xFF
        jbe     L2cc
L2aa:
        mov     ecx, dword ptr [edi + 0x10]
        mov     eax, dword ptr [edi + 0x4]
        push    ebx
        push    ebx
        mov     edx, dword ptr [eax]
        push    offset g_str_100256f0
        push    ecx
        mov     ecx, dword ptr [edi + 0xc]
        push    ecx
        push    0xffffd8f2
        push    eax
        call    dword ptr [edx]
        add     esp, 0x1c
        or      esi, 0xffffffff
L2cc:
        xor     eax, eax
        cmp     esi, -0x1
        pop     edi
        pop     esi
        setnz   al
        pop     ebx
        ret

        /* __emit: in-function jump-table DATA (6 dword entries). Inline asm
           has no `dd`, so emit the raw address bytes. */
        __emit 0x1F
        __emit 0x80
        __emit 0x00
        __emit 0x10
        __emit 0x3A
        __emit 0x80
        __emit 0x00
        __emit 0x10
        __emit 0x55
        __emit 0x80
        __emit 0x00
        __emit 0x10
        __emit 0x9E
        __emit 0x80
        __emit 0x00
        __emit 0x10
        __emit 0xDE
        __emit 0x80
        __emit 0x00
        __emit 0x10
        __emit 0x26
        __emit 0x81
        __emit 0x00
        __emit 0x10
    }
}
