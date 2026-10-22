/*
 * FUN_0069A9D0 (504 B) — __thiscall linked-list node insertion/update.
 * Walks a list comparing keys via FUN_0069A7D0, inserts new nodes
 * (alloc 0x28 via FUN_004084D0, init via FUN_0069ACF0), maintains
 * head/tail/next pointers, bumps count at [ebx+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0069A7D0(void);
extern void __cdecl FUN_0069A760(void);
extern void __cdecl FUN_0069AC00(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_0069ACF0(void);
extern void __cdecl FUN_00411670(void);
extern void __cdecl FUN_004114B0(void);
extern void __cdecl FUN_0069ACB0(void);
extern void __cdecl FUN_0069ACD0(void);

__declspec(naked) void FUN_0069A9D0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx]
        push    edi
        mov     edi, dword ptr [ebp + 4]
        test    edi, edi
        mov     esi, ebp
        mov     al, 1
        je      L_69AA28
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [eax + 4]
        mov     edx, dword ptr [eax]
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], edx
L_69A9F7:
        mov     eax, dword ptr [edi + 0x14]
        mov     ecx, dword ptr [edi + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        push    eax
        mov     esi, edi
        call    FUN_0069A7D0
        add     esp, 0x10
        test    eax, eax
        setl    al
        test    al, al
        je      L_69AA21
        mov     edi, dword ptr [edi + 8]
        jmp     L_69AA24
L_69AA21:
        mov     edi, dword ptr [edi + 0xc]
L_69AA24:
        test    edi, edi
        jne     L_69A9F7
L_69AA28:
        test    al, al
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], ecx
        je      L_69AAEA
        cmp     esi, dword ptr [ebp + 8]
        jne     L_69AAD9
        cmp     esi, ebp
        je      L_69AA75
        test    edi, edi
        jne     L_69AA75
        mov     edi, dword ptr [esp + 0x28]
        lea     ecx, [esi + 0x10]
        push    ecx
        push    edi
        call    FUN_0069A760
        add     esp, 8
        test    al, al
        jne     L_69AA75
        push    edi
        mov     ecx, ebx
        call    FUN_0069AC00
        mov     ebp, dword ptr [ebx]
        mov     edi, eax
        mov     dword ptr [esi + 0xc], edi
        cmp     esi, dword ptr [ebp + 0xc]
        jne     L_69AAA6
        mov     dword ptr [ebp + 0xc], edi
        jmp     L_69AAA6
L_69AA75:
        push    0x28
        call    FUN_004084D0
        mov     edx, dword ptr [esp + 0x2c]
        mov     edi, eax
        push    edx
        lea     eax, [edi + 0x10]
        push    eax
        call    FUN_0069ACF0
        add     esp, 0xc
        cmp     esi, ebp
        mov     dword ptr [esi + 8], edi
        jne     L_69AA9E
        mov     dword ptr [ebp + 4], edi
        mov     dword ptr [ebp + 0xc], edi
        jmp     L_69AAA6
L_69AA9E:
        cmp     esi, dword ptr [ebp + 8]
        jne     L_69AAA6
        mov     dword ptr [ebp + 8], edi
L_69AAA6:
        add     ebp, 4
        xor     eax, eax
        push    ebp
        push    edi
        mov     dword ptr [edi + 4], esi
        mov     dword ptr [edi + 8], eax
        mov     dword ptr [edi + 0xc], eax
        call    FUN_00411670
        mov     eax, dword ptr [ebx + 4]
        add     esp, 8
        inc     eax
        mov     dword ptr [ebx + 4], eax
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [eax + 4], 1
        pop     ebx
        add     esp, 0x10
        ret     8
L_69AAD9:
        lea     ecx, [esp + 0x10]
        push    ecx
        call    FUN_004114B0
        mov     ecx, dword ptr [esp + 0x14]
        add     esp, 4
L_69AAEA:
        mov     eax, dword ptr [esp + 0x28]
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [ecx + 0x14]
        push    eax
        mov     eax, dword ptr [ecx + 0x10]
        push    edx
        push    eax
        call    FUN_0069A7D0
        add     esp, 0x10
        test    eax, eax
        jge     L_69AB98
        cmp     esi, ebp
        je      L_69AB43
        test    edi, edi
        jne     L_69AB43
        mov     edi, dword ptr [esp + 0x28]
        lea     ecx, [esi + 0x10]
        push    ecx
        push    edi
        call    FUN_0069A760
        add     esp, 8
        test    al, al
        jne     L_69AB43
        push    edi
        mov     ecx, ebx
        call    FUN_0069AC00
        mov     edi, eax
        mov     eax, dword ptr [ebx]
        mov     dword ptr [esi + 0xc], edi
        cmp     esi, dword ptr [eax + 0xc]
        jne     L_69AB6A
        mov     dword ptr [eax + 0xc], edi
        jmp     L_69AB6A
L_69AB43:
        mov     edx, dword ptr [esp + 0x28]
        push    edx
        mov     ecx, ebx
        call    FUN_0069AC00
        mov     edi, eax
        mov     eax, dword ptr [ebx]
        cmp     esi, eax
        mov     dword ptr [esi + 8], edi
        jne     L_69AB62
        mov     dword ptr [eax + 4], edi
        mov     dword ptr [eax + 0xc], edi
        jmp     L_69AB6A
L_69AB62:
        cmp     esi, dword ptr [eax + 8]
        jne     L_69AB6A
        mov     dword ptr [eax + 8], edi
L_69AB6A:
        add     eax, 4
        xor     ecx, ecx
        push    eax
        push    edi
        mov     dword ptr [edi + 4], esi
        mov     dword ptr [edi + 8], ecx
        mov     dword ptr [edi + 0xc], ecx
        call    FUN_00411670
        mov     edx, dword ptr [ebx + 4]
        add     esp, 8
        inc     edx
        mov     dword ptr [ebx + 4], edx
        mov     dword ptr [esp + 0x18], edi
        mov     byte ptr [esp + 0x1c], 1
        lea     eax, [esp + 0x18]
        jmp     L_69ABB0
L_69AB98:
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        lea     ecx, [esp + 0x20]
        mov     byte ptr [esp + 0x30], 0
        call    FUN_0069ACB0
L_69ABB0:
        mov     esi, dword ptr [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_0069ACD0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     8
    }
}
