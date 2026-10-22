/*
 * FUN_006808e0 (116 B) — Destructor iterating a list of sub-objects.
 *
 * __fastcall (ECX = this), RET 0. Sets vtable, initializes a sub-object
 * at this+0x1c, then walks a list calling vtable[0](1) on each entry.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void *param);
extern void * __cdecl FUN_00416d00(void);
extern void __cdecl FUN_00416d40(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void __fastcall FUN_006808e0(void *this)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        lea     ebx, [edi + 0x1c]
        push    ebx
        lea     ecx, [esp + 0x10]
        mov     dword ptr [edi], 0x7989c4
        call    FUN_00416bc0
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], 0x7989f4
        call    FUN_00416d00
        mov     esi, eax
        test    esi, esi
        jz      l_done
    l_loop:
        lea     ecx, [esp + 0xc]
        call    FUN_00416d40
        test    esi, esi
        jz      l_skip
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax]
    l_skip:
        lea     ecx, [esp + 0xc]
        call    FUN_00416d00
        mov     esi, eax
        test    esi, esi
        jnz     l_loop
    l_done:
        lea     ecx, [esp + 0xc]
        call    FUN_00416c60
        mov     ecx, ebx
        call    FUN_004169c0
        mov     ecx, edi
        call    FUN_00415380
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret
    }
}
