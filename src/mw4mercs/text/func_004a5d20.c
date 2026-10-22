/*
 * FUN_004a5d20 (113 B) — MLR object destructor (__thiscall).
 * Sets vtable 0x770394, frees 5 buffers, then calls base dtor FUN_004a93f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004a93f0(void);

__declspec(naked) void FUN_004a5d20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x770394
        mov     eax, dword ptr [esi+0x368]
        test    eax, eax
        jz      L1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     eax, dword ptr [esi+0x348]
        test    eax, eax
        jz      L2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L2:
        mov     eax, dword ptr [esi+0x328]
        test    eax, eax
        jz      L3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L3:
        mov     eax, dword ptr [esi+0x308]
        test    eax, eax
        jz      L4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L4:
        mov     eax, dword ptr [esi+0x2bc]
        test    eax, eax
        jz      L5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L5:
        mov     ecx, esi
        call    FUN_004a93f0
        pop     esi
        ret
    }
}
