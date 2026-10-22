/*
 * FUN_10039831 (86 B) - __cdecl.
 * Installs an SEH frame (handler 0x1003eb9c, scope 0x1004b680). If arg1
 * and arg1->[0x1c]->[4] are nonzero, calls FUN_10037556(arg1->[0x18],
 * arg1->[0x1c]->[4]). Restores the frame and returns.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10037556(void);   /* rel32 call */

__declspec(naked) void FUN_10039831(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x1004b680
        push    0x1003eb9c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        mov     eax, dword ptr [ebp + 0x8]
        test    eax, eax
        jz      L_39878
        mov     ecx, dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [ecx + 0x4]
        test    ecx, ecx
        jz      L_39878
        and     dword ptr [ebp - 0x4], 0
        push    ecx
        push    dword ptr [eax + 0x18]
        call    FUN_10037556
        or      dword ptr [ebp - 0x4], -1
    L_39878:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
