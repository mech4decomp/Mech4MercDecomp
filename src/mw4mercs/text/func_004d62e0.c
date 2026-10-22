/*
 * FUN_004d62e0 (91 B) — __thiscall. Looks up param_1 in this->field4c via
 * FUN_004164b0; on hit, builds a temporary 12-byte object (vtable
 * 0x772d80) around the found entry and returns its first field via
 * FUN_00417ad0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004164b0(void);
extern void __cdecl FUN_00417ad0(void);

__declspec(naked) void FUN_004d62e0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        sub     esp, 0xc
        push    eax
        add     ecx, 0x4c
        call    FUN_004164b0
        test    eax, eax
        jnz     L_62fa
        add     esp, 0xc
        ret     4
L_62fa:
        mov     ecx, dword ptr [eax+0x10]
        add     eax, 0x10
        test    ecx, ecx
        jnz     L_630c
        xor     eax, eax
        add     esp, 0xc
        ret     4
L_630c:
        mov     dword ptr [esp+4], eax
        mov     eax, dword ptr [eax]
        test    eax, eax
        push    esi
        mov     dword ptr [esp+0xc], eax
        mov     dword ptr [esp+4], 0x772d80
        jz      L_6327
        mov     esi, dword ptr [eax]
        jmp     L_6329
L_6327:
        xor     esi, esi
L_6329:
        lea     ecx, [esp+4]
        call    FUN_00417ad0
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
