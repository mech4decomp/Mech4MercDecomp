/*
 * FUN_10023CA0 (111 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001c7a0 / FUN_1001c660, advancing buffer pointers (ecx/esi)
 * by the parsed count.  On success stores the final pointer into *out
 * (+0x24).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);
extern void __cdecl FUN_1001c660(void);

__declspec(naked) void __stdcall FUN_10023CA0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    0x1004a754
        push    edi
        push    ebx
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c7a0
        test    eax, eax
        jl      L_d307
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebx + 0x20]
        push    edx
        push    0x10049bc4
        lea     ecx, [edi + eax*2]
        sub     esi, eax
        mov     ebp, eax
        push    0x10050298
        lea     eax, [esp + 0x1c]
        push    eax
        push    esi
        push    ecx
        call    FUN_1001c660
        add     esp, 0x18
        test    eax, eax
        jl      L_d307
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     ebp, ecx
        mov     dword ptr [edx], ebp
L_d307:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
