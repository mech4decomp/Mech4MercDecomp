/*
 * FUN_0047a4c0 (399 B) — MLR PMesh constructor (__thiscall, RET 0xc).
 * Calls base ctor FUN_0047fb90, sets up texture/material buffers, and
 * either reads a mesh from a stream (param_3 >= 0xf) or allocates a
 * default-size buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0047fb90(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00428750(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0047ada0(void);
extern int g_007da848;
extern int g_007da694;
extern int g_007da690;

__declspec(naked) void FUN_0047a4c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp+0x10]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp+0xc]
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [ebp+0x8]
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_0047fb90
        mov     eax, dword ptr [esi+0x2c]
        xor     ebx, ebx
        and     eax, 0x3fff
        mov     dword ptr [esi+0x58], ebx
        mov     dword ptr [esi+0x5c], ebx
        mov     dword ptr [esi+0x60], ebx
        mov     dword ptr [esi+0x64], ebx
        mov     dword ptr [esi], 0x76f4fc
        jle     L_47a51f
        mov     edx, dword ptr [g_007da848]
        mov     eax, dword ptr [edx+eax*4+0x24]
        cmp     eax, ebx
        jz      L_47a51f
        mov     eax, dword ptr [eax+0x10]
        push    eax
        push    0x76f4d0
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_47a531
        __emit 0xCC   /* __emit: MSVC6 counts int 3 as 3 bytes for label offsets; emit raw CC */
        jmp     L_47a531   /* MSVC6 emits unreachable jmp after int 3 to merge point */
L_47a51f:
        push    0x76f49c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_47a531
        __emit 0xCC   /* __emit: MSVC6 counts int 3 as 3 bytes for label offsets; emit raw CC */
L_47a531:
        cmp     dword ptr [ebp+0x10], 0xf
        jl      L_47a5a2
        mov     edx, dword ptr [edi]
        push    0x4
        lea     ebx, [esi+0x64]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     L_47a55e
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax+0x4]
        mov     edx, dword ptr [edi]
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi+0x60], eax
        call    dword ptr [edx+0x18]
        jmp     L_47a565
L_47a55e:
        mov     dword ptr [esi+0x60], 0x0
L_47a565:
        mov     eax, dword ptr [edi]
        push    0x4
        lea     ecx, [ebp+0x10]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax+0x20]
        mov     edx, dword ptr [ebp+0x10]
        lea     ebx, [esi+0x58]
        push    edx
        mov     ecx, ebx
        call    FUN_00428750
        mov     eax, dword ptr [ebp+0x10]
        test    eax, eax
        jbe     L_47a648
        mov     edx, dword ptr [edi]
        shl     eax, 0x4
        push    eax
        mov     eax, dword ptr [ebx]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_47a5a2:
        mov     edx, dword ptr [g_007da694]
        mov     ecx, dword ptr [g_007da690]
        mov     dword ptr [esi+0x64], edx
        mov     eax, dword ptr [esi+0x5c]
        mov     edi, edx
        cmp     edi, eax
        mov     dword ptr [esi+0x60], ecx
        jz      L_47a641
        cmp     edi, ebx
        jbe     L_47a62f
        mov     eax, edi
        shl     eax, 0x4
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_47a5df
        lea     ecx, [edi-1]
        mov     dword ptr [ebp+0x10], ecx
        mov     ebx, eax
L_47a5df:
        mov     eax, dword ptr [esi+0x58]
        test    eax, eax
        mov     dword ptr [ebp+0x10], ebx
        jz      L_47a63b
        mov     edx, dword ptr [esi+0x5c]
        cmp     edi, edx
        jnc     L_47a5f2
        mov     edx, edi
L_47a5f2:
        mov     ecx, edx
        dec     edx
        test    ecx, ecx
        jz      L_47a629
L_47a5f9:
        mov     ecx, edx
        shl     ecx, 0x4
        add     eax, ecx
        lea     ecx, [ecx+ebx+8]
        inc     edx
L_47a605:
        mov     ebx, dword ptr [eax]
        mov     dword ptr [ecx-8], ebx
        mov     ebx, dword ptr [eax+4]
        mov     dword ptr [ecx-4], ebx
        mov     ebx, dword ptr [eax+8]
        mov     dword ptr [ecx], ebx
        mov     ebx, dword ptr [eax+0xc]
        mov     dword ptr [ecx+4], ebx
        dec     edx
        sub     eax, 0x10
        sub     ecx, 0x10
        test    edx, edx
        ja      L_47a605
        mov     ebx, dword ptr [ebp+0x10]
L_47a629:
        mov     eax, dword ptr [esi+0x58]
        push    eax
        jmp     L_47a633
L_47a62f:
        mov     edx, dword ptr [esi+0x58]
        push    edx
L_47a633:
        call    FUN_004084e0
        add     esp, 0x4
L_47a63b:
        mov     dword ptr [esi+0x58], ebx
        mov     dword ptr [esi+0x5c], edi
L_47a641:
        mov     ecx, esi
        call    FUN_0047ada0
L_47a648:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
