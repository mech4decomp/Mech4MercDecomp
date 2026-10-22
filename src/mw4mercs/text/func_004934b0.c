/*
 * FUN_004934b0 (234 B) — __thiscall MLR material constructor. Sets up
 * the vtable, reads version-dependent fields through a stream vtable
 * (call dword ptr [reg+0x20]), and initializes defaults.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern int g_007da884;

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_004924e0(void);

__declspec(naked) void FUN_004934b0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     edi, dword ptr [esp + 0x14]
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0x10]
        xor     ebx, ebx
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x770104
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x1c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     ebp, dword ptr [esp + 0x18]
        cmp     ebp, 0x15
        jl      L_493545
        mov     edx, dword ptr [edi]
        push    0x30
        lea     eax, [esi + 0x24]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edi
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_00412a00
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [g_007da884]
        add     esp, 0x8
        push    edx
        call    FUN_004924e0
        mov     dword ptr [esi + 0x20], eax
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      L_49355f
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_49355f
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_49355f
    L_493545:
        mov     eax, dword ptr [edi]
        push    0x4
        lea     ecx, [esi + 0x20]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [eax]
        push    0x30
        lea     ecx, [esi + 0x24]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
    L_49355f:
        cmp     ebp, 0x13
        jl      L_493587
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0x14]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x18]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    L_493587:
        pop     edi
        mov     dword ptr [esi + 0x14], ebx
        mov     dword ptr [esi + 0x18], 0x4ac35000
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
