/*
 * FUN_1002b140 (201 B) - __stdcall, RET 0x18. Loop over param_6 entries:
 * FUN_1002af80 per entry, FUN_10038141 to build output, frees via
 * FUN_10001d60, accumulates local_4 and adjusts pointers.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002af80(void);  /* __stdcall(2) rel32 call */
extern void __cdecl FUN_10038141(void);  /* __cdecl(6) rel32 call */
extern void __cdecl FUN_10001d60(void);  /* __cdecl(1) rel32 call */
extern char g_10049b5c[];   /* string */
extern char g_10051338[];   /* string */

__declspec(naked) void __stdcall FUN_1002b140(void)
{
    __asm {
        sub     esp, 8
        mov     ecx, dword ptr [esp + 0x20]
        push    ebx
        push    ebp
        push    esi
        xor     eax, eax
        push    edi
        xor     edi, edi
        cmp     ecx, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        jbe     L_b1e6
        mov     ebp, dword ptr [esp + 0x1c]
L_b163:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [ecx + edi*4]
        lea     eax, [esp + 0x10]
        push    eax
        push    edx
        call    FUN_1002af80
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jl      L_b1f0
        mov     ebx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x20]
        push    ebx
        push    offset g_10049b5c
        push    eax
        push    offset g_10051338
        push    ecx
        push    ebp
        call    FUN_10038141
        mov     edx, dword ptr [esp + 0x44]
        mov     esi, eax
        mov     eax, dword ptr [edx + edi*4]
        add     esp, 0x18
        cmp     eax, ebx
        jz      L_b1b5
        push    ebx
        call    FUN_10001d60
        add     esp, 4
L_b1b5:
        test    esi, esi
        mov     dword ptr [esp + 0x10], 0
        jl      L_b1fa
        mov     ebx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x30]
        add     ebx, esi
        sub     edx, esi
        inc     edi
        cmp     edi, eax
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x20], edx
        lea     ebp, [ebp + esi*2]
        jc      L_b163
        mov     eax, dword ptr [esp + 0x1c]
L_b1e6:
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx], edx
L_b1f0:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x18
L_b1fa:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120002
        pop     ebx
        add     esp, 8
        ret     0x18
    }
}
