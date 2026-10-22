/*
 * FUN_0065a840 (198 B) - ABL/record processing. Compares a "type" field
 * (param_2->[0x30]) against the object's type (obj->[0x170]->[0x30]); if
 * different, walks two int-array ranges (via FUN_005faef0 accessors) looking
 * for a matching element, then either records a 4-typed entry via
 * FUN_0065a7c0 or resolves a string via FUN_0063b190/FUN_0065a780 and records
 * that.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005c1720(void);
extern void __cdecl FUN_005faef0(void);
extern void __cdecl FUN_0065a7c0(void);
extern void __cdecl FUN_0063b190(void);
extern void __cdecl FUN_0065a780(void);

__declspec(naked) void FUN_0065a840(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx + 0x30]
        push    ebp
        mov     ebp, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ebp + 0x170]
        cmp     edx, dword ptr [eax + 0x30]
        push    esi
        push    edi
        jz      L_902
        push    ebx
        push    0x1
        mov     ecx, ebp
        call    FUN_005c1720
        mov     esi, dword ptr [ebp + 0x170]
        mov     ecx, esi
        call    FUN_005faef0
        mov     edi, dword ptr [eax + 0x4]
        mov     ecx, esi
        call    FUN_005faef0
        mov     ecx, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [eax]
        call    FUN_005faef0
        mov     ecx, dword ptr [esp + 0x18]
        mov     esi, dword ptr [eax + 0x4]
        call    FUN_005faef0
        mov     eax, dword ptr [eax]
        cmp     eax, esi
        jz      L_8b9
L_89b:
        cmp     ebx, edi
        mov     ecx, ebx
        jz      L_8ae
        mov     edx, dword ptr [eax]
L_8a3:
        cmp     edx, dword ptr [ecx]
        jz      L_8b7
        add     ecx, 0x4
        cmp     ecx, edi
        jnz     L_8a3
L_8ae:
        add     eax, 0x4
        cmp     eax, esi
        jnz     L_89b
        jmp     L_8b9
L_8b7:
        mov     esi, eax
L_8b9:
        mov     edi, dword ptr [esp + 0x18]
        mov     ecx, edi
        call    FUN_005faef0
        cmp     esi, dword ptr [eax + 0x4]
        pop     ebx
        jnz     L_8de
        mov     eax, 0x4
        push    edi
        push    eax
        push    ebp
        call    FUN_0065a7c0
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        ret
L_8de:
        mov     eax, dword ptr [esi]
        push    ebp
        push    eax
        call    FUN_0063b190
        add     esp, 0x4
        push    eax
        call    FUN_0065a780
        add     esp, 0x8
        test    eax, eax
        jz      L_902
        push    edi
        push    eax
        push    ebp
        call    FUN_0065a7c0
        add     esp, 0xc
L_902:
        pop     edi
        pop     esi
        pop     ebp
        ret
    }
}
