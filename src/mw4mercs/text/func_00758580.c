/*
 * FUN_00758580 (87 B) — __stdcall, RET 0x10 (4 params).
 *
 * Dispatches a virtual call (vtable+0x14) with 4 args; if the result is
 * negative, formats an error string via FUN_006fabf0 and asserts (INT3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00750720(void);
extern void __cdecl FUN_00750700(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void __stdcall FUN_00758580(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x10]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ecx
        push    edx
        push    ebx
        push    edi
        call    dword ptr [eax + 0x14]
        mov     esi, eax
        test    esi, esi
        jge     done
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        push    ebx
        call    FUN_00750720
        push    eax
        push    ebx
        call    FUN_00750700
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aebc0
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
