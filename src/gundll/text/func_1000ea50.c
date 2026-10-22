/*
 * FUN_1000ea50 (216 B) - __stdcall, RET 0x10.
 * Parses an event string via FUN_1001c7a0 / FUN_1001c660 / FUN_1002e090,
 * advancing a buffer, writes a result offset into arg4. Returns HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern void __cdecl FUN_1002e090(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1000ea50(void)
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
        push    0x10049f58
        push    ebx
        push    ebp
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c7a0
        test    eax, eax
        jl      Lb20
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
        jl      Lb20
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebp + 0x20]
        push    edx
        lea     ebx, [ebx + eax*2]
        sub     esi, eax
        push    0x10049dbc
        add     edi, eax
        lea     eax, [esp + 0x18]
        push    eax
        push    esi
        push    ebx
        call    FUN_1002e090
        test    eax, eax
        jl      Lb20
        mov     ecx, dword ptr [ebp + 0x24]
        mov     eax, dword ptr [esp + 0x10]
        push    ecx
        push    0x10049dc8
        lea     edx, [esp + 0x18]
        push    edx
        sub     esi, eax
        lea     ebx, [ebx + eax*2]
        push    esi
        push    ebx
        add     edi, eax
        call    FUN_1002e090
        test    eax, eax
        jl      Lb20
        mov     eax, dword ptr [esp + 0x10]
        push    0x10049f58
        lea     ebx, [ebx + eax*2]
        sub     esi, eax
        add     edi, eax
        push    0x10050244
        lea     eax, [esp + 0x18]
        push    eax
        push    esi
        push    ebx
        call    FUN_1001c660
        add     esp, 0x14
        test    eax, eax
        jl      Lb20
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     edi, ecx
        mov     dword ptr [edx], edi
    Lb20:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
