/*
 * FUN_00658e00 (62 B) — __fastcall destructor-style helper.
 *
 * Frees each non-null pointer in the array at [ecx+0xc] (count bounded by
 * [ecx+0x1c]+4), then frees the pointer at [ecx+0x20] if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00658e00(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [ecx + 0x20]
        test    ebx, ebx
        jz      L_end
        push    esi
        mov     esi, dword ptr [ecx + 0xc]
        push    edi
        mov     edi, dword ptr [ecx + 0x1c]
        add     edi, 0x4
        cmp     esi, edi
        jnc     L_afterloop
    L_loop:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_skipfree
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_skipfree:
        add     esi, 0x4
        cmp     esi, edi
        jc      L_loop
    L_afterloop:
        test    ebx, ebx
        pop     edi
        pop     esi
        jz      L_end
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
    L_end:
        pop     ebx
        ret
    }
}
