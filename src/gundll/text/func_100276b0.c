/*
 * FUN_100276B0 (230 B) - __stdcall, RET 0x10.  Parses/registers strings
 * via FUN_1001c7a0 / FUN_1002af80 (x2) / FUN_1001c660, advancing a buffer
 * pointer (ebp += count*2) and count (ebx -= count).  On success stores
 * the resulting pointer into *arg4 (arg3 + count).  Frees temp buffers via
 * FUN_10001d60 when they differ from edi->+0x24/+0x28.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_100276B0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [esp + 0x1c]
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    esi
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x1004a4e8
        push    ebp
        push    edi
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L_7766
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x24]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x30], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_7766
        mov     ecx, dword ptr [edi + 0x28]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_7766
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x20]
        push    edx
        push    0x10049ccc
        push    eax
        push    0x10049b60
        push    ecx
        push    0x10049bf8
        push    0x100504e0
        lea     edx, [esp + 0x2c]
        push    edx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x28
        test    esi, esi
        jl      L_7766
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x2c]
        add     ecx, eax
        mov     dword ptr [edx], ecx
L_7766:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x24]
        je      L_7778
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_7778:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [edi + 0x28]
        je      L_778a
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_778a:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}
