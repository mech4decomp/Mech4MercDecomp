/*
 * FUN_0049fbe0 (72 B) — MLR particle/shrapnel object destructor (__thiscall).
 * Sets vtable ptr 0x770280, releases a child object via its vtable, frees
 * two buffers, then calls base-class destructor FUN_00494140.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_00494140(void);

__declspec(naked) void FUN_0049fbe0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi+0xcc]
        test    ecx, ecx
        mov     dword ptr [esi], 0x770280
        jz      L1
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L1:
        mov     eax, dword ptr [esi+0xc4]
        test    eax, eax
        jz      L2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L2:
        mov     eax, dword ptr [esi+0xbc]
        test    eax, eax
        jz      L3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L3:
        mov     ecx, esi
        call    FUN_00494140
        pop     esi
        ret
    }
}
