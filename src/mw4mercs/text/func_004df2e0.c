/*
 * FUN_004df2e0 (102 B) — MLR/Adept mapping-group dispatch wrapper.
 * __thiscall, RET 0x2c (11 params). Forwards the parameter block through
 * FUN_004de650 (2 args), FUN_004de390 (3 args), and FUN_004df350 (11 args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004de650(void);
extern void __cdecl FUN_004de390(void);
extern void __cdecl FUN_004df350(void);

__declspec(naked) void FUN_004df2e0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        call    FUN_004de650
        mov     edi, dword ptr [esp + 0x28]
        mov     ebx, dword ptr [esp + 0x30]
        mov     ebp, dword ptr [esp + 0x2c]
        push    edi
        push    ebx
        push    ebp
        mov     ecx, esi
        call    FUN_004de390
        mov     edx, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x34]
        push    edx
        mov     edx, dword ptr [esp + 0x28]
        push    eax
        mov     eax, dword ptr [esp + 0x28]
        push    ecx
        mov     ecx, dword ptr [esp + 0x28]
        push    ebx
        push    ebp
        push    edi
        push    edx
        mov     edx, dword ptr [esp + 0x34]
        push    eax
        mov     eax, dword ptr [esp + 0x34]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004df350
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x2c
    }
}
