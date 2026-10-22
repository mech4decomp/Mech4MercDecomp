/*
 * FUN_0060FBF0 (125 B) — __thiscall constructor. Sets up a large object:
 * vtable 0x76cd9c, 0xff sub-objects (each 8 bytes, vtable 0x773828),
 * then vtable 0x78c0b0, zeroes 0x3e8 dwords at +0x808, and a 0x3e8-entry
 * byte table at +0x2b48.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b8c10;   /* DAT_007b8c10 */
extern void __cdecl FUN_00415180(int);
extern void __cdecl FUN_0041fc80(int);

__declspec(naked) void __fastcall FUN_0060FBF0(void)
{
    __asm {
        mov     eax, dword ptr [g_7b8c10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     ebx, ebx
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x76cd9c
        lea     edi, [esi + 0x10]
        mov     ebp, 0xff
L_FC17:
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x773828
        add     edi, 0x8
        dec     ebp
        jnz     L_FC17
        lea     edi, [esi + 0x808]
        mov     ecx, 0xff
        xor     eax, eax
        mov     dword ptr [esi], 0x78c0b0
        mov     dword ptr [esi + 0xc04], ebx
        rep stosd
        lea     ecx, [esi + 0x1ba8]
L_FC4C:
        mov     dword ptr [ecx + 0xfffff060], ebx
        mov     dword ptr [ecx], ebx
        mov     byte ptr [esi + eax + 0x2b48], bl
        inc     eax
        add     ecx, 0x4
        cmp     eax, 0x3e8
        jl      L_FC4C
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
