/*
 * FUN_00741B30 (135 B) — __stdcall, RET 0x28 (10 params).
 *
 * Calls a virtual method (vtable+0xc4) with all 10 params. On failure
 * (negative, not 0x8000000a), formats an error message via
 * FUN_006fabf0 and triggers INT3 if it returns nonzero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0074cb60(void);
extern int __cdecl FUN_0073e160(int a, int b);
extern int __cdecl FUN_006fabf0(void *fmt, int a, int b);

__declspec(naked) void __stdcall FUN_00741B30(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x24]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x28]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x2c]
        mov     eax, dword ptr [ebp + 0x8]
        push    edi
        mov     ecx, dword ptr [eax]
        push    ebx
        push    edx
        mov     edx, dword ptr [ebp + 0x20]
        push    edx
        mov     edx, dword ptr [ebp + 0x1c]
        push    edx
        mov     edx, dword ptr [ebp + 0x18]
        push    edx
        mov     edx, dword ptr [ebp + 0x14]
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0xc4]
        mov     esi, eax
        test    esi, esi
        jge     L1
        cmp     esi, 0x8000000a
        jz      L1
        mov     eax, dword ptr [ebp + 0x24]
        mov     ecx, dword ptr [ebp + 0x20]
        mov     edx, dword ptr [ebp + 0x1c]
        push    edi
        push    ebx
        push    eax
        mov     eax, dword ptr [ebp + 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x10]
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    eax
        push    ecx
        push    edx
        call    FUN_0074cb60
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a962c
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        jz      L1
        int     3
L1:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x28
    }
}
