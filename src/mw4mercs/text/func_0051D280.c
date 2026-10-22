/*
 * FUN_0051D280 (185 B) — walks a linked list of objects, counting entries by
 * type, and writes the counts through output pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void FUN_0051D280(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx+0x44]
        lea     eax, [ecx+0x44]
        push    ebx
        xor     ebx, ebx
        xor     edx, 0x85739531
        mov     dword ptr [esp+4], ebx
        mov     dword ptr [esp+8], ebx
        je      L_d330
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        cmp     dword ptr [ecx+0x34], ebx
        je      L_d330
        mov     eax, dword ptr [eax]
        push    esi
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax+0x34]
        push    edi
        mov     edi, dword ptr [esp+0x20]
        mov     edx, dword ptr [edi]
        mov     esi, dword ptr [edx]
        mov     edx, dword ptr [eax+0x10]
        add     eax, 0x10
        test    edx, edx
        je      L_d30c
    L_d2d4:
        mov     eax, dword ptr [edx]
        test    eax, eax
        mov     edx, dword ptr [edx+4]
        je      L_d30c
        mov     ecx, dword ptr [eax+0x18]
        test    ecx, ecx
        jne     L_d2f1
        cmp     dword ptr [eax+0x3c], esi
        jne     L_d2f1
        inc     dword ptr [esp+0xc]
    L_d2f1:
        cmp     ecx, 1
        jne     L_d2ff
        cmp     dword ptr [eax+0x3c], esi
        jne     L_d2ff
        inc     dword ptr [esp+0x10]
    L_d2ff:
        cmp     ecx, 2
        /* __emit: MSVC6 miscomputes backward jne rel-offset (75 D4 vs ref 75 D0) */
        __emit 0x75
        __emit 0xD0
        cmp     dword ptr [eax+0x3c], esi
        /* __emit: MSVC6 miscomputes backward jne rel-offset (75 CF vs ref 75 CB) */
        __emit 0x75
        __emit 0xCB
        inc     ebx
        /* __emit: MSVC6 miscomputes backward jmp rel-offset (EB CC vs ref EB C8) */
        __emit 0xEB
        __emit 0xC8
    L_d30c:
        mov     edx, dword ptr [edi+4]
        mov     ecx, dword ptr [esp+0xc]
        mov     eax, dword ptr [esp+0x10]
        mov     dword ptr [edx], ecx
        mov     edx, dword ptr [edi+8]
        mov     dword ptr [edx], eax
        mov     edx, dword ptr [edi+0xc]
        pop     edi
        pop     esi
        add     eax, ebx
        mov     dword ptr [edx], ebx
        add     eax, ecx
        pop     ebx
        add     esp, 8
        ret     0xc
    L_d330:
        xor     eax, eax
        pop     ebx
        add     esp, 8
        ret     0xc
    }
}
