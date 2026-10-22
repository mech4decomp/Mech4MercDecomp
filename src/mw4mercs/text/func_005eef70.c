/*
 * FUN_005eef70 (87 B) — __thiscall (ECX = this), plain RET.
 *
 * Destructor: sets vtable, calls FUN_0041fc90 on this+0x1a4, then
 * conditionally frees two string buffers (this+0x18c, this+0x188) via
 * FUN_004084e0, and calls FUN_005f07e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fc90(void *a);
extern void __stdcall FUN_004084e0(void *a);
extern void __stdcall FUN_005f07e0(void);

__declspec(naked) void __stdcall FUN_005eef70(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x1a4]
        mov     dword ptr [esi], 0x789ec4
        call    FUN_0041fc90
        mov     eax, dword ptr [esi + 0x18c]
        test    eax, eax
        jz      L1
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     eax, dword ptr [esi + 0x188]
        test    eax, eax
        jz      L2
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L2:
        mov     ecx, esi
        call    FUN_005f07e0
        pop     esi
        ret
    }
}
