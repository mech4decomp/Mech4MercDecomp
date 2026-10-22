/*
 * FUN_0049d220 (183 B) — MLR array resize helper (16-byte elements,
 * __thiscall, RET 4). Reallocates this->[0] to hold param_1 elements,
 * copying the min(old,new) elements.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_0049d220(void)
{
    __asm {
        push    ecx
        push    ebp
        mov     ebp, dword ptr [esp+0xc]
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi+0x4]
        cmp     ebp, edi
        mov     dword ptr [esp+0xc], esi
        jz      L_d2d0
        test    ebp, ebp
        jbe     L_d2bc
        mov     eax, ebp
        shl     eax, 0x4
        push    ebx
        push    eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_d25b
        lea     ecx, [ebp-1]
        mov     dword ptr [esp+0x18], ecx
        mov     ebx, eax
        jmp     L_d25d
L_d25b:
        xor     ebx, ebx
L_d25d:
        mov     esi, dword ptr [esi]
        test    esi, esi
        jz      L_d2a9
        cmp     ebp, edi
        mov     edx, ebp
        jc      L_d26b
        mov     edx, edi
L_d26b:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_d2a0
        mov     ecx, edx
        shl     ecx, 0x4
        lea     eax, [ecx+esi]
        lea     ecx, [ecx+ebx+0x8]
        inc     edx
L_d27f:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx-0x8], edi
        mov     edi, dword ptr [eax+0x4]
        mov     dword ptr [ecx-0x4], edi
        mov     edi, dword ptr [eax+0x8]
        mov     dword ptr [ecx], edi
        mov     edi, dword ptr [eax+0xc]
        mov     dword ptr [ecx+0x4], edi
        dec     edx
        sub     eax, 0x10
        sub     ecx, 0x10
        test    edx, edx
        ja      L_d27f
L_d2a0:
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_d2a9:
        mov     ecx, dword ptr [esp+0x10]
        mov     dword ptr [ecx], ebx
        pop     ebx
        mov     esi, ecx
        pop     edi
        mov     dword ptr [esi+0x4], ebp
        pop     esi
        pop     ebp
        pop     ecx
        ret     4
L_d2bc:
        mov     edx, dword ptr [esi]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0x0
        mov     dword ptr [esi+0x4], ebp
L_d2d0:
        pop     edi
        pop     esi
        pop     ebp
        pop     ecx
        ret     4
    }
}
