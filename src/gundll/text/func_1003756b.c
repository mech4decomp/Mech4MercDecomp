/*
 * FUN_1003756b (79 B) - __stdcall, RET 0x8. Installs an SEH frame with
 * handler 0x10037593, calls FUN_100468b4, then tears the frame down.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100468b4(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1003756b(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     eax, dword ptr fs:[0]
        mov     dword ptr [ebp - 8], eax
        mov     dword ptr [ebp - 4], 0x10037593
        push    0
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp - 4]
        push    dword ptr [ebp + 8]
        call    FUN_100468b4
L_7593:
        mov     eax, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [eax + 4]
        and     al, 0xfd
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [ecx + 4], eax
        mov     eax, dword ptr fs:[0]
        mov     ebx, dword ptr [ebp - 8]
        mov     dword ptr [ebx], eax
        mov     dword ptr fs:[0], ebx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret     8
    }
}
