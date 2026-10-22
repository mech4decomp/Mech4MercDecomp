/*
 * FUN_005b87c0 (43 B) — __fastcall (ECX = this).
 *
 * Sets vtable 0x786a14, frees [this+0x168] if non-null via FUN_004084e0,
 * then calls FUN_004d9db0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004084e0(void);
extern void __fastcall FUN_004d9db0(void);

__declspec(naked) void __fastcall FUN_005b87c0(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x786a14
        mov     eax, dword ptr [esi + 0x168]
        test    eax, eax
        mov     dword ptr [esp + 0x4], eax
        jz      L_87e1
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_87e1:
        mov     ecx, esi
        call    FUN_004d9db0
        pop     esi
        pop     ecx
        ret
    }
}
