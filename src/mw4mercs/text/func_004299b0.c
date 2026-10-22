/*
 * FUN_004299b0 (138 B) — __thiscall dword-array resize (vector<int>-style).
 * Reallocates [EBP] to hold `param_1` dwords, copying the min(old,new) prefix.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_004299b0(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ebx, dword ptr [ebp+4]
        push    esi
        mov     esi, dword ptr [esp+0x10]
        cmp     esi, ebx
        jz      L_429a34
        test    esi, esi
        jbe     L_429a1e
        lea     eax, [esi*4]
        push    edi
        push    eax
        call    FUN_004084d0
        mov     edi, dword ptr [ebp]
        add     esp, 4
        test    edi, edi
        mov     esi, eax
        jz      L_429a0d
        mov     ecx, dword ptr [esp+0x14]
        cmp     ecx, ebx
        jc      L_4299e8
        mov     ecx, ebx
L_4299e8:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      L_429a04
        mov     edx, edi
        lea     eax, [esi+ecx*4]
        sub     edx, esi
        inc     ecx
L_4299f7:
        mov     ebx, dword ptr [edx+eax*1]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_4299f7
L_429a04:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_429a0d:
        mov     dword ptr [ebp], esi
        mov     esi, dword ptr [esp+0x14]
        pop     edi
        mov     dword ptr [ebp+4], esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
L_429a1e:
        mov     eax, dword ptr [ebp]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp], 0
        mov     dword ptr [ebp+4], esi
L_429a34:
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
