/*
 * FUN_1001a470 (176 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001c920 / FUN_1001c660 / FUN_1002dcf0 / FUN_1001c660,
 * advancing buffer pointers (ebx/esi) and count (edi) by parsed counts.
 * On success stores the final pointer into *out (+0x24).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c920(void);
extern void __cdecl FUN_1001c660(void);
extern void __stdcall FUN_1002dcf0(void);

__declspec(naked) void __stdcall FUN_1001a470(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    0x1004a604
        push    ebx
        push    ebp
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c920
        test    eax, eax
        jl      L_done
        mov     edi, dword ptr [esp + 0x10]
        push    0x100502fc
        lea     ecx, [esp + 0x14]
        push    ecx
        sub     esi, edi
        lea     ebx, [ebx + edi*2]
        push    esi
        push    ebx
        call    FUN_1001c660
        add     esp, 0x10
        test    eax, eax
        jl      L_done
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebp + 0x24]
        push    edx
        lea     ebx, [ebx + eax*2]
        sub     esi, eax
        push    0x10049e34
        add     edi, eax
        lea     eax, [esp + 0x18]
        push    eax
        push    esi
        push    ebx
        call    FUN_1002dcf0
        test    eax, eax
        jl      L_done
        mov     eax, dword ptr [esp + 0x10]
        push    0x1004a604
        push    0x10050244
        lea     edx, [esp + 0x18]
        push    edx
        sub     esi, eax
        lea     ecx, [ebx + eax*2]
        push    esi
        push    ecx
        add     edi, eax
        call    FUN_1001c660
        add     esp, 0x14
        test    eax, eax
        jl      L_done
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     edi, ecx
        mov     dword ptr [edx], edi
    L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
