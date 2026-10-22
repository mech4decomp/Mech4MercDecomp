/*
 * FUN_007421B0 (76 B) — __stdcall wrapper, RET 0x14 (5 params).
 *
 * Calls a virtual method (vtable+0x3C) on param_1 with 5 args, then
 * on failure (result < 0 and != 0x8877015E) calls FUN_0073E160 and
 * FUN_006FABF0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073E160(int a);
extern int __cdecl FUN_006FABF0(int a, int b, int c);

__declspec(naked) int __stdcall FUN_007421B0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    esi
        push    edx
        mov     edx, dword ptr [ebp + 0x14]
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        mov     edx, dword ptr [ebp + 0xC]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x3C]
        mov     esi, eax
        test    esi, esi
        jge     done
        cmp     esi, 0x8877015E
        jz      done
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7A99E4
        call    FUN_006FABF0
        add     esp, 0xC
        test    eax, eax
        jz      done
        int     3
done:
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0x14
    }
}
