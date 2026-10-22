/*
 * FUN_5e0321c1 (544 B) - fixed-point / 16.16-style accumulator combine
 * routine. Merges two 16-bit "angle/accumulator" values (at +0xa) with
 * carry propagation across a 5-word (10-byte) mantissa, using helper
 * FUN_5e02ffc4 (multiply-accumulate), FUN_5e030043 and FUN_5e030071
 * (carry/rounding helpers). Handles overflow by saturating to 0x7fff8000.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02ffc4(void);
extern void __cdecl FUN_5e030043(void);
extern void __cdecl FUN_5e030071(void);

__declspec(naked) void FUN_5e0321c1(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x24
        push    ebx
        mov     ebx, dword ptr [ebp+0xc]
        push    esi
        mov     esi, dword ptr [ebp+0x8]
        mov     cx, word ptr [ebx+0xa]
        xor     eax, eax
        push    edi
        mov     dword ptr [ebp-0x14], eax
        mov     dword ptr [ebp-0x24], eax
        mov     dword ptr [ebp-0x20], eax
        mov     dword ptr [ebp-0x1c], eax
        mov     ax, word ptr [esi+0xa]
        mov     edi, ecx
        mov     edx, 0x7fff
        xor     edi, eax
        and     eax, edx
        and     ecx, edx
        and     edi, 0x8000
        cmp     ax, 0x7fff
        lea     edx, [ecx+eax*1]
        mov     dword ptr [ebp+0x8], edx
        jnc     L3c1
        cmp     cx, 0x7fff
        jnc     L3c1
        cmp     dx, 0xbffd
        ja      L3c1
        cmp     dx, 0x3fbf
        ja      L22a
        xor     eax, eax
        jmp     L264
    L22a:
        test    ax, ax
        mov     edx, 0x7fffffff
        jnz     L24c
        inc     dword ptr [ebp+0x8]
        test    dword ptr [esi+0x8], edx
        jnz     L24c
        xor     eax, eax
        cmp     dword ptr [esi+0x4], eax
        jnz     L24e
        cmp     dword ptr [esi], eax
        jnz     L24e
        jmp     L3bb
    L24c:
        xor     eax, eax
    L24e:
        cmp     cx, ax
        jnz     L271
        inc     dword ptr [ebp+0x8]
        test    dword ptr [ebx+0x8], edx
        jnz     L271
        cmp     dword ptr [ebx+0x4], eax
        jnz     L271
        cmp     dword ptr [ebx], eax
        jnz     L271
    L264:
        mov     dword ptr [esi+0x8], eax
        mov     dword ptr [esi+0x4], eax
        mov     dword ptr [esi], eax
        jmp     L3dc
    L271:
        mov     dword ptr [ebp-0x10], eax
        lea     eax, [ebp-0x20]
        mov     dword ptr [ebp-0x4], eax
        mov     dword ptr [ebp+0xc], 0x5
    L281:
        mov     eax, dword ptr [ebp-0x10]
        add     eax, eax
        cmp     dword ptr [ebp+0xc], 0x0
        jle     L2d5
        add     eax, esi
        lea     ecx, [ebx+0x8]
        mov     dword ptr [ebp-0x8], eax
        mov     eax, dword ptr [ebp+0xc]
        mov     dword ptr [ebp-0xc], ecx
        mov     dword ptr [ebp-0x18], eax
    L29d:
        mov     eax, dword ptr [ebp-0x8]
        mov     ecx, dword ptr [ebp-0xc]
        movzx   eax, word ptr [eax]
        movzx   ecx, word ptr [ecx]
        imul    eax, ecx
        mov     ecx, dword ptr [ebp-0x4]
        add     ecx, -0x4
        push    ecx
        push    eax
        push    dword ptr [ecx]
        call    FUN_5e02ffc4
        add     esp, 0xc
        test    eax, eax
        jz      L2c8
        mov     eax, dword ptr [ebp-0x4]
        inc     word ptr [eax]
    L2c8:
        add     dword ptr [ebp-0x8], 0x2
        sub     dword ptr [ebp-0xc], 0x2
        dec     dword ptr [ebp-0x18]
        jnz     L29d
    L2d5:
        add     dword ptr [ebp-0x4], 0x2
        inc     dword ptr [ebp-0x10]
        dec     dword ptr [ebp+0xc]
        cmp     dword ptr [ebp+0xc], 0x0
        jg      L281
        add     dword ptr [ebp+0x8], 0xc002
        cmp     word ptr [ebp+0x8], 0x0
        jle     L318
    L2f3:
        test    byte ptr [ebp-0x19], 0x80
        jnz     L311
        lea     eax, [ebp-0x24]
        push    eax
        call    FUN_5e030043
        add     dword ptr [ebp+0x8], 0xffff
        pop     ecx
        cmp     word ptr [ebp+0x8], 0x0
        jg      L2f3
    L311:
        cmp     word ptr [ebp+0x8], 0x0
        jg      L351
    L318:
        add     dword ptr [ebp+0x8], 0xffff
        cmp     word ptr [ebp+0x8], 0x0
        jge     L351
        movsx   eax, word ptr [ebp+0x8]
        neg     eax
        add     dword ptr [ebp+0x8], eax
        mov     ebx, eax
    L331:
        test    byte ptr [ebp-0x24], 0x1
        jz      L33a
        inc     dword ptr [ebp-0x14]
    L33a:
        lea     eax, [ebp-0x24]
        push    eax
        call    FUN_5e030071
        dec     ebx
        pop     ecx
        jnz     L331
        cmp     dword ptr [ebp-0x14], 0x0
        jz      L351
        or      byte ptr [ebp-0x24], 0x1
    L351:
        cmp     word ptr [ebp-0x24], 0x8000
        ja      L368
        mov     eax, dword ptr [ebp-0x24]
        and     eax, 0x1ffff
        cmp     eax, 0x18000
        jnz     L39d
    L368:
        cmp     dword ptr [ebp-0x22], -0x1
        jnz     L39a
        and     dword ptr [ebp-0x22], 0x0
        cmp     dword ptr [ebp-0x1e], -0x1
        jnz     L395
        and     dword ptr [ebp-0x1e], 0x0
        /* __emit: cmp word ptr [ebp-0x1a],0xffff - MSVC6 emits imm8 form
           (66 83 7D E6 FF); ref uses imm16 form (66 81 7D E6 FF FF) */
        __emit 0x66
        __emit 0x81
        __emit 0x7D
        __emit 0xE6
        __emit 0xFF
        __emit 0xFF
        jnz     L38f
        inc     dword ptr [ebp+0x8]
        mov     word ptr [ebp-0x1a], 0x8000
        jmp     L39d
    L38f:
        inc     word ptr [ebp-0x1a]
        jmp     L39d
    L395:
        inc     dword ptr [ebp-0x1e]
        jmp     L39d
    L39a:
        inc     dword ptr [ebp-0x22]
    L39d:
        mov     eax, dword ptr [ebp+0x8]
        cmp     ax, 0x7fff
        jnc     L3c1
        mov     cx, word ptr [ebp-0x22]
        or      eax, edi
        mov     word ptr [esi], cx
        mov     ecx, dword ptr [ebp-0x20]
        mov     dword ptr [esi+0x2], ecx
        mov     ecx, dword ptr [ebp-0x1c]
        mov     dword ptr [esi+0x6], ecx
    L3bb:
        mov     word ptr [esi+0xa], ax
        jmp     L3dc
    L3c1:
        neg     di
        sbb     edi, edi
        and     dword ptr [esi+0x4], 0x0
        and     edi, 0x80000000
        add     edi, 0x7fff8000
        and     dword ptr [esi], 0x0
        mov     dword ptr [esi+0x8], edi
    L3dc:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
