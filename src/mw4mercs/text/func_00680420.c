/*
 * FUN_00680420 (110 B) — HUD element creation (__thiscall, RET 0x10).
 * ORs two per-index flags into a bitmask, allocates an element, and
 * registers it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b5b84;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0067f8a0(void);
extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_00680420(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp+0x14]
        mov     eax, dword ptr [ebx*4+g_007b5b84]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x18]
        mov     edx, dword ptr [edi*4+g_007b5b84]
        mov     esi, ecx
        mov     ecx, dword ptr [esi+0x58]
        or      eax, edx
        or      ecx, eax
        push    0x30
        mov     dword ptr [esi+0x58], ecx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_0x680478
        mov     ecx, dword ptr [ebx*4+g_007b5b84]
        mov     edx, dword ptr [edi*4+g_007b5b84]
        push    ecx
        mov     ecx, dword ptr [esp+0x18]
        push    edx
        mov     edx, dword ptr [esp+0x18]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_0067f8a0
        mov     edi, eax
        jmp     L_0x68047a
    L_0x680478:
        xor     edi, edi
    L_0x68047a:
        push    edi
        lea     ecx, [esi+0x10]
        call    FUN_004179b0
        inc     dword ptr [esi+0x1c]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
