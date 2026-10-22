/*
 * FUN_1001b480 (179 B) - __thiscall, RET 0xc. Walks a hash bucket list,
 * invokes a per-entry callback, recurses via FUN_1001b250.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001b250(void);   /* rel32 call */

__declspec(naked) void FUN_1001b480(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        test    ebp, ebp
        push    esi
        push    edi
        mov     ebx, ecx
        jz      L_b526
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      L_b526
        push    ebp
        call    dword ptr [ebx + 0xc]
        and     ax, word ptr [ebx + 0x2]
        mov     ecx, dword ptr [ebx + 0x4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 0x4
        mov     esi, dword ptr [edi + ecx*1]
        add     edi, ecx
        cmp     esi, edi
        jz      L_b500
        nop
        __emit 0x8D  /* __emit: 4-byte NOP (lea esp,[esp+0]); MSVC6 collapses zero-disp [esp] to 8D 24 24 */
        __emit 0x64
        __emit 0x24
        __emit 0x00
L_b4c0:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_b4db
        mov     eax, dword ptr [esi + 0x8]
        push    ebp
        push    eax
        mov     dword ptr [esp + 0x18], eax
        call    dword ptr [ebx + 0x8]
        test    al, al
        jnz     L_b4ee
        mov     ebp, dword ptr [esp + 0x18]
L_b4db:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_b4c0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120007
        pop     ebx
        pop     ecx
        ret     0xc
L_b4ee:
        mov     ebx, dword ptr [ebx + 0x10]
        test    ebx, ebx
        mov     esi, dword ptr [esp + 0x10]
        jz      L_b4fc
        push    esi
        call    ebx
L_b4fc:
        test    esi, esi
        jnz     L_b50d
L_b500:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120007
        pop     ebx
        pop     ecx
        ret     0xc
L_b50d:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_1001b250
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
L_b526:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80004003
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
