/*
 * FUN_004a88e0 (53 B) — MLR ShardCloud destructor (__thiscall). Sets vtable
 * 0x770420, releases the 0xb0 sub-object via its virtual dtor, frees the
 * 0xa8 array via FUN_004084e0, then calls base dtor FUN_00494140.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00494140(void);

__declspec(naked) void FUN_004a88e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xb0]
        test    ecx, ecx
        mov     dword ptr [esi], 0x770420
        jz      L_4a88f9
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_4a88f9:
        mov     eax, dword ptr [esi + 0xa8]
        test    eax, eax
        jz      L_4a890c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4a890c:
        mov     ecx, esi
        call    FUN_00494140
        pop     esi
        ret
    }
}
