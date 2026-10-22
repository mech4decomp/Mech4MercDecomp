/*
 * FUN_1000D470 (331 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001c7a0 / FUN_1002af80 / FUN_1001c660 / FUN_1002e090 /
 * FUN_1001c660, advancing buffer pointers (ebp/edi/ecx) by parsed counts.
 * On success stores the final pointer into *out (+0x28).  Frees a temp
 * buffer via FUN_10001d60 when it differs from ebx->+0x28.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_1002e090(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1000D470(void)
{
    __asm {
        sub     esp, 8
        mov     ecx, dword ptr [esp + 0x10]
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x10049ecc
        push    ecx
        xor     ebp, ebp
        push    ebx
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x24], ebp
        call    FUN_1001c7a0
        mov     esi, eax
        cmp     esi, ebp
        jl      L_d59d
        mov     ebp, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x20]
        lea     eax, [edx + ebp*2]
        mov     edx, dword ptr [ebx + 0x28]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x28], eax
        sub     edi, ebp
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_d59d
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ebx + 0x20]
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        push    0x10049b2c
        push    ecx
        push    0x10049b34
        push    0x1005026c
        lea     edx, [esp + 0x24]
        push    edx
        push    edi
        push    eax
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x20
        test    esi, esi
        jl      L_d59d
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebx + 0x24]
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        lea     ecx, [ecx + eax*2]
        sub     edi, eax
        push    0x10049da0
        add     ebp, eax
        lea     eax, [esp + 0x18]
        push    eax
        push    edi
        push    ecx
        mov     dword ptr [esp + 0x34], ecx
        call    FUN_1002e090
        mov     esi, eax
        test    esi, esi
        jl      L_d59d
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebx + 0x2c]
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        lea     ecx, [ecx + eax*2]
        sub     edi, eax
        push    0x10049d90
        add     ebp, eax
        lea     eax, [esp + 0x18]
        push    eax
        push    edi
        push    ecx
        mov     dword ptr [esp + 0x34], ecx
        call    FUN_1002e090
        mov     esi, eax
        test    esi, esi
        jl      L_d59d
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x20]
        push    0x10049ecc
        push    0x10050244
        lea     edx, [esp + 0x18]
        push    edx
        sub     edi, eax
        lea     ecx, [ecx + eax*2]
        push    edi
        push    ecx
        add     ebp, eax
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x14
        test    esi, esi
        jl      L_d59d
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x28]
        add     ebp, eax
        mov     dword ptr [ecx], ebp
L_d59d:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ebx + 0x28]
        je      L_d5af
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_d5af:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
