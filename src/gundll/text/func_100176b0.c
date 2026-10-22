/*
 * FUN_100176B0 (178 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001c920 / FUN_1002af80 / FUN_1001c660, advancing buffer
 * pointers (ebp/ebx) by parsed counts.  On success stores the final
 * pointer into *arg4.  Frees a temp via FUN_10001d60 if it differs from
 * this->field_0x28.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c920(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_100176B0(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x1004a350
        push    ebp
        push    edi
        call    FUN_1001c920
        mov     esi, eax
        test    esi, esi
        jl      L_done
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x28]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_done
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x24]
        push    eax
        push    0x10049b60
        push    ecx
        push    0x10049bf8
        push    0x1005033c
        lea     edx, [esp + 0x24]
        push    edx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x20
        test    esi, esi
        jl      L_done
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        add     ecx, eax
        mov     dword ptr [edx], ecx
    L_done:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x28]
        je      L_skip
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L_skip:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
