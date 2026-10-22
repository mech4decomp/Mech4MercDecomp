/*
 * FUN_004aa670 (53 B) — MLR subsystem destructor (__thiscall). Sets vtable
 * 0x770478, releases the sub-object at this+0xb0 via virtual call, frees
 * this+0xa8, then calls base dtor FUN_00494140.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(int);
extern void __cdecl FUN_00494140(void);

__declspec(naked) void FUN_004aa670(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xb0]
        test    ecx, ecx
        mov     dword ptr [esi], 0x770478
        jz      skip_vcall
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
skip_vcall:
        mov     eax, dword ptr [esi + 0xa8]
        test    eax, eax
        jz      skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 4
skip_free:
        mov     ecx, esi
        call    FUN_00494140
        pop     esi
        ret
    }
}
