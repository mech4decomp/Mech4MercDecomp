/*
 * FUN_00741FE0 (90 B) — Wrapper around a vtable method (slot +0x20) with
 * error logging on failure (skipping two known benign HRESULTs).
 *
 * __stdcall, 4 stack params, RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *, ...);

__declspec(naked) int __stdcall FUN_00741FE0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x14]
        push    edi
        push    ebx
        push    edx
        push    eax
        call    dword ptr [ecx + 0x20]
        mov     esi, eax
        test    esi, esi
        jge     loc_742031
        cmp     esi, 0x8877042e
        jz      loc_742031
        cmp     esi, 0x8877001e
        jz      loc_742031
        mov     eax, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a98c0
        call    FUN_006fabf0
        add     esp, 0x18
        test    eax, eax
        jz      loc_742031
        int     3
loc_742031:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x10
    }
}
