/*
 * data_0061dc77.c block (gameplay) -- 307 bytes. Vector/array grow-and-fill
 * helper: reallocates a pointer array (via FUN_006F3C80 / FUN_004084D0),
 * copies old elements, zero-fills the new region, with an error-log fallback
 * (FUN_00562F10) when the allocation fails.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8058b8;
extern void __cdecl FUN_006F3C80(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_0061EF00(void);
extern void __cdecl FUN_004084E0(void);
extern char g_78c958[];
extern void __cdecl FUN_00562F10(void);

__declspec(naked) void FUN_0061DC80(void)
{
    __asm {
        sub     esp, 0xc
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        test    edi, edi
        je      L61DDAC
        push    ebx
        mov     ebx, dword ptr [g_8058b8]
        mov     eax, dword ptr [ebx + 0xc]
        test    eax, eax
        push    esi
        je      L61DDA8
        push    eax
        lea     eax, [edi + edi*2 + 3]
        shl     eax, 2
        push    eax
        call    FUN_006F3C80
        mov     esi, dword ptr [ebx + 0x14]
        cmp     esi, dword ptr [ebx + 0x18]
        mov     dword ptr [esp + 0xc], eax
        je      L61DCCE
        test    esi, esi
        je      L61DCC3
        mov     dword ptr [esi], eax
L61DCC3:
        add     esi, 4
        mov     dword ptr [ebx + 0x14], esi
        jmp     L61DD71
L61DCCE:
        mov     edi, dword ptr [ebx + 0x10]
        mov     eax, esi
        sub     eax, edi
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jb      L61DCF1
        lea     ecx, [esp + 0x14]
L61DCF1:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        push    ebp
        mov     dword ptr [esp + 0x18], ecx
        je      L61DD0C
        shl     ecx, 2
        push    ecx
        call    FUN_004084D0
        add     esp, 4
        mov     ebp, eax
        jmp     L61DD0E
L61DD0C:
        xor     ebp, ebp
L61DD0E:
        mov     edx, dword ptr [esp + 0x20]
        push    0
        push    edx
        push    ebp
        push    esi
        push    edi
        call    FUN_0061EF00
        add     esp, 0x14
        test    eax, eax
        je      L61DD2A
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax], ecx
L61DD2A:
        mov     ecx, esi
        sub     ecx, esi
        add     eax, 4
        sar     ecx, 2
        test    ecx, ecx
        mov     edi, eax
        jle     L61DD47
        sub     esi, eax
L61DD3C:
        mov     edx, dword ptr [esi + edi]
        mov     dword ptr [edi], edx
        add     edi, 4
        dec     ecx
        jne     L61DD3C
L61DD47:
        mov     eax, dword ptr [ebx + 0x10]
        test    eax, eax
        je      L61DD57
        push    eax
        call    FUN_004084E0
        add     esp, 4
L61DD57:
        mov     eax, dword ptr [esp + 0x18]
        lea     ecx, [ebp + eax*4]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [ebx + 0x10], ebp
        mov     dword ptr [ebx + 0x14], edi
        mov     edi, dword ptr [esp + 0x20]
        mov     dword ptr [ebx + 0x18], ecx
        pop     ebp
L61DD71:
        test    eax, eax
        mov     esi, eax
        jne     L61DD86
L61DD77:
        push    offset g_78c958
        push    0
        call    FUN_00562F10
        add     esp, 8
L61DD86:
        lea     ecx, [edi + edi*2 + 3]
        shl     ecx, 2
        mov     edx, ecx
        shr     ecx, 2
        xor     eax, eax
        mov     edi, esi
        rep     stosd
        mov     ecx, edx
        and     ecx, 3
        rep     stosb
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     edi
        add     esp, 0xc
        ret
L61DDA8:
        xor     esi, esi
        jmp     L61DD77
L61DDAC:
        xor     eax, eax
        pop     edi
        add     esp, 0xc
        ret
    }
}
