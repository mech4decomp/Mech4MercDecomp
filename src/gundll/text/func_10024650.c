/*
 * FUN_10024650 (129 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001c7a0 / FUN_1001c660, advancing buffer pointers (ecx/edi)
 * by the parsed count and building a multi-GUID registration from
 * this->+0x20/+0x24/+0x28.  On success stores the final pointer into *out
 * (+0x24).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);
extern void __cdecl FUN_1001c660(void);

__declspec(naked) void __stdcall FUN_10024650(void)
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
        push    0x1004a808
        push    ebx
        push    esi
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c7a0
        test    eax, eax
        jl      L_46c9
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi + 0x28]
        push    edx
        mov     edx, dword ptr [esi + 0x20]
        push    0x10049ea8
        lea     ecx, [ebx + eax*2]
        sub     edi, eax
        mov     ebp, eax
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        push    0x10049ea0
        push    edx
        push    0x10049bc8
        push    0x10050300
        lea     eax, [esp + 0x2c]
        push    eax
        push    edi
        push    ecx
        call    FUN_1001c660
        add     esp, 0x28
        test    eax, eax
        jl      L_46c9
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     ebp, ecx
        mov     dword ptr [edx], ebp
L_46c9:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
