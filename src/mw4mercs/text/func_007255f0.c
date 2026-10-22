/*
 * FUN_007255f0 (99 B per CSV; actual body 104 B incl. shared epilogue
 * at 0x725653) — Object factory. If param2 (esi) is 0, logs an error
 * via FUN_006FAB90 and traps on failure. Otherwise allocates via
 * FUN_004084C0([0x008aadc8], 0xF0), and on success calls FUN_00725AE0
 * and stores the result to *param0; on allocation failure stores 0.
 *
 * NOTE: Ghidra produced no disassembly; the full body was recovered
 * from the raw reference bytes. The CSV size (99) omits the shared
 * epilogue at 0x725653, which is included here so the jz at 0x72560F
 * can target it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_8aadc8;   /* 0x008aadc8 allocator/context ptr */

extern void __cdecl FUN_006FAB90(void *a, void *b);
extern void *__cdecl FUN_004084C0(void *ctx, unsigned int size);
extern void *__cdecl FUN_00725AE0(void *this_, void *p1, void *p2, void *p3);

__declspec(naked) void FUN_007255f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 0x10]
        test    esi, esi
        jnz     L617
        push    0x007a5500
        push    0x007a54b8
        call    FUN_006FAB90
        add     esp, 8
        test    eax, eax
        jz      L653
        int     3
        pop     esi
        pop     ebp
        ret     0x14
L617:
        mov     eax, dword ptr [g_8aadc8]
        push    eax
        push    0xF0
        call    FUN_004084C0
        add     esp, 8
        test    eax, eax
        jz      L64C
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp + 0xC]
        push    edx
        push    esi
        push    ecx
        mov     ecx, eax
        call    FUN_00725AE0
        mov     edx, dword ptr [ebp + 8]
        mov     dword ptr [edx], eax
        pop     esi
        pop     ebp
        ret     0x14
L64C:
        mov     edx, dword ptr [ebp + 8]
        xor     eax, eax
        mov     dword ptr [edx], eax
L653:
        pop     esi
        pop     ebp
        ret     0x14
    }
}
