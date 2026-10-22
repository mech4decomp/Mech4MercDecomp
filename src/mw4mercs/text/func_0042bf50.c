/*
 * FUN_0042bf50 (37 B) — __thiscall constructor: sets vtable ptr,
 * frees a member at +0xb4 if non-null, then calls base ctor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_00435e40(void);

__declspec(naked) void FUN_0042bf50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x76e13c
        mov     eax, dword ptr [esi+0xb4]
        test    eax, eax
        jz      L1
        push    eax
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     ecx, esi
        call    FUN_00435e40
        pop     esi
        ret
    }
}
