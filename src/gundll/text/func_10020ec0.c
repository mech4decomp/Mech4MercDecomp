/*
 * FUN_10020EC0 (340 B) - __stdcall, RET 0x10.  Registration helper that
 * builds a multi-GUID/name registration via FUN_1001c7a0 / FUN_1002af80 /
 * FUN_1001c660 / FUN_1002def0, storing a computed offset into the caller's
 * out-pointer, and frees temporary handles via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __stdcall FUN_1002def0(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10020EC0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    esi
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x1004a834
        push    ebp
        push    ebx
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L_fe4
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebx + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x30], eax
        lea     ebp, [ebp + eax*2]
        sub     edi, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_fe4
        mov     ecx, dword ptr [ebx + 0x24]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_fe4
        mov     edx, dword ptr [ebx + 0x28]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        push    0x10049d00
        push    eax
        push    0x10049cf8
        push    ecx
        push    0x10049cec
        push    0x10050e6c
        lea     edx, [esp + 0x2c]
        push    edx
        push    edi
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x28
        test    esi, esi
        jl      L_fe4
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x28]
        add     esi, eax
        lea     ebp, [ebp + eax*2]
        sub     edi, eax
        mov     eax, dword ptr [ebx + 0x2c]
        push    eax
        push    0x10049e48
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edi
        push    ebp
        mov     dword ptr [esp + 0x3c], esi
        call    FUN_1002def0
        mov     esi, eax
        test    esi, esi
        jl      L_fe4
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x28]
        push    0x1004a834
        push    0x10050244
        lea     edx, [esp + 0x18]
        push    edx
        sub     edi, eax
        lea     ebp, [ebp + eax*2]
        add     ecx, eax
        push    edi
        push    ebp
        mov     dword ptr [esp + 0x3c], ecx
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x14
        test    esi, esi
        jl      L_fe4
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x2c]
        add     ecx, eax
        mov     dword ptr [edx], ecx
L_fe4:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ebx + 0x20]
        je      L_ff6
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_ff6:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [ebx + 0x24]
        je      L_1008
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_1008:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}
