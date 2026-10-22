/*
 * FUN_00625770 (90 B) — __fastcall (ECX = this), RET (no stack params).
 * Destructor: installs vtable 0x78cfe8, calls a virtual on this+0x58,
 * calls FUN_006257d0, frees a linked list at this+0x50, then calls
 * FUN_00561730.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006257d0(void);
extern void __cdecl FUN_004084e0(void *param);
extern void __stdcall FUN_00561730(void);

__declspec(naked) void __fastcall FUN_00625770(void)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx + 0x58]
        test    ecx, ecx
        push    edi
        mov     dword ptr [ebx], 0x78cfe8
        jz      L1
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L1:
        push    esi
        mov     ecx, ebx
        call    FUN_006257d0
        mov     edi, dword ptr [ebx + 0x50]
        mov     esi, dword ptr [edi]
        cmp     esi, edi
        jz      L2
L_loop:
        mov     eax, esi
        test    eax, eax
        mov     esi, dword ptr [esi]
        jz      L3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L3:
        cmp     esi, edi
        jnz     L_loop
L2:
        test    edi, edi
        mov     dword ptr [edi], edi
        mov     dword ptr [edi + 0x4], edi
        pop     esi
        jz      L4
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L4:
        mov     ecx, ebx
        call    FUN_00561730
        pop     edi
        pop     ebx
        ret
    }
}
