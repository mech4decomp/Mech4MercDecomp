/*
 * FUN_0066ac20 (106 B) — __thiscall (this in ECX, RET 0xc).
 *
 * Allocates a 0x18-byte object via FUN_004084d0, initializes it with a
 * vtable pointer (0x796b24) and a value from the stack, then registers
 * it into a list at [this+0x10] via FUN_00416a90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7b8c10;    /* 0x007b8c10 */
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416a90(void);

__declspec(naked) void FUN_0066ac20(void)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    esi
        push    0x18
        mov     dword ptr [esp + 0xc], eax
        mov     dword ptr [esp + 0x10], ecx
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_72
        mov     edx, dword ptr [g_7b8c10]
        push    edx
        mov     ecx, esi
        call    FUN_00415180
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x8], 0x0
        mov     dword ptr [esi + 0xc], 0x0
        mov     dword ptr [esi], 0x796b24
        mov     dword ptr [esi + 0x14], eax
        jmp     L_74
    L_72:
        xor     esi, esi
    L_74:
        lea     ecx, [esp + 0x8]
        push    ecx
        push    esi
        lea     ecx, [ebx + 0x10]
        call    FUN_00416a90
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0xc
    }
}
