/*
 * FUN_006214a0 (299 B) — ABL interpreter __thiscall cleanup/destructor.
 * Frees a linked list of objects, then tears down several member
 * containers (vector-like begin/end pairs) and re-initializes member
 * buffers via FUN_00624870.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00623640(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005e1c30(void);
extern void __cdecl FUN_00624ae0(void);
extern void __cdecl FUN_00624aa0(void);
extern void __cdecl FUN_00624a80(void);
extern void __cdecl FUN_00624a60(void);
extern void __cdecl FUN_00624900(void);
extern void __cdecl FUN_00624960(void);
extern void __cdecl FUN_00624870(void);

__declspec(naked) void FUN_006214a0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ebp, dword ptr [esi+0x4]
        push    edi
        mov     edi, dword ptr [esi]
        cmp     edi, ebp
        jz      L_6214d3
L_6214b0:
        mov     ebx, dword ptr [edi]
        test    ebx, ebx
        jz      L_6214c6
        mov     ecx, ebx
        call    FUN_00623640
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_6214c6:
        mov     dword ptr [edi], 0x0
        add     edi, 0x4
        cmp     edi, ebp
        jnz     L_6214b0
L_6214d3:
        mov     eax, dword ptr [esi+0x2dc]
        mov     edx, dword ptr [esi+0x2e4]
        lea     ecx, [esi+0x2e4]
        sub     edx, eax
        push    edx
        push    eax
        call    FUN_005e1c30
        mov     eax, dword ptr [esi+0x2d0]
        mov     edx, dword ptr [esi+0x2d8]
        lea     ecx, [esi+0x2d8]
        sub     edx, eax
        sar     edx, 0x2
        push    edx
        push    eax
        mov     dword ptr [esp+0x18], eax
        call    FUN_00624ae0
        mov     eax, dword ptr [esi+0x2c4]
        mov     edx, dword ptr [esi+0x2cc]
        lea     ecx, [esi+0x2cc]
        sub     edx, eax
        sar     edx, 0x3
        push    edx
        push    eax
        mov     dword ptr [esp+0x18], eax
        call    FUN_00624aa0
        mov     eax, dword ptr [esi+0x2b8]
        mov     edx, dword ptr [esi+0x2c0]
        lea     ecx, [esi+0x2c0]
        sub     edx, eax
        sar     edx, 0x4
        push    edx
        push    eax
        mov     dword ptr [esp+0x18], eax
        call    FUN_00624a80
        mov     eax, dword ptr [esi+0x2ac]
        mov     edx, dword ptr [esi+0x2b4]
        lea     ecx, [esi+0x2b4]
        sub     edx, eax
        sar     edx, 0x2
        push    edx
        push    eax
        mov     dword ptr [esp+0x18], eax
        call    FUN_00624a60
        lea     edi, [esi+0x2a0]
        mov     ecx, edi
        call    FUN_00624900
        mov     ecx, edi
        call    FUN_00624960
        lea     edi, [esi+0x2a0]
        mov     ebx, 0x36
L_621595:
        mov     eax, dword ptr [edi-0xc]
        sub     edi, 0xc
        mov     ecx, edi
        mov     dword ptr [esp+0x10], eax
        call    FUN_00624870
        dec     ebx
        jnz     L_621595
        mov     edx, dword ptr [esi+0xc]
        lea     ecx, [esi+0xc]
        mov     dword ptr [esp+0x10], edx
        call    FUN_00624870
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esp+0x10], eax
        call    FUN_00624870
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
