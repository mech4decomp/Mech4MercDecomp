/*
 * FUN_00414f70 (94 B) — archive/database subsystem init: zeroes a global
 * counter, fills a 0x3e8-entry table (0x7b8818..0x7b8c00) via FUN_007047f0,
 * then computes a bitmask and ORs it into every 0xb-th entry of a second
 * table (0x7b8850..).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b21fc;
extern int FUN_007047f0(void);

__declspec(naked) void FUN_00414f70(void)
{
    __asm {
        push    esi
        mov     dword ptr [g_007b21fc], 0
        mov     esi, 0x7b8818
    loop_fill:
        call    FUN_007047f0
        mov     dword ptr [esi], eax
        add     esi, 0x4
        cmp     esi, 0x7b8c00
        jl      loop_fill
        mov     edx, 0x3fff
        mov     esi, 0x4000
        xor     ecx, ecx
    loop_bit:
        inc     ecx
        mov     eax, 0x1
        shl     eax, cl
        __emit 0xF6          /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit 0xC4
        __emit 0x40
        jz      loop_bit
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      done
        push    edi
        mov     eax, 0x7b8850
    loop_or:
        inc     ecx
        mov     edi, dword ptr [eax]
        and     edi, edx
        or      edi, esi
        mov     dword ptr [eax], edi
        sar     edx, 0x1
        sar     esi, 0x1
        add     eax, 0x2c
        dec     ecx
        __emit 0x75          /* __emit: MSVC6 miscomputes backward jnz rel8 (0xED vs ref 0xEE) */
        __emit 0xEE
        pop     edi
    done:
        pop     esi
        ret
    }
}
