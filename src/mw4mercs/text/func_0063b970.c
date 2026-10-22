/*
 * FUN_0063b970 (67 B) — __thiscall destructor.
 *
 * Sets vtable 0x78f174, tears down the sub-object at this+0x10 via
 * FUN_0041fd80/FUN_0041fcb0/FUN_0041fc90, then calls FUN_00415380().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_0063b970(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x10]
        mov     ecx, esi
        mov     dword ptr [edi], 0x78f174
        call    FUN_0041fd80
        test    eax, eax
        jz      L_skip
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_skip2
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
    L_skip2:
        mov     ecx, esi
        call    FUN_0041fcb0
    L_skip:
        mov     ecx, esi
        call    FUN_0041fc90
        mov     ecx, edi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
