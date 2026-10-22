/*
 * FUN_10005db0 (76 B) - __thiscall. Scans an array of pointers (this[0],
 * count this[4]) calling a callback (loaded from 0x100210e0) for each
 * non-null entry until the callback returns 0; returns the matching index
 * or count-1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void* g_100210e0;   /* callback fn ptr at 0x100210e0 */

__declspec(naked) void __cdecl FUN_10005db0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        push    esi
        xor     esi, esi
        test    ebx, ebx
        push    edi
        mov     edi, ecx
        jz      L1
        mov     ebp, dword ptr [g_100210e0]
        cmp     word ptr [ebx], 0x0
        jz      L1
L2:
        cmp     esi, dword ptr [edi + 0x4]
        jnc     L1
        mov     eax, dword ptr [edi]
        mov     eax, dword ptr [eax + esi*4]
        test    eax, eax
        jz      L3
        push    eax
        push    ebx
        call    ebp
        add     esp, 0x8
        test    eax, eax
        jz      L4
L3:
        inc     esi
        __emit 0xEB  /* __emit: backward jmp rel-offset miscomputed by MSVC6 (EB E4 vs ref EB DE) */
        __emit 0xDE
L4:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
L1:
        mov     eax, dword ptr [edi + 0x4]
        pop     edi
        pop     esi
        pop     ebp
        dec     eax
        pop     ebx
        ret     0x4
    }
}
