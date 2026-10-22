/*
 * FUN_004EA800 (365 B) - MLR/Adept tile update variant (RET 4, one stack arg).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_004e2ee0(void);
extern int   g_7dc728;   /* DAT_007dc728 */

__declspec(naked) void __fastcall FUN_004ea800(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, eax
        shr     ecx, 0xb
        test    cl, 0x1
        push    edi
        jz      L8C9
        mov     eax, dword ptr [esi + 0x124]
        test    eax, eax
        jnz     L83E
        mov     edx, dword ptr [g_7dc728]
        add     edx, 0x164
        push    edx
        mov     ecx, esi
        call    FUN_004154d0
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    L83E:
        mov     eax, dword ptr [g_7dc728]
        add     eax, 0x16c
        push    eax
        mov     ecx, esi
        call    FUN_004154d0
        mov     al, byte ptr [esi + 0x138]
        cmp     al, byte ptr [esi + 0x139]
        mov     byte ptr [esp + 0x14], al
        ja      L966
    L866:
        mov     bl, byte ptr [esi + 0x13a]
        cmp     bl, byte ptr [esi + 0x13b]
        mov     byte ptr [esp + 0xc], bl
        ja      L8B2
        mov     edi, dword ptr [esp + 0x14]
    L87C:
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        mov     ecx, dword ptr [g_7dc728]
        push    edi
        call    FUN_004e2ee0
        test    eax, eax
        jz      L89E
        add     eax, 0x15c
        push    eax
        mov     ecx, esi
        call    FUN_004154d0
    L89E:
        mov     al, byte ptr [esi + 0x13b]
        inc     bl
        cmp     bl, al
        mov     byte ptr [esp + 0xc], bl
        jbe     L87C
        mov     al, byte ptr [esp + 0x14]
    L8B2:
        mov     cl, byte ptr [esi + 0x139]
        inc     al
        cmp     al, cl
        mov     byte ptr [esp + 0x14], al
        jbe     L866
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    L8C9:
        test    eax, 0x1f000
        jz      L966
        shr     eax, 0xa
        test    al, 0x1
        jz      L8F8
        mov     edx, dword ptr [esi + 0xd8]
        mov     eax, dword ptr [edx + 0x10]
        add     eax, 0x154
        push    eax
        mov     ecx, esi
        call    FUN_004154d0
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    L8F8:
        mov     al, byte ptr [esi + 0x138]
        cmp     al, byte ptr [esi + 0x139]
        mov     byte ptr [esp + 0x14], al
        ja      L966
    L90A:
        mov     bl, byte ptr [esi + 0x13a]
        cmp     bl, byte ptr [esi + 0x13b]
        mov     byte ptr [esp + 0xc], bl
        ja      L956
        mov     edi, dword ptr [esp + 0x14]
    L920:
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        mov     ecx, dword ptr [g_7dc728]
        push    edi
        call    FUN_004e2ee0
        test    eax, eax
        jz      L942
        add     eax, 0x154
        push    eax
        mov     ecx, esi
        call    FUN_004154d0
    L942:
        mov     al, byte ptr [esi + 0x13b]
        inc     bl
        cmp     bl, al
        mov     byte ptr [esp + 0xc], bl
        jbe     L920
        mov     al, byte ptr [esp + 0x14]
    L956:
        mov     cl, byte ptr [esi + 0x139]
        inc     al
        cmp     al, cl
        mov     byte ptr [esp + 0x14], al
        jbe     L90A
    L966:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    }
}
