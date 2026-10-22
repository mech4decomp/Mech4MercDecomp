/*
 * FUN_006308B0 (75 B) — Destructor: vtable setup + sub-object teardown.
 *
 * __fastcall (ECX = this). Sets *this to vtable 0x78d788, then tears
 * down two sub-objects (this+0x10, this+0x18) and calls FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void __fastcall FUN_006308b0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x10]
        mov     ecx, esi
        mov     dword ptr [edi], 0x78d788
        call    FUN_0041fd80
        test    eax, eax
        jz      l_skip
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_skip2
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
    l_skip2:
        mov     ecx, esi
        call    FUN_0041fcb0
    l_skip:
        lea     ecx, [edi + 0x18]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_0041fc90
        mov     ecx, edi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
