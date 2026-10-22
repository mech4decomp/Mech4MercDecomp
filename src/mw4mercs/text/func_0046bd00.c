/*
 * FUN_0046bd00 (191 B) — MLR (MidLevelRenderer) graphics library.
 * __thiscall, RET 0xc. Constructor: calls FUN_0046fb00, sets up the vtable
 * pointer, and allocates vertex/index buffers via virtual calls on the
 * stream object (with an assert + int 3 for version < 3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0046fb00(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0046bd00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp+0x8]
        push    ebx
        mov     ebx, dword ptr [ebp+0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp+0xc]
        push    ebx
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_0046fb00
        xor     eax, eax
        cmp     ebx, 0x3
        mov     dword ptr [esi+0x88], eax
        mov     dword ptr [esi+0x8c], eax
        mov     dword ptr [esi], 0x76f118
        jge     L_bd4d
        push    0x76e300
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_bdbf
        int     3
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_bd4d:
        cmp     ebx, 0xb
        jge     L_bd7a
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [ebp+0x10]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [ebp+0x10]
        mov     edx, dword ptr [edi]
        lea     ecx, [eax*4]
        push    ecx
        mov     ecx, edi
        call    dword ptr [edx+0x18]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_bd7a:
        mov     edx, dword ptr [edi]
        push    0x4
        lea     ebx, [esi+0x8c]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     L_bdb5
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax+0x4]
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi+0x88], eax
        lea     eax, [ebx*4]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x18]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_bdb5:
        mov     dword ptr [esi+0x88], 0x0
L_bdbf:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
