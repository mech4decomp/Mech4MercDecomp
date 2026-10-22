/*
 * FUN_004ece20 (57 B) — __thiscall destructor. Sets vtable 0x77487c,
 * calls a virtual method on the sub-object at +0x18 (and another if it
 * returns 0), then calls FUN_004169c0 / FUN_00417980 / FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004ece20(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi+0x18]
        lea     esi, [edi+0x18]
        mov     ecx, esi
        mov     dword ptr [edi], 0x77487c
        call    dword ptr [eax+0x14]
        test    al, al
        jnz     L_40
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+8]
    L_40:
        mov     ecx, esi
        call    FUN_004169c0
        lea     ecx, [edi+0x10]
        call    FUN_00417980
        mov     ecx, edi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
