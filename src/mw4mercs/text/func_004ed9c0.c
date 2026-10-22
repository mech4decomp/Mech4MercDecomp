/*
 * FUN_004ed9c0 (70 B) — __thiscall (ECX=this). MLR text-label
 * destructor: sets vtable 0x774928, releases two refcounted strings
 * (this+0x38, this+0x34), then calls base destructor FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004ed9c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x774928
        mov     eax, dword ptr [esi + 0x38]
        test    eax, eax
        jz      L1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     eax, dword ptr [esi + 0x34]
        test    eax, eax
        jz      L2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L2:
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
