/*
 * FUN_0068aa90 (40 B) — __fastcall destructor (ECX = this).
 *
 * Sets vtable 0x798dd8, frees this->dword_0x34 if non-null,
 * then calls FUN_006b06d0(this). RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *param);
extern void __cdecl FUN_006b06d0(void);

__declspec(naked) void __fastcall FUN_0068aa90(void *this)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x798DD8
        mov     eax, dword ptr [esi + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x4], eax
        jz      L_skip
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov     ecx, esi
        call    FUN_006b06d0
        pop     esi
        pop     ecx
        ret
    }
}
