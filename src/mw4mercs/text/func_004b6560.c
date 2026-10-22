/*
 * FUN_004b6560 (116 B) — MLR LightElement constructor variant (__thiscall).
 * Calls base ctor FUN_004c6430, selects a sub-vtable from a 2-entry table
 * (0x7b3488) indexed by (this+0x18 >> 10) & 1, sets vtable 0x7708ac,
 * allocates a 0xa4-byte object via FUN_004084d0, initializes it via
 * FUN_00446de0, stores it at this+0x144, and calls FUN_004870b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007daa18;
extern int g_007b9598;
extern int g_007b3488[];
extern void __cdecl FUN_004c6430(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00446de0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004870b0(void);

__declspec(naked) void FUN_004b6560(void)
{
    __asm {
        mov     eax, dword ptr [g_007daa18]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004c6430
        mov     ecx, dword ptr [esi + 0x18]
        mov     eax, dword ptr [g_007b9598]
        shr     ecx, 0xa
        and     ecx, 0x1
        mov     edx, dword ptr [ecx*4 + g_007b3488]
        push    eax
        mov     dword ptr [esi], 0x7708ac
        mov     dword ptr [esi + 0x13c], edx
        call    FUN_006f4950
        push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_65B9
        mov     ecx, dword ptr [esp + 0xc]
        push    0x0
        push    ecx
        mov     ecx, eax
        call    FUN_00446de0
        mov     edi, eax
        jmp     L_65BB
    L_65B9:
        xor     edi, edi
    L_65BB:
        mov     dword ptr [esi + 0x144], edi
        call    FUN_006f49a0
        mov     ecx, edi
        call    FUN_004870b0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
