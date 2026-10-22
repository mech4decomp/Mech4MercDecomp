/*
 * FUN_00741ed0 (98 B) — Virtual dispatch wrapper. Calls the vtable
 * method at +0x10 of *param0 with 7 args; on negative result, builds
 * an error path calling FUN_0073E160 / FUN_006FABF0 and traps
 * (int 3) on failure.
 *
 * NOTE: Ghidra produced no disassembly; the full body was recovered
 * from the raw reference bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0073E160(void *a, void *b);
extern void __cdecl FUN_006FABF0(void *a, void *b, void *c);

__declspec(naked) void FUN_00741ed0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [ebp + 8]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x1C]
        mov     ecx, dword ptr [eax]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x20]
        push    edi
        push    ebx
        push    edx
        mov     edx, dword ptr [ebp + 0x14]
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        mov     edx, dword ptr [ebp + 0xC]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        test    esi, esi
        jge     L1F29
        mov     eax, dword ptr [ebp + 0x18]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x10]
        push    edi
        push    ebx
        push    eax
        mov     eax, dword ptr [ebp + 0xC]
        push    ecx
        push    edx
        push    eax
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x007a9810
        call    FUN_006FABF0
        add     esp, 0x24
        test    eax, eax
        jz      L1F29
        int     3
L1F29:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x1C
    }
}
