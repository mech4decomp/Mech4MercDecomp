/*
 * FUN_006E2890 (66 B) — String/buffer allocator with refcount header.
 *
 * If param_1 == 0: copies from global singleton (FUN_006E27B0).
 * Else: allocates param_1 + 13 bytes via malloc. Layout:
 *   header[0] = refcount (1)
 *   header[1] = capacity (param_1)
 *   header[2] = size (param_1)
 *   header[3] = data (null-terminated at offset param_1)
 * Stores pointer to data portion (header + 3) in *this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: size).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *__cdecl FUN_006e27b0(void);

__declspec(naked) void __stdcall FUN_006e2890(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        test    esi, esi
        push    edi
        mov     edi, ecx
        jnz     l_alloc
        call    FUN_006e27b0
        mov     eax, dword ptr [eax]
        mov     dword ptr [edi], eax
        pop     edi
        pop     esi
        ret     4
    l_alloc:
        lea     ecx, [esi + 0x0D]
        push    ecx
        _emit   0xFF
        _emit   0x15
        _emit   0x94
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        mov     dword ptr [eax], 1
        mov     byte ptr [eax + esi + 0x0C], 0
        mov     dword ptr [eax + 4], esi
        mov     dword ptr [eax + 8], esi
        add     esp, 4
        add     eax, 0x0C
        mov     dword ptr [edi], eax
        pop     edi
        pop     esi
        ret     4
    }
}
