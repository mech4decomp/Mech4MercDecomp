/*
 * FUN_004a4f30 (53 B) — MLR object destructor (__thiscall).
 * Sets vtable ptr 0x770368, releases a sub-object at +0xb0 (virtual
 * Release(1)), frees a buffer at +0xa8, then calls base dtor FUN_00494140.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00494140(void);

__declspec(naked) void FUN_004a4f30(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi+0xb0]
        test    ecx, ecx
        mov     dword ptr [esi], 0x770368
        jz      L1
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L1:
        mov     eax, dword ptr [esi+0xa8]
        test    eax, eax
        jz      L2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L2:
        mov     ecx, esi
        call    FUN_00494140
        pop     esi
        ret
    }
}
