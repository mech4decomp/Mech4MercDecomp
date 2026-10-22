/*
 * FUN_00442030 (130 B) — MLR global mesh-buffer pool teardown (__cdecl, RET).
 * Frees the 0x200/0x100 index buffers, the mesh object, and the mesh
 * factory, then clears the globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004084e0(void);
extern void FUN_00415200(void);
extern void FUN_006f4850(void);

extern int g_007b9868;
extern int g_007b9864;
extern int g_007b986c;
extern int g_007b9870;

__declspec(naked) void FUN_00442030(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b9868]
        test    esi, esi
        jz      L_2053
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_204a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_204a:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_2053:
        mov     esi, dword ptr [g_007b9864]
        test    esi, esi
        jz      L_2075
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_206c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_206c:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_2075:
        mov     esi, dword ptr [g_007b986c]
        test    esi, esi
        jz      L_208f
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_208f:
        mov     eax, dword ptr [g_007b9870]
        push    0x1
        push    eax
        mov     dword ptr [g_007b986c], 0x0
        call    FUN_006f4850
        mov     dword ptr [g_007b9870], 0x0
        pop     esi
        ret
    }
}
