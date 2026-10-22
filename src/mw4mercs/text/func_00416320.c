/*
 * FUN_00416320 (95 B) — database list-callee helper. __fastcall (this in ECX).
 * Iterates the dword array at [this+0xc] calling each object's vtable[0](1),
 * frees the array, then frees [this+0xc] and calls FUN_00415bc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415bc0(void);

__declspec(naked) void FUN_00416320(void)
{
    __asm {
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x10]
        test    eax, eax
        jbe     L16345
        push    ebx
        push    esi
        mov     esi, dword ptr [edi + 0xc]
        mov     ebx, eax
L16331:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      L1633D
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L1633D:
        add     esi, 0x4
        dec     ebx
        jnz     L16331
        pop     esi
        pop     ebx
L16345:
        mov     eax, dword ptr [edi + 0x10]
        test    eax, eax
        jz      L16366
        mov     ecx, dword ptr [edi + 0xc]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0xc], 0x0
        mov     dword ptr [edi + 0x10], 0x0
L16366:
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        jz      L16376
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L16376:
        mov     ecx, edi
        call    FUN_00415bc0
        pop     edi
        ret
    }
}
