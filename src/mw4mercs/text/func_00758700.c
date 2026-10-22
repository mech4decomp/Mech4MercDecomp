/*
 * FUN_00758700 (76 B) — __stdcall wrapper, RET 0xC (3 params).
 *
 * Calls a virtual method (vtable+0x28) on param_1 with 3 args, then
 * on failure (result < 0) calls FUN_00752860, FUN_0073E160 and
 * FUN_006FABF0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00752860(int a);
extern int __cdecl FUN_0073E160(int a, int b, int c, int d);
extern int __cdecl FUN_006FABF0(int a, int b, int c);

__declspec(naked) int __stdcall FUN_00758700(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0xC]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    ecx
        push    edi
        call    dword ptr [eax + 0x28]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    ebx
        call    FUN_00752860
        mov     edx, dword ptr [ebp + 0xC]
        push    eax
        push    edx
        push    edi
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7AEC40
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
        ret     0xC
    }
}
