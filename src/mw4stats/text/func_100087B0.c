/*
 * FUN_100087B0 (418 B) - __fastcall (ECX = this). XML comment parser state
 * machine driven by a 7-entry jump table (indexed by ESI). Matches the
 * '<!--' sequence then consumes comment body characters until '-->'.
 * Returns (ESI == -2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10006ef0(void);
extern void __cdecl FUN_10008d30(void);
extern unsigned long g_jump_10008954[];
extern char g_str_10025880[];
extern char g_str_1002587c[];
extern char g_str_10025878[];
extern char g_str_1002586c[];
extern char g_str_10025868[];

__declspec(naked) void __cdecl FUN_100087B0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        xor     esi, esi
L7b6:
        mov     eax, dword ptr [edi + 0x14]
        cmp     esi, 0x6
        mov     ax, word ptr [eax]
        ja      L8b8
        jmp     dword ptr [esi*4 + g_jump_10008954]

L7cc:
        cmp     ax, 0x3c
        jnz     L8d0
        mov     esi, 0x1
        jmp     L8bd

L7e0:
        cmp     ax, 0x21
        jnz     L8ea
        mov     esi, 0x2
        jmp     L8bd

L7f4:
        cmp     ax, 0x2d
        jnz     L904
        mov     esi, 0x3
        jmp     L8bd

L808:
        cmp     ax, 0x2d
        jnz     L904
        mov     esi, 0x4
        jmp     L8bd

L81c:
        cmp     ax, 0x2d
        jnz     L82c
        mov     esi, 0x5
        jmp     L8bd
L82c:
        cmp     ax, 0x20
        jc      L838
        cmp     ax, 0xd7ff
        jbe     L8a0
L838:
        cmp     ax, 0x9
        jz      L8a0
        cmp     ax, 0xa
        jz      L8a0
        cmp     ax, 0xd
        jz      L8a0
        cmp     ax, 0xe000
        jc      L91e
        cmp     ax, 0xfffd
        ja      L91e
        mov     esi, 0x4
        jmp     L8bd

L865:
        cmp     ax, 0x2d
        jnz     L872
        mov     esi, 0x6
        jmp     L8bd
L872:
        cmp     ax, 0x20
        jc      L87e
        cmp     ax, 0xd7ff
        jbe     L8a0
L87e:
        cmp     ax, 0x9
        jz      L8a0
        cmp     ax, 0xa
        jz      L8a0
        cmp     ax, 0xd
        jz      L8a0
        cmp     ax, 0xe000
        jc      L91e
        cmp     ax, 0xfffd
        ja      L91e
L8a0:
        mov     esi, 0x4
        jmp     L8bd

L8a7:
        cmp     ax, 0x3e
        jnz     L938
        mov     esi, 0xfffffffe
        jmp     L8bd

L8b8:
        cmp     esi, -0x1
        jz      L8c7
L8bd:
        push    0x0
        lea     ecx, [edi + 0xc]
        call    FUN_10006ef0
L8c7:
        test    esi, esi
        jl      L947
        jmp     L7b6

L8d0:
        push    offset g_str_10025880
        mov     ecx, edi
        or      esi, 0xffffffff
        call    FUN_10008d30
        xor     eax, eax
        cmp     esi, -0x2
        pop     edi
        pop     esi
        setz    al
        ret

L8ea:
        push    offset g_str_1002587c
        mov     ecx, edi
        or      esi, 0xffffffff
        call    FUN_10008d30
        xor     eax, eax
        cmp     esi, -0x2
        pop     edi
        pop     esi
        setz    al
        ret

L904:
        push    offset g_str_10025878
        mov     ecx, edi
        or      esi, 0xffffffff
        call    FUN_10008d30
        xor     eax, eax
        cmp     esi, -0x2
        pop     edi
        pop     esi
        setz    al
        ret

L91e:
        push    offset g_str_1002586c
        mov     ecx, edi
        or      esi, 0xffffffff
        call    FUN_10008d30
        xor     eax, eax
        cmp     esi, -0x2
        pop     edi
        pop     esi
        setz    al
        ret

L938:
        push    offset g_str_10025868
        mov     ecx, edi
        or      esi, 0xffffffff
        call    FUN_10008d30
L947:
        xor     eax, eax
        cmp     esi, -0x2
        pop     edi
        pop     esi
        setz    al
        ret
    }
}
