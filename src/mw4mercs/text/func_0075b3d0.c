/*
 * FUN_0075B3D0 (85 B) — Wrapper around a virtual GetSurface call.
 *
 * Calls (*param_1)->vtable[0x20/4](param_1, param_2, param_3). If the
 * result < 0, formats an error message via FUN_006FABF0 (using a local
 * buffer filled by FUN_00750300) and traps (INT3) if the message was
 * produced.
 *
 * __stdcall, RET 0xC (three stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00750300(void *a, void *b);
extern int __cdecl FUN_0073e160(int a);
extern int __cdecl FUN_006fabf0(void);

__declspec(naked) int __stdcall FUN_0075B3D0(void *param_1, void *param_2, void *param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        mov     ecx, dword ptr [ebp + 0xc]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    ecx
        push    edi
        call    dword ptr [eax + 0x20]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    ebx
        lea     edx, [ebp - 0x20]
        push    edx
        call    FUN_00750300
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af574
        call    FUN_006fabf0
        add     esp, 0x18
        test    eax, eax
        jz      done
        int     3
done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
