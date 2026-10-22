/*
 * FUN_10011FF0 (196 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001c920 / FUN_1001c660 / FUN_1002b140 / FUN_1001c660,
 * advancing buffer pointers (ebx/esi/ebp) by parsed counts.  On success
 * stores the final pointer into *arg4.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c920(void);
extern void __cdecl FUN_1001c660(void);
extern int __stdcall FUN_1002b140(int a, int b, void *c, int d, int e, int f);

__declspec(naked) void __stdcall FUN_10011FF0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    0x1004a0b8
        push    ebp
        push    edi
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c920
        test    eax, eax
        jl      L_120ac
        mov     ecx, dword ptr [edi + 0x24]
        mov     ebx, dword ptr [esp + 0x10]
        push    ecx
        push    0x10049c50
        push    0x10050254
        lea     edx, [esp + 0x1c]
        push    edx
        sub     esi, ebx
        lea     ebp, [ebp + ebx*2]
        push    esi
        push    ebp
        call    FUN_1001c660
        add     esp, 0x18
        test    eax, eax
        jl      L_120ac
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [edi + 0x28]
        lea     ebp, [ebp + eax*2]
        sub     esi, eax
        add     ebx, eax
        mov     eax, dword ptr [edi + 0x24]
        push    eax
        push    ecx
        push    0x10049ddc
        lea     edx, [esp + 0x1c]
        push    edx
        push    esi
        push    ebp
        call    FUN_1002b140
        test    eax, eax
        jl      L_120ac
        mov     eax, dword ptr [esp + 0x10]
        push    0x1004a0b8
        lea     ebp, [ebp + eax*2]
        sub     esi, eax
        add     ebx, eax
        push    0x10050244
        lea     eax, [esp + 0x18]
        push    eax
        push    esi
        push    ebp
        call    FUN_1001c660
        add     esp, 0x14
        test    eax, eax
        jl      L_120ac
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     ebx, ecx
        mov     dword ptr [edx], ebx
L_120ac:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
