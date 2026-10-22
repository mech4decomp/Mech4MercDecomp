/*
 * FUN_10011A90 (196 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001c920 / FUN_1001c660 / FUN_1002c3f0 / FUN_1001c660, advancing
 * buffer pointers (ebp += count*2, esi -= count, ebx += count).  On success
 * stores the accumulated count into *arg1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c920(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern void __cdecl FUN_1002c3f0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10011A90(void)
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
        push    0x1004a058
        push    ebp
        push    edi
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c920
        test    eax, eax
        jl      L_11b4c
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
        jl      L_11b4c
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [edi + 0x28]
        lea     ebp, [ebp + eax*2]
        sub     esi, eax
        add     ebx, eax
        mov     eax, dword ptr [edi + 0x24]
        push    eax
        push    ecx
        push    0x10049df4
        lea     edx, [esp + 0x1c]
        push    edx
        push    esi
        push    ebp
        call    FUN_1002c3f0
        test    eax, eax
        jl      L_11b4c
        mov     eax, dword ptr [esp + 0x10]
        push    0x1004a058
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
        jl      L_11b4c
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     ebx, ecx
        mov     dword ptr [edx], ebx
L_11b4c:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
