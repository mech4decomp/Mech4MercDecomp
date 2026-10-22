/*
 * FUN_100124A0 (120 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001c920 / FUN_1001c660, advancing buffer pointers (ebx/esi)
 * by parsed counts.  On success stores the final pointer into *arg4.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c920(void);
extern void __cdecl FUN_1001c660(void);

__declspec(naked) void __stdcall FUN_100124A0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    0x1004a15c
        push    ebx
        push    edi
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c920
        test    eax, eax
        jl      L_12510
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x28]
        push    edx
        push    0x10049be0
        lea     ecx, [ebx + eax*2]
        sub     esi, eax
        mov     ebp, eax
        mov     eax, dword ptr [edi + 0x24]
        push    eax
        push    0x10049bd4
        push    0x10050368
        lea     edx, [esp + 0x24]
        push    edx
        push    esi
        push    ecx
        call    FUN_1001c660
        add     esp, 0x20
        test    eax, eax
        jl      L_12510
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     ebp, ecx
        mov     dword ptr [edx], ebp
L_12510:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
