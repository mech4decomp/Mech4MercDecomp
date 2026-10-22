/*
 * FUN_0069b8e0 (59 B) — __cdecl recursive helper.
 *
 * Lazily initializes a cached value at [edi+8] (recursing on the object at
 * [esi+0x14]), then computes [esi+8] = cached * [esi+0x18] (or just cached
 * when [esi+0x18] == -1). Returns the computed value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0069b8e0(void *ptr);

__declspec(naked) int FUN_0069b8e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [esi + 0x14]
        mov     eax, dword ptr [edi + 0x8]
        test    eax, eax
        jnz     L_have
        push    edi
        call    FUN_0069b8e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x8], eax
    L_have:
        mov     eax, dword ptr [esi + 0x18]
        cmp     eax, -0x1
        jnz     L_mul
        mov     eax, dword ptr [edi + 0x8]
        pop     edi
        mov     dword ptr [esi + 0x8], eax
        pop     esi
        ret
    L_mul:
        mov     ecx, dword ptr [edi + 0x8]
        imul    ecx, eax
        pop     edi
        mov     dword ptr [esi + 0x8], ecx
        mov     eax, ecx
        pop     esi
        ret
    }
}
