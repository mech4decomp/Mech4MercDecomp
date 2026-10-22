/*
 * FUN_004d61c0 (98 B) — __thiscall Adept::EntityManager dtor. Resets
 * vtables and tears down nested sub-objects (virtual call at
 * this->field4c->vtable+8, then FUN_00416320 / FUN_004155f0 /
 * FUN_00417980 / FUN_0041ef60 / FUN_00415380).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416320(void);
extern void __cdecl FUN_004155f0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004d61c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x4c]
        push    edi
        lea     edi, [esi+0x4c]
        mov     ecx, edi
        mov     dword ptr [esi], 0x772c9c
        call    dword ptr [eax+8]
        lea     ecx, [esi+0x78]
        mov     dword ptr [ecx], 0x772ce4
        call    FUN_00416320
        lea     ecx, [esi+0x68]
        call    FUN_004155f0
        lea     ecx, [esi+0x60]
        call    FUN_00417980
        mov     ecx, edi
        mov     dword ptr [edi], 0x772d38
        call    FUN_00416320
        lea     ecx, [esi+0x24]
        call    FUN_0041ef60
        lea     ecx, [esi+0x1c]
        call    FUN_00417980
        lea     ecx, [esi+0x14]
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
