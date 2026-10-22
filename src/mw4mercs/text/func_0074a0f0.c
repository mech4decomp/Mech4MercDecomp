/*
 * FUN_0074A0F0 (90 B) — Wrapper around a vtable method (slot +0x14) with
 * error logging on failure.
 *
 * __stdcall, 8 stack params, RET 0x20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *, ...);

__declspec(naked) int __stdcall FUN_0074A0F0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x24]
        mov     edx, dword ptr [ebp + 0x20]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x1c]
        push    edx
        mov     edx, dword ptr [ebp + 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x10]
        push    ebx
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    edi
        call    dword ptr [eax + 0x14]
        mov     esi, eax
        test    esi, esi
        jge     loc_74a141
        mov     eax, dword ptr [ebp + 0x14]
        push    eax
        push    ebx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa5ac
        call    FUN_006fabf0
        add     esp, 0x18
        test    eax, eax
        jz      loc_74a141
        int     3
loc_74a141:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x20
    }
}
