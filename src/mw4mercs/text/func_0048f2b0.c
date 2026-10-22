/*
 * FUN_0048f2b0 (102 B) — MLR light-array destructor (__thiscall).
 * Releases each element in the hash table, frees the element buffer and
 * the array object, and restores the base vtable.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004906a0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00417980(void);

__declspec(naked) void FUN_0048f2b0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     dword ptr [edi], 0x76fee4
        lea     esi, [edi + 0x28]
        mov     ebx, 0x3fff
L_f2c3:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      L_f2d5
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        mov     dword ptr [esi], 0x0
L_f2d5:
        add     esi, 0x4
        dec     ebx
        jnz     L_f2c3
        mov     esi, dword ptr [edi + 0x10034]
        test    esi, esi
        jz      L_f2f5
        mov     ecx, esi
        call    FUN_004906a0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_f2f5:
        mov     ecx, dword ptr [edi + 0x10028]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        lea     ecx, [edi + 0x8]
        call    FUN_00417980
        mov     dword ptr [edi], 0x76d3f0
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
