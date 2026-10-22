/*
 * FUN_007580C0 (150 B) — __cdecl, RET 0x20 (8 stack params).
 *
 * Calls virtual method at (*param_1)+0x34 with 8 args. If the result < 0,
 * formats a "FAILED ... SetOrientation" message via FUN_006FABF0 and, if
 * that returns nonzero, traps with INT 3. Returns the virtual call result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00752860(void);
extern void FUN_0073e160(void);
extern void FUN_006fabf0(void);

__declspec(naked) void func_007580c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x20]
        mov     edx, dword ptr [ebp + 0x1c]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x24]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    ecx
        mov     ecx, dword ptr [ebp + 0x18]
        push    edx
        mov     edx, dword ptr [ebp + 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x10]
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    edi
        call    dword ptr [eax + 0x34]
        mov     esi, eax
        test    esi, esi
        jge     L_814d
        push    ebx
        call    FUN_00752860
        fld     dword ptr [ebp + 0x20]
        push    eax
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [ebp + 0x1c]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        sub     esp, 0x8
        fld     dword ptr [ebp + 0x18]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x10]
        sub     esp, 0x8
        fld     dword ptr [ebp + 0x14]
        fstp    qword ptr [esp + 0x10]
        fld     dword ptr [ebp + 0x10]
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [ebp + 0xc]
        fstp    qword ptr [esp]
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae908
        call    FUN_006fabf0
        add     esp, 0x44
        test    eax, eax
        jz      L_814d
        int     3
L_814d:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x20
    }
}
