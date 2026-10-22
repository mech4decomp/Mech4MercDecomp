/*
 * FUN_004801f0 (136 B) — __thiscall word-array resize helper. Reallocates
 * a 16-bit element array ([EBP]=ptr, [EBP+4]=count) to a new count
 * (stack arg), copying the min(old,new) elements. MLRIndexedPrimitiveBase
 * index-buffer helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int);
extern void  __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_004801f0(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ebx, dword ptr [ebp+4]
        push    esi
        mov     esi, dword ptr [esp+0x10]
        cmp     esi, ebx
        jz      L_80272
        test    esi, esi
        jbe     L_8025c
        lea     eax, [esi+esi]
        push    edi
        push    eax
        call    FUN_004084d0
        mov     edi, dword ptr [ebp]
        add     esp, 4
        test    edi, edi
        mov     esi, eax
        jz      L_8024b
        mov     ecx, dword ptr [esp+0x14]
        cmp     ecx, ebx
        jc      L_80224
        mov     ecx, ebx
    L_80224:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      L_80242
        mov     edx, edi
        lea     eax, [esi+ecx*2]
        sub     edx, esi
        inc     ecx
    L_80233:
        mov     bx, word ptr [edx+eax]
        mov     word ptr [eax], bx
        dec     ecx
        sub     eax, 2
        test    ecx, ecx
        ja      L_80233
    L_80242:
        push    edi
        call    FUN_004084e0
        add     esp, 4
    L_8024b:
        mov     dword ptr [ebp], esi
        mov     esi, dword ptr [esp+0x14]
        pop     edi
        mov     dword ptr [ebp+4], esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    L_8025c:
        mov     eax, dword ptr [ebp]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp], 0
        mov     dword ptr [ebp+4], esi
    L_80272:
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
