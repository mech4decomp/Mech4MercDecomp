/*
 * FUN_004a6330 (53 B) — MLR: object destructor (__thiscall). Sets vtable
 * 0x7703a8, releases the 0xb0 sub-object (virtual call), frees the 0xa8
 * buffer via FUN_004084e0, and calls base destructor FUN_00494140.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(int p);
extern void __cdecl FUN_00494140(void);

__declspec(naked) void FUN_004a6330(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xb0]
        test    ecx, ecx
        mov     dword ptr [esi], 0x7703a8
        jz      L6349
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L6349:
        mov     eax, dword ptr [esi + 0xa8]
        test    eax, eax
        jz      L635c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L635c:
        mov     ecx, esi
        call    FUN_00494140
        pop     esi
        ret
    }
}
