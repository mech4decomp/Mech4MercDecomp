/*
 * FUN_00758380 (81 B) — small wrapper. Calls virtual method [vtable+0x40]
 * on this (EDI = param1) with 2 args (param2, param3). If the result (ESI)
 * is negative, formats an error string (passing param2 as a double via FPU)
 * via FUN_00752860 / FUN_0073E160 / FUN_006FABF0 and asserts (INT3) on
 * failure. Returns the virtual call result.
 *
 * __stdcall, RET 0xC (3 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00752860(void);
extern void __cdecl FUN_0073E160(void);
extern void __cdecl FUN_006FABF0(void);

__declspec(naked) void __stdcall FUN_00758380(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0xC]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    ecx
        push    edi
        call    dword ptr [eax + 0x40]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    ebx
        call    FUN_00752860
        fld     dword ptr [ebp + 0xC]
        push    eax
        sub     esp, 8
        fstp    qword ptr [esp]
        push    edi
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7AEA74
        call    FUN_006FABF0
        add     esp, 0x1C
        test    eax, eax
        jz      done
        int     3
done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xC
    }
}
