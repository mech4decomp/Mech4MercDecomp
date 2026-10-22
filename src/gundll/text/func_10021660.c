/*
 * FUN_10021660 (129 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001c920 / FUN_1001c660, advancing buffer pointers (ebx/edi) by
 * parsed counts, then stores the final pointer into *out.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c920(void);
extern void __cdecl FUN_1001c660(void);

__declspec(naked) void __stdcall FUN_10021660(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x1004a85c
        push    ebx
        push    esi
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c920
        test    eax, eax
        jl      L_16d9
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi + 0x2c]
        push    edx
        mov     edx, dword ptr [esi + 0x24]
        push    0x10049ca4
        lea     ecx, [ebx + eax*2]
        sub     edi, eax
        mov     ebp, eax
        mov     eax, dword ptr [esi + 0x28]
        push    eax
        push    0x10049eb4
        push    edx
        push    0x10049eb0
        push    0x10050300
        lea     eax, [esp + 0x2c]
        push    eax
        push    edi
        push    ecx
        call    FUN_1001c660
        add     esp, 0x28
        test    eax, eax
        jl      L_16d9
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     ebp, ecx
        mov     dword ptr [edx], ebp
L_16d9:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
