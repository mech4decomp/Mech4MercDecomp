/*
 * FUN_00435ed0 (287 B) — MLR __thiscall. Reallocates a dword array at
 * +0x20/+0x24 (count), copies data, dispatches through vtable +0xa4/+0xa8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004554a0(void);
extern void * __cdecl FUN_004084d0(int);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_00435ed0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0x18]
        mov     ebx, ecx
        push    esi
        mov     dword ptr [esp+0x14], ebx
        call    FUN_004554a0
        mov     eax, dword ptr [esi+0xc]
        test    eax, eax
        jz      L_fbd
        mov     ecx, dword ptr [eax+0x24]
        test    ecx, ecx
        jbe     L_fbd
        mov     eax, dword ptr [esi]
        push    edi
        lea     ecx, [esp+0x1c]
        push    ecx
        lea     edx, [esp+0x10]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax+0xa8]
        mov     esi, dword ptr [ebx+0xc]
        mov     ecx, dword ptr [esp+0x1c]
        mov     edi, dword ptr [esi+0x24]
        cmp     ecx, edi
        mov     dword ptr [esp+0x10], ecx
        jz      L_f97
        test    ecx, ecx
        jbe     L_f79
        lea     eax, [ecx*4+0]
        push    ebp
        push    eax
        call    FUN_004084d0
        mov     ebp, dword ptr [esi+0x20]
        add     esp, 4
        test    ebp, ebp
        mov     ebx, eax
        jz      L_f6f
        mov     ecx, dword ptr [esp+0x14]
        cmp     ecx, edi
        jc      L_f4a
        mov     ecx, edi
L_f4a:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      L_f66
        mov     edx, ebp
        lea     eax, [ebx+ecx*4]
        sub     edx, ebx
        inc     ecx
L_f59:
        mov     edi, dword ptr [edx+eax*1]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_f59
L_f66:
        push    ebp
        call    FUN_004084e0
        add     esp, 4
L_f6f:
        mov     dword ptr [esi+0x20], ebx
        mov     ebx, dword ptr [esp+0x18]
        pop     ebp
        jmp     L_f8c
L_f79:
        mov     eax, dword ptr [esi+0x20]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0x20], 0
L_f8c:
        mov     ecx, dword ptr [esp+0x10]
        mov     dword ptr [esi+0x24], ecx
        mov     ecx, dword ptr [esp+0x1c]
L_f97:
        mov     eax, dword ptr [esi+0x20]
        mov     esi, dword ptr [esp+0xc]
        mov     edx, dword ptr [ebx]
        mov     edi, eax
        rep movsd
        mov     ecx, dword ptr [esp+0x1c]
        push    ecx
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx+0xa4]
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0xc
        ret     4
L_fbd:
        mov     edx, dword ptr [esi]
        lea     eax, [esp+0x18]
        push    eax
        lea     ecx, [esp+0xc]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx+0xa8]
        mov     eax, dword ptr [esp+0x18]
        mov     ecx, dword ptr [esp+0x8]
        mov     edx, dword ptr [ebx]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0xa4]
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0xc
        ret     4
    }
}
