/*
 * FUN_00429930 (113 B) — __thiscall byte-array resize (vector<byte>-style).
 * Reallocates [ESI] to hold `param_1` bytes, copying the min(old,new) prefix.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_00429930(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp+0xc]
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi+4]
        cmp     ebp, ebx
        jz      L_42999b
        test    ebp, ebp
        jbe     L_429987
        push    edi
        push    ebp
        call    FUN_004084d0
        mov     ecx, dword ptr [esi]
        add     esp, 4
        test    ecx, ecx
        mov     edi, eax
        jz      L_42997b
        cmp     ebp, ebx
        mov     eax, ebp
        jc      L_42995e
        mov     eax, ebx
L_42995e:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_429972
L_429965:
        mov     dl, byte ptr [ecx+eax*1]
        mov     byte ptr [eax+edi*1], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_429965
L_429972:
        push    ecx
        call    FUN_004084e0
        add     esp, 4
L_42997b:
        mov     dword ptr [esi], edi
        pop     edi
        mov     dword ptr [esi+4], ebp
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
L_429987:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
        mov     dword ptr [esi+4], ebp
L_42999b:
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
