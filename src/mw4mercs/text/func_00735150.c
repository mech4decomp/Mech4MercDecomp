/*
 * FUN_00735150 (86 B) — Wrapper around a virtual SetDisplayMode call.
 *
 * Calls (*param_1)->vtable[0x54/4](param_1, param_2, param_3, param_4,
 * param_5, param_6). If the result < 0, formats an error message via
 * FUN_006FABF0 and traps (INT3) if the message was produced.
 *
 * __stdcall, RET 0x18 (six stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073e160(int a);
extern int __cdecl FUN_006fabf0(void);

__declspec(naked) int __stdcall FUN_00735150(void *param_1, void *param_2, void *param_3, void *param_4, void *param_5, void *param_6)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x1c]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x18]
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edi
        push    ebx
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x54]
        mov     esi, eax
        test    esi, esi
        jge     done
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        push    eax
        push    ecx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a62dc
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
        ret     0x18
    }
}
