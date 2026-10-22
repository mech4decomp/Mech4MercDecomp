/*
 * FUN_0048f9e0 (83 B) — MLR image-instance fetch/alloc dispatcher
 * (__thiscall, RET 0x10). Optionally routes through a callback at
 * [this+0x10038], then calls FUN_00490780 and FUN_0048f830.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00490780(void);
extern void __cdecl FUN_0048f830(void);

__declspec(naked) void FUN_0048f9e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10038]
        test    eax, eax
        jnz     L_a02
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0xc]
        push    eax
        mov     eax, dword ptr [esp + 0xc]
        push    ecx
        push    edx
        jmp     L_a1b
L_a02:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        call    eax
        add     esp, 0x4
L_a1b:
        mov     ecx, dword ptr [esi + 0x10034]
        push    eax
        call    FUN_00490780
        push    eax
        mov     ecx, esi
        call    FUN_0048f830
        pop     esi
        ret     0x10
    }
}
