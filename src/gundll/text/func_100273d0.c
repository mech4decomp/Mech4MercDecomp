/*
 * FUN_100273D0 (111 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001c7a0 / FUN_1001c660, advancing a buffer pointer (edi +=
 * count*2) and count (esi -= count).  On success stores the resulting
 * pointer into *arg4 (arg1 + count).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);
extern void __cdecl FUN_1001c660(void);

__declspec(naked) void __stdcall FUN_100273D0(void)
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
        push    0x1004a4c4
        push    edi
        push    ebx
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c7a0
        test    eax, eax
        jl      L_7437
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebx + 0x20]
        push    edx
        push    0x10049bf8
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
        jl      L_7437
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     ebp, ecx
        mov     dword ptr [edx], ebp
L_7437:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
