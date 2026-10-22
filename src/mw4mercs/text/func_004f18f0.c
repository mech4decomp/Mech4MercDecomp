/*
 * FUN_004f18f0 (121 B) - Adept::ComponentWeb destructor/teardown (__thiscall).
 * Walks two linked lists at [this+0x18] and [this+0x20], invoking virtual
 * methods (slot 0 with arg 1; slot 0/2 with arg 1 on the second list), then
 * tears down sub-objects at +0x38/+0x30/+0x28/+0x20/+0x18 and the base.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004f18f0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        mov     esi, dword ptr [ebx + 0x18]
        push    edi
        test    esi, esi
        jz      L190e
L18f9:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L190e
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        __emit 0xEB   /* __emit: MSVC6 miscomputes backward JMP rel by 4; ref = EB EB */
        __emit 0xEB
L190e:
        mov     edi, dword ptr [ebx + 0x20]
        lea     ebp, [ebx + 0x20]
        test    edi, edi
        jz      L1936
L1914:
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 0x4]
        jz      L1936
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        test    al, al
        __emit 0x74   /* __emit: MSVC6 miscomputes backward JZ rel by 4; ref = 74 E8 */
        __emit 0xE8
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
        __emit 0xEB   /* __emit: MSVC6 miscomputes backward JMP rel by 4; ref = EB DE */
        __emit 0xDE
L1936:
        lea     ecx, [ebx + 0x38]
        call    FUN_004169c0
        lea     ecx, [ebx + 0x30]
        call    FUN_00417980
        lea     ecx, [ebx + 0x28]
        call    FUN_00417980
        mov     ecx, ebp
        call    FUN_00417980
        lea     ecx, [ebx + 0x18]
        call    FUN_00417980
        mov     ecx, ebx
        call    FUN_00415380
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
