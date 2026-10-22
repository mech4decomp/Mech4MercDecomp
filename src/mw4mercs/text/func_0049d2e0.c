/*
 * FUN_0049d2e0 (138 B) — MLR array resize helper (4-byte elements,
 * __thiscall, RET 4). Reallocates this->[0] to hold param_1 elements,
 * copying the min(old,new) elements.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_0049d2e0(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ebx, dword ptr [ebp+0x4]
        push    esi
        mov     esi, dword ptr [esp+0x10]
        cmp     esi, ebx
        jz      L_d364
        test    esi, esi
        jbe     L_d34e
        lea     eax, [esi*4+0x0]
        push    edi
        push    eax
        call    FUN_004084d0
        mov     edi, dword ptr [ebp]
        add     esp, 4
        test    edi, edi
        mov     esi, eax
        jz      L_d33d
        mov     ecx, dword ptr [esp+0x14]
        cmp     ecx, ebx
        jc      L_d318
        mov     ecx, ebx
L_d318:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      L_d334
        mov     edx, edi
        lea     eax, [esi+ecx*4]
        sub     edx, esi
        inc     ecx
L_d327:
        mov     ebx, dword ptr [edx+eax]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_d327
L_d334:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_d33d:
        mov     dword ptr [ebp], esi
        mov     esi, dword ptr [esp+0x14]
        pop     edi
        mov     dword ptr [ebp+0x4], esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
L_d34e:
        mov     eax, dword ptr [ebp]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp], 0x0
        mov     dword ptr [ebp+0x4], esi
L_d364:
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
