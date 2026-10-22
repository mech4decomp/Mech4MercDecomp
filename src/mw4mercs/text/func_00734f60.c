/*
 * FUN_00734F60 (76 B) — __stdcall wrapper, RET 0x10 (4 params).
 *
 * Calls a virtual method (vtable+0x5C) on param_1 with 4 args, then
 * on failure (result < 0) calls FUN_00751480, FUN_0073E160 and
 * FUN_006FABF0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00751480(int a);
extern int __cdecl FUN_0073E160(int a, int b, int c, int d);
extern int __cdecl FUN_006FABF0(int a, int b, int c);

__declspec(naked) int __stdcall FUN_00734F60(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x10]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xC]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ecx
        push    edx
        push    ebx
        push    edi
        call    dword ptr [eax + 0x5C]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    ebx
        call    FUN_00751480
        push    eax
        push    edi
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7A61AC
        call    FUN_006FABF0
        add     esp, 0x14
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
