/*
 * FUN_00741C30 (77 B) — __stdcall (RET 0x10, 4 params). Calls a virtual
 * method (vtable+0xA4) on param_1 with the 3 other params. If the result
 * is negative, formats a "FAILED (0x%x - %s) - SetGroupConnectionSettings(%d, %d, 0x%x)"
 * message via FUN_006fabf0 and traps (int 3) if the message is non-null.
 * Returns the virtual call result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0073e160(int v);
extern int  __cdecl FUN_006fabf0(const char *fmt, ...);

__declspec(naked) int __stdcall FUN_00741C30(void *param_1, void *param_2,
                                             void *param_3, void *param_4)
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
        call    dword ptr [ecx + 0xa4]
        mov     esi, eax
        test    esi, esi
        jge     label_741c74
        mov     eax, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a9670
        call    FUN_006fabf0
        add     esp, 0x18
        test    eax, eax
        jz      label_741c74
        int     3
    label_741c74:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x10
    }
}
