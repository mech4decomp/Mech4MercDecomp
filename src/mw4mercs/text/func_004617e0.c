/*
 * FUN_004617e0 (191 B) — MLR_I_C_DeT_PMesh constructor (__thiscall, RET 0xc).
 * Calls FUN_004650b0 base ctor, sets vtable 0x76ee3c, then depending on the
 * version parameter allocates vertex/index buffers through the stream vtable
 * (virtual calls at +0x20/+0x18/+0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004650b0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004617e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp+8]
        push    ebx
        mov     ebx, dword ptr [ebp+0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp+0xc]
        push    ebx
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004650b0
        xor     eax, eax
        cmp     ebx, 3
        mov     dword ptr [esi+0xa0], eax
        mov     dword ptr [esi+0xa4], eax
        mov     dword ptr [esi], 0x76ee3c
        jge     L_182d
        push    0x76e300
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_189f
        int     3
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_182d:
        cmp     ebx, 0xb
        jge     L_185a
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [ebp+0x10]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [ebp+0x10]
        mov     edx, dword ptr [edi]
        lea     ecx, [eax*4+0]
        push    ecx
        mov     ecx, edi
        call    dword ptr [edx+0x18]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_185a:
        mov     edx, dword ptr [edi]
        push    4
        lea     ebx, [esi+0xa4]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     L_1895
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax+4]
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi+0xa0], eax
        lea     eax, [ebx*4+0]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x18]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_1895:
        mov     dword ptr [esi+0xa0], 0
L_189f:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
