/*
 * FUN_004edb70 (94 B) — __thiscall (ECX=this). MLR quad-stack
 * destructor: destroys the quad list (this+0x10), frees all queued
 * quads (this+0x44 chain), then base destructor FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_004161f0(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_0041fc90(void);

__declspec(naked) void FUN_004edb70(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        lea     ebx, [esi + 0x10]
        mov     ecx, ebx
        mov     dword ptr [esi], 0x774a08
        call    FUN_0041fd80
        test    eax, eax
        jz      L1
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L1:
        mov     ecx, dword ptr [esi + 0x44]
        test    ecx, ecx
        jz      L2
        push    edi
        lea     edi, [esi + 0x18]
L_loop:
        mov     dword ptr [ecx], 0x774a04
        call    FUN_00415380
        mov     ecx, edi
        call    FUN_004161f0
        mov     ecx, dword ptr [esi + 0x44]
        test    ecx, ecx
        jnz     L_loop
        pop     edi
L2:
        lea     ecx, [esi + 0x18]
        call    FUN_00415e30
        mov     ecx, ebx
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        pop     ebx
        ret
    }
}
