/*
 * FUN_005fc030 (85 B) — scalar deleting destructor (__thiscall, RET 4).
 * Calls base destructor FUN_004169c0, then if the delete flag is set,
 * decrements a global refcount and frees the shared object at 0x007f2694.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2694;
extern int g_007f2690;

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_005fc030(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 0x8], 0x1
        jz      loc_5fc07f
        mov     ecx, dword ptr [g_007f2694]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007f2690]
        jnz     loc_5fc07f
        push    edi
        mov     edi, dword ptr [g_007f2694]
        test    edi, edi
        jz      loc_5fc06e
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
loc_5fc06e:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007f2694], 0x0
        pop     esi
        ret     0x4
loc_5fc07f:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
