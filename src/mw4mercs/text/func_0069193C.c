/*
 * FUN_0069193C (85 B, +4 leading NOP pad) — __thiscall (1 stack arg, RET 4).
 * Destructor: sets vtable 0x798FB8, frees a linked list at [this+4] via
 * FUN_004084E0, and frees [this] if the arg's bit 0 is set. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084E0(void);

__declspec(naked) void FUN_0069193C(void)
{
    __asm {
        nop
        nop
        nop
        nop
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 4]
        test    eax, eax
        mov     dword ptr [edi], 0x798fb8
        je      loc_691974
        push    esi
loc_691951:
        test    eax, eax
        mov     esi, dword ptr [eax]
        je      loc_69196d
        mov     dword ptr [eax + 4], 0
        push    eax
        mov     dword ptr [eax], 0
        call    FUN_004084E0
        add     esp, 4
loc_69196d:
        test    esi, esi
        mov     eax, esi
        jne     loc_691951
        pop     esi
loc_691974:
        test    byte ptr [esp + 8], 1
        mov     dword ptr [edi + 4], 0
        je      loc_69198b
        push    edi
        call    FUN_004084E0
        add     esp, 4
loc_69198b:
        mov     eax, edi
        pop     edi
        ret     4
    }
}
