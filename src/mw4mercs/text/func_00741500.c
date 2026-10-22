/*
 * FUN_00741500 (74 B) — wrapper: calls a virtual method (vtable+0x40) with
 * (this, param_2, param_3, param_4); on failure logs
 * "FAILED (0x%x - %s) - GetGroupName(%d, 0x%x, 0x%x)" and __debugbreak().
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073e160(int param);
extern int __cdecl FUN_006fabf0(const char *fmt, ...);

__declspec(naked) int __stdcall FUN_00741500(void *param_1, void *param_2, void *param_3, void *param_4)
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
        call    dword ptr [ecx + 0x40]
        mov     esi, eax
        test    esi, esi
        jge     done
        mov     eax, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a9288
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
        pop     ebp
        ret     0x10
    }
}
