/*
 * FUN_00741a50 (97 B) — Virtual dispatch wrapper. Calls the vtable
 * method at +0x9C of *param0 with 5 args; on negative result, builds
 * an error path calling FUN_0074D4D0 / FUN_0074D9B0 / FUN_0073E160 /
 * FUN_006FABF0 and traps (int 3) on failure.
 *
 * NOTE: Ghidra produced no disassembly; the full body was recovered
 * from the raw reference bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0074D4D0(void *a, void *b, void *c);
extern void __cdecl FUN_0074D9B0(void *a, void *b);
extern void __cdecl FUN_0073E160(void *a, void *b);
extern void __cdecl FUN_006FABF0(void *a, void *b, void *c);

__declspec(naked) void FUN_00741a50(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x18]
        push    edi
        push    ebx
        push    edx
        mov     edx, dword ptr [ebp + 0xC]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x9C]
        mov     esi, eax
        test    esi, esi
        jge     LAA8
        mov     eax, dword ptr [ebp + 0xC]
        push    edi
        push    ebx
        push    eax
        call    FUN_0074D4D0
        mov     ecx, dword ptr [ebp + 0x10]
        push    eax
        push    ecx
        call    FUN_0074D9B0
        push    eax
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x007a95a8
        call    FUN_006FABF0
        add     esp, 0x1C
        test    eax, eax
        jz      LAA8
        int     3
LAA8:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x14
    }
}
