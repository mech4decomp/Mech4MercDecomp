/*
 * FUN_00659E40 (103 B) — global list teardown.
 *
 * Iterates a global array of 3-dword records, calls cleanup on each, frees
 * the buffers, and clears the global pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_80da64;
extern void __cdecl FUN_0065a5b0(int a, int b);
extern void __cdecl FUN_005da4b0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00659e40(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [g_80da64]
        test    ebx, ebx
        jz      L_9b
        push    ebp
        mov     ebp, dword ptr [ebx]
        push    esi
        push    edi
        mov     edi, dword ptr [ebx + 0x4]
        mov     esi, ebp
        cmp     esi, edi
        jz      L_76
    L_59:
        mov     eax, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi]
        push    eax
        push    ecx
        call    FUN_0065a5b0
        add     esp, 0x8
        mov     ecx, esi
        call    FUN_005da4b0
        add     esi, 0xc
        cmp     esi, edi
        jnz     L_59
    L_76:
        test    ebp, ebp
        jz      L_83
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
    L_83:
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_80da64], 0x0
        pop     ebx
        ret
    L_9b:
        mov     dword ptr [g_80da64], 0x0
        pop     ebx
        ret
    }
}
