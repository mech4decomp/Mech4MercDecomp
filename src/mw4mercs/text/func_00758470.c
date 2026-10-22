/*
 * FUN_00758470 (84 B) — Wrapper around a virtual SetConeAngles call.
 *
 * Calls (*param_1)->vtable[0x34/4](param_1, param_2, param_3, param_4).
 * If the result < 0, formats an error message via FUN_006FABF0 and
 * traps (INT3) if the message was produced.
 *
 * __stdcall, RET 0x10 (four stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00752860(void *a);
extern int __cdecl FUN_0073e160(int a);
extern int __cdecl FUN_006fabf0(void);

__declspec(naked) int __stdcall FUN_00758470(void *param_1, void *param_2, void *param_3, void *param_4)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp + 0xc]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    ecx
        push    edx
        push    edi
        call    dword ptr [eax + 0x34]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    ebx
        call    FUN_00752860
        mov     ecx, dword ptr [ebp + 0xc]
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    ecx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aeb0c
        call    FUN_006fabf0
        add     esp, 0x1c
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
