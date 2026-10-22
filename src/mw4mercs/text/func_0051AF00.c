/*
 * data_0051aa7d.c block (util) -- 322 bytes. Three accessor methods that
 * dereference a global object (0x7dab44), XOR a pointer with a key
 * (0x7dab40) and a magic constant (0x85739531), then read fields at various
 * offsets. The third walks a nested structure and combines several fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void FUN_0051AF00(void)
{
    __asm {
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L51AF3B
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x24]
        test    esi, esi
        pop     esi
        je      L51AF3B
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x24]
        mov     eax, dword ptr [ecx + 0x28]
L51AF3B:
        ret     0xc
        nop
        nop
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L51AF7B
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x24]
        test    esi, esi
        pop     esi
        je      L51AF7B
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x24]
        mov     eax, dword ptr [ecx + 0x14]
L51AF7B:
        ret     0xc
        nop
        nop
        mov     ecx, dword ptr [g_7dab44]
        mov     ecx, dword ptr [ecx]
        push    ebx
        xor     ecx, dword ptr [g_7dab40]
        mov     ebx, dword ptr [ecx + 0x44]
        push    ebp
        push    esi
        add     ecx, 0x44
        push    edi
        xor     esi, esi
        xor     edi, edi
        xor     eax, eax
        xor     edx, edx
        xor     ebx, 0x85739531
        je      L51B035
        mov     ebx, dword ptr [ecx]
        xor     ebx, 0x85739531
        mov     ebp, dword ptr [ebx + 0x24]
        test    ebp, ebp
        je      L51AFE4
        mov     eax, dword ptr [ecx]
        mov     esi, dword ptr [ecx]
        mov     edi, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x24]
        mov     eax, dword ptr [eax + 0x14]
        xor     esi, 0x85739531
        mov     esi, dword ptr [esi + 0x24]
        mov     esi, dword ptr [esi + 0x10]
        xor     edi, 0x85739531
        mov     edi, dword ptr [edi + 0x24]
        mov     edi, dword ptr [edi + 0x1c]
L51AFE4:
        mov     ebx, dword ptr [ecx]
        xor     ebx, 0x85739531
        mov     ebp, dword ptr [ebx + 0x34]
        test    ebp, ebp
        je      L51B035
        mov     ebx, dword ptr [ecx]
        xor     ebx, 0x85739531
        mov     ebx, dword ptr [ebx + 0x34]
        mov     ebp, dword ptr [ebx + 0x48]
        test    ebp, ebp
        je      L51B035
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x34]
        mov     ecx, dword ptr [edx + 0x48]
        mov     edx, dword ptr [ecx + 0x50]
        cmp     edx, 0xa
        jge     L51B02F
        mov     edx, dword ptr [ecx + edx*4 + 0xb4]
        sub     eax, edx
        sub     eax, esi
        add     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
L51B02F:
        mov     edx, dword ptr [ecx + 0xb4]
L51B035:
        sub     eax, edx
        sub     eax, esi
        add     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
