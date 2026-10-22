/*
 * FUN_00697710 (164 B) — __thiscall (ECX = this). Sets vtable 0x799800,
 * walks an array [this+0x50, this+0x54) calling virtual [0] with arg 1
 * and clearing each slot, calls FUN_00698b30/FUN_006977c0/
 * FUN_0041fc90, frees three members via FUN_004084e0, then
 * FUN_00561730.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00698b30(void);
extern void __cdecl FUN_006977c0(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00561730(void);

__declspec(naked) void __fastcall FUN_00697710(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x50]
        mov     dword ptr [esi], 0x799800
        mov     ebx, dword ptr [esi + 0x54]
        cmp     edi, ebx
        jz      L_73f
L_726:
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        jz      L_732
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_732:
        mov     dword ptr [edi], 0x0
        add     edi, 0x4
        cmp     edi, ebx
        jnz     L_726
L_73f:
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esi + 0x50]
        mov     eax, dword ptr [esi + 0x54]
        push    0x0
        push    ecx
        push    edx
        push    eax
        push    eax
        call    FUN_00698b30
        add     esp, 0x14
        mov     ecx, esi
        mov     dword ptr [esi + 0x54], eax
        call    FUN_006977c0
        lea     ecx, [esi + 0x8c]
        call    FUN_0041fc90
        mov     eax, dword ptr [esi + 0x68]
        test    eax, eax
        mov     dword ptr [esp + 0xc], eax
        jz      L_780
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_780:
        mov     eax, dword ptr [esi + 0x5c]
        test    eax, eax
        mov     dword ptr [esp + 0xc], eax
        jz      L_794
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_794:
        mov     eax, dword ptr [esi + 0x50]
        test    eax, eax
        mov     dword ptr [esp + 0xc], eax
        jz      L_7a8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_7a8:
        mov     ecx, esi
        call    FUN_00561730
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }
}
