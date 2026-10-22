/*
 * FUN_00680960 (331 B) — HUD element setup (__thiscall, RET 0xc).
 * Iterates a collection, allocates a new element, registers it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_007dab44;
extern int g_007dab40;
extern char g_007989f4;
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416d00(void);
extern void __cdecl FUN_00416d40(void);
extern void __cdecl FUN_00416ca0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00680490(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00416a90(void);

__declspec(naked) void FUN_00680960(void)
{
    __asm {
        sub     esp, 0x28
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        lea     ebp, [edi+0x1c]
        push    ebp
        lea     ecx, [esp+0x28]
        call    FUN_00416bc0
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     esi, offset g_007989f4
        mov     dword ptr [esp+0x24], esi
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx+0xc]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx+0x16]
        test    al, al
        push    ebp
        jnz     L_0x6809e5
        lea     ecx, [esp+0x14]
        call    FUN_00416bc0
        lea     ecx, [esp+0x10]
        mov     dword ptr [esp+0x10], esi
        call    FUN_00416d00
        mov     esi, eax
        test    esi, esi
        jz      L_0x6809df
    L_0x6809bb:
        lea     ecx, [esp+0x10]
        call    FUN_00416d40
        test    esi, esi
        jz      L_0x6809d0
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax]
    L_0x6809d0:
        lea     ecx, [esp+0x10]
        call    FUN_00416d00
        mov     esi, eax
        test    esi, esi
        jnz     L_0x6809bb
    L_0x6809df:
        lea     ecx, [esp+0x10]
        jmp     L_0x680a3c
    L_0x6809e5:
        lea     ecx, [esp+0x14]
        call    FUN_00416bc0
        lea     ecx, [esp+0x10]
        mov     dword ptr [esp+0x10], esi
        call    FUN_00416d00
        mov     esi, eax
        test    esi, esi
        jz      L_0x680a38
    L_0x680a04:
        mov     ebx, dword ptr [edi+0x14]
        mov     ecx, dword ptr [esp+0x20]
        cmp     dword ptr [ecx+0x18], ebx
        lea     ecx, [esp+0x10]
        jz      L_0x680a24
        call    FUN_00416d40
        test    esi, esi
        jz      L_0x680a29
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx]
        jmp     L_0x680a29
    L_0x680a24:
        call    FUN_00416ca0
    L_0x680a29:
        lea     ecx, [esp+0x10]
        call    FUN_00416d00
        mov     esi, eax
        test    esi, esi
        __emit 0x75 /* __emit: JNZ L_0x680a04; MSVC6 miscomputes backward rel8 by -3 (intervening call relocs + forward branches) */
        __emit 0xCC
    L_0x680a38:
        lea     ecx, [esp+0x10]
    L_0x680a3c:
        call    FUN_00416c60
        mov     ebx, dword ptr [esp+0x3c]
        lea     esi, [edi+0x14]
        push    0x34
        mov     dword ptr [esi], ebx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_0x680a70
        mov     ecx, dword ptr [esp+0x44]
        mov     edx, dword ptr [esp+0x40]
        push    ecx
        mov     ecx, dword ptr [edi+0x10]
        push    edx
        push    ecx
        push    ebx
        mov     ecx, eax
        call    FUN_00680490
        jmp     L_0x680a72
    L_0x680a70:
        xor     eax, eax
    L_0x680a72:
        push    esi
        mov     ecx, ebp
        mov     dword ptr [edi+0x18], eax
        call    FUN_00416b60
        test    eax, eax
        jz      L_0x680a89
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
    L_0x680a89:
        mov     eax, dword ptr [edi+0x18]
        push    esi
        push    eax
        mov     ecx, ebp
        call    FUN_00416a90
        lea     ecx, [esp+0x24]
        call    FUN_00416c60
        mov     eax, dword ptr [edi+0x18]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret     0xc
    }
}
