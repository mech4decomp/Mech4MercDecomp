/*
 * FUN_005fc090 (85 B) — scalar deleting destructor (__thiscall, RET 4).
 * Same shape as FUN_005fc030 but for the object at 0x007f269c with
 * refcount at 0x007f2698.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f269c;
extern int g_007f2698;

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_005fc090(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 0x8], 0x1
        jz      loc_5fc0df
        mov     ecx, dword ptr [g_007f269c]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007f2698]
        jnz     loc_5fc0df
        push    edi
        mov     edi, dword ptr [g_007f269c]
        test    edi, edi
        jz      loc_5fc0ce
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
loc_5fc0ce:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007f269c], 0x0
        pop     esi
        ret     0x4
loc_5fc0df:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
