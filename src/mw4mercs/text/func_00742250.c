/*
 * FUN_00742250 (74 B) — __stdcall wrapper, RET 0x10 (4 params).
 *
 * Calls a virtual method (vtable+0x34) on param_1 with 4 args, then
 * on failure (result < 0) calls FUN_0073E160 and FUN_006FABF0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073E160(int a, int b, int c, int d);
extern int __cdecl FUN_006FABF0(int a, int b, int c);

__declspec(naked) int __stdcall FUN_00742250(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0xC]
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
        call    dword ptr [ecx + 0x34]
        mov     esi, eax
        test    esi, esi
        jge     done
        mov     eax, dword ptr [ebp + 0xC]
        push    edi
        push    ebx
        push    eax
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7A9A48
        call    FUN_006FABF0
        add     esp, 0x18
        test    eax, eax
        jz      done
        int     3
done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x10
    }
}
