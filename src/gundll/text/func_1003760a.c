/*
 * FUN_1003760a (84 B) - __cdecl.
 * Installs an SEH frame (handler 0x1003765e), calls FUN_100398c0(arg3,
 * arg2, arg5), restores the frame, returns the call result.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100398c0(void);   /* rel32 call */

__declspec(naked) void FUN_1003760a(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        mov     eax, dword ptr [ebp + 0xc]
        and     dword ptr [ebp - 0x14], 0
        mov     ecx, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 0xc], eax
        mov     eax, dword ptr [ebp + 0x14]
        mov     dword ptr [ebp - 0x10], 0x1003765e
        inc     eax
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, dword ptr fs:[0]
        mov     dword ptr [ebp - 0x14], eax
        __emit 0x8D   /* __emit: lea eax,[ebp-0x14] ref uses disp32 (8D 85 EC FF FF FF); MSVC6 emits disp8 (8D 45 EC) */
        __emit 0x85
        __emit 0xEC
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        mov     dword ptr fs:[0], eax
        push    dword ptr [ebp + 0x18]
        push    ecx
        push    dword ptr [ebp + 0x10]
        call    FUN_100398c0
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 0x14]
        mov     dword ptr fs:[0], eax
        mov     eax, ecx
        leave
        ret
    }
}
