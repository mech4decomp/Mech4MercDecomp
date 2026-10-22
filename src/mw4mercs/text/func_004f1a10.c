/*
 * FUN_004f1a10 (147 B) - Adept::ComponentWeb update/teardown (__thiscall).
 * Walks list at [this+0x30] calling virtual slot 0xc on each node; then, if
 * the sub-object at [this+0x38] (vtable 0x774f44) reports not-done via its
 * slot 0x14, iterates a list from FUN_00416d00 calling slot 0xc and clearing
 * a flag bit on each, then tears down.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416d00(void);
extern void __cdecl FUN_00416d40(void);
extern void __cdecl FUN_00416c80(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_004f1a10(void)
{
    __asm {
        sub     esp, 0x14
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x30]
        test    eax, eax
        jz      L1a34
        mov     esi, eax
L1a20:
        test    esi, esi
        jz      L1a34
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L1a34
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0xc]
        jmp     L1a20
L1a34:
        mov     edx, dword ptr [edi + 0x38]
        lea     esi, [edi + 0x38]
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
        test    al, al
        jnz     L1a9d
        push    esi
        lea     ecx, [esp + 0xc]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x8], 0x774f44
        call    FUN_00416d00
        mov     esi, eax
        test    esi, esi
        jz      L1a94
        mov     edi, 0xfffffff7
L1a69:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        and     dword ptr [esi + 0x1c], edi
        lea     ecx, [esp + 0x8]
        call    FUN_00416d40
        lea     ecx, [esp + 0x8]
        call    FUN_00416c80
        lea     ecx, [esp + 0x8]
        call    FUN_00416d00
        mov     esi, eax
        test    esi, esi
        __emit 0x75   /* __emit: MSVC6 miscomputes backward JNZ rel by 4 (call-relocs between branch and target); ref = 75 D5 */
        __emit 0xD5
L1a94:
        lea     ecx, [esp + 0x8]
        call    FUN_00416c60
L1a9d:
        pop     edi
        pop     esi
        add     esp, 0x14
        ret
    }
}
