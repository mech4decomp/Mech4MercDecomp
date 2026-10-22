/*
 * FUN_00758240 (108 B) - __stdcall wrapper (RET 0x14, 5 params).
 *
 * Calls a virtual method at [*param_1 + 0x50] with 5 args. If the result
 * is negative, formats an error via FUN_006fabf0 (with FUN_00752860 and
 * FUN_0073e160 helpers) and INT3s on failure. Returns the result.
 *
 * __stdcall, RET 0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00752860(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) int __stdcall FUN_00758240(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x10]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    edx
        push    ecx
        push    edi
        call    dword ptr [eax + 0x50]
        mov     esi, eax
        test    esi, esi
        jge     label_7582a3
        push    ebx
        call    FUN_00752860
        fld     dword ptr [ebp + 0x14]
        push    eax
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [ebp + 0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebp + 0xc]
        fstp    qword ptr [esp]
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae9cc
        call    FUN_006fabf0
        add     esp, 0x2c
        test    eax, eax
        jz      label_7582a3
        int     3
label_7582a3:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x14
    }
}
