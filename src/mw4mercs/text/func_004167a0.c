/*
 * FUN_004167a0 (59 B) — DB item/pool helper. Reads node at [this+0x14];
 * calls virtual [vtbl+0x18]; if nonzero, calls [vtbl+0x2c] and returns.
 * Otherwise bumps [this+0x10] via FUN_00416840 and calls [vtbl+0x2c] on
 * the node at [this+0x14].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416840(void);

__declspec(naked) void FUN_004167a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x14]
        test    edi, edi
        jz      done
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x18]
        test    eax, eax
        jz      next
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x2c]
        pop     edi
        pop     esi
        ret
next:
        mov     eax, dword ptr [esi + 0x10]
        inc     eax
        push    eax
        mov     ecx, esi
        call    FUN_00416840
        mov     ecx, dword ptr [esi + 0x14]
        test    ecx, ecx
        jz      done
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x2c]
done:
        pop     edi
        pop     esi
        ret
    }
}
