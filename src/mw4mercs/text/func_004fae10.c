/*
 * FUN_004fae10 (187 B) — Adept::Mover motion-state update (__thiscall,
 * RET 0x8, 2 params). Copies motion state from +0xd8+0x80 into sub-objects
 * +0x168/+0x174, and if ExecutionState (+0xe0->+0x14) == 5, copies 0xc
 * dwords from +0xd8+0x50 into +0xf4, stores params at +0xec/+0xf0, and
 * initializes +0x1e0/+0x1f8. Finally calls FUN_004dae60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_00767430(void);
extern void __cdecl FUN_004dae60(void);

__declspec(naked) void FUN_004fae10(void)
{
    __asm {
        sub     esp, 0x30
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0xd8]
        push    ebp
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_004206b0
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ebp, [ebx + 0x198]
        push    ebp
        lea     ecx, [ebx + 0x168]
        call    FUN_0041c680
        lea     edx, [esp + 0x8]
        push    edx
        lea     eax, [ebx + 0x1a4]
        push    eax
        lea     ecx, [ebx + 0x174]
        call    FUN_0041c680
        mov     ecx, dword ptr [ebx + 0xe0]
        cmp     dword ptr [ecx + 0x14], 0x5
        jnz     LAEB2
        mov     edx, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [esp + 0x40]
        push    esi
        mov     esi, dword ptr [ebx + 0xd8]
        push    edi
        add     esi, 0x50
        lea     edi, [ebx + 0xf4]
        mov     ecx, 0xc
        rep     movsd
        mov     dword ptr [ebx + 0xec], edx
        push    ebp
        lea     ecx, [ebx + 0x1e0]
        mov     dword ptr [ebx + 0xf0], eax
        call    FUN_00767430
        lea     ecx, [ebx + 0x1b0]
        push    ecx
        lea     ecx, [ebx + 0x1f8]
        call    FUN_00767430
        pop     edi
        pop     esi
LAEB2:
        mov     edx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [esp + 0x3c]
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_004dae60
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret     0x8
    }
}
