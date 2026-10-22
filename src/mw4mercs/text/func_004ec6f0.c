/*
 * FUN_004ec6f0 (104 B) — __thiscall destructor-ish teardown for an MLR/Adept
 * object. Sets vtable ptr 0x774798, walks a linked list clearing a field,
 * then calls a series of member destructors.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00725740(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004ec6f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x9c]
        xor     edx, edx
        cmp     eax, edx
        mov     dword ptr [esi], 0x774798
        jle     L_726
    L_70b:
        mov     eax, dword ptr [esi+0x8c]
        cmp     eax, edx
        jz      L_71d
        mov     ecx, dword ptr [eax]
        cmp     ecx, edx
        mov     eax, dword ptr [eax+4]
        jz      L_71d
        mov     dword ptr [ecx+0x10], edx
        /* __emit: MSVC6 miscomputes backward jmp rel-offset (off-by-6) here */
        __emit 0xEB
        __emit 0xEE
    L_71d:
        lea     eax, [esi+0x7c]
        push    eax
        call    FUN_00725740
    L_726:
        lea     ecx, [esi+0x94]
        call    FUN_00417980
        lea     ecx, [esi+0x8c]
        call    FUN_00417980
        lea     ecx, [esi+0x84]
        call    FUN_00417980
        lea     ecx, [esi+0x10]
        call    FUN_004d21c0
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
