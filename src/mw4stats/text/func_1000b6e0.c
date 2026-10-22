/*
 * FUN_1000b6e0 (193 B) - __cdecl. Builds a wide string in param_2 by
 * concatenating a fixed prefix, then per-field chunks of param_1's bytes
 * formatted via swprintf, then a fixed suffix. Five fields with widths
 * {4,2,2,2,6}.
 *
 * __cdecl, 2 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021118;   /* wcscat IAT @ 0x10021118 */
extern void *g_10021138;   /* swprintf IAT @ 0x10021138 */

__declspec(naked) void __cdecl FUN_1000b6e0(void)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x30]
        mov     eax, 0x2
        xor     ebx, ebx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x1c], 0x4
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x2c], 0x6
        mov     word ptr [ebp], bx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x38], ebx
L_use_c0:
        test    ebx, ebx
        mov     eax, 0x100262c0
        jz      L_728
        mov     eax, 0x100262bc
L_728:
        push    eax
        push    ebp
        call    dword ptr [g_10021118]
        mov     edi, dword ptr [esp + ebx*4 + 0x24]
        add     esp, 0x8
        xor     esi, esi
        test    edi, edi
        jbe     L_776
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x38]
        lea     ebx, [ecx + eax*1]
        xor     edx, edx
        lea     eax, [esp + 0x14]
L_inner:
        mov     dl, byte ptr [ebx + esi*1]
        push    edx
        push    0x100262b0
        push    eax
        call    dword ptr [g_10021138]
        lea     ecx, [esp + 0x20]
        push    ecx
        push    ebp
        call    dword ptr [g_10021118]
        add     esp, 0x14
        inc     esi
        cmp     esi, edi
        __emit 0x72  /* __emit: MSVC6 miscomputes backward jc rel-offset (off-by-4) when a call-reloc sits between branch and target; ref = 72 D6 */
        __emit 0xD6
        mov     ebx, dword ptr [esp + 0x10]
L_776:
        mov     edx, dword ptr [esp + 0x38]
        add     edx, edi
        inc     ebx
        cmp     ebx, 0x5
        mov     dword ptr [esp + 0x38], edx
        mov     dword ptr [esp + 0x10], ebx
        jc      L_use_c0
        push    0x100262ac
        push    ebp
        call    dword ptr [g_10021118]
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret
    }
}
