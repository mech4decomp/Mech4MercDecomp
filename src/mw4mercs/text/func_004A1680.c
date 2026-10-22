/*
 * FUN_004A1680 (179 B) — resizes a 12-byte-element array, reallocating and
 * copying elements from a source array.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);

__declspec(naked) void FUN_004A1680(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    ebx
        push    esi
        mov     esi, ecx
        cmp     esi, eax
        push    edi
        je      L_172b
        mov     edi, dword ptr [eax+4]
        test    edi, edi
        jbe     L_1715
        mov     ebx, dword ptr [eax]
        cmp     edi, dword ptr [esi+4]
        je      L_16e8
        test    edi, edi
        jbe     L_16d7
        mov     eax, dword ptr [esi]
        test    eax, eax
        je      L_16b2
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_16b2:
        lea     eax, [edi+edi*2]
        shl     eax, 2
        push    eax
        mov     dword ptr [esi+4], edi
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_16d1
        dec     edi
        mov     dword ptr [esp+0x10], edi
        mov     dword ptr [esi], eax
        jmp     L_16e8
    L_16d1:
        xor     eax, eax
        mov     dword ptr [esi], eax
        jmp     L_16e8
    L_16d7:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
    L_16e8:
        mov     edx, dword ptr [esi+4]
        test    edx, edx
        jbe     L_172b
        mov     ecx, dword ptr [esi]
        lea     eax, [ebx+8]
    L_16f4:
        mov     edi, dword ptr [eax-8]
        mov     dword ptr [ecx], edi
        mov     edi, dword ptr [eax-4]
        mov     dword ptr [ecx+4], edi
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx+8], edi
        add     eax, 0xc
        add     ecx, 0xc
        dec     edx
        jne     L_16f4
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    L_1715:
        mov     eax, dword ptr [esi]
        test    eax, eax
        je      L_172b
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+4], 0
    L_172b:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    }
}
