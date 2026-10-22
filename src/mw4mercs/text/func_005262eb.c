/*
 * FUN_005262EB (462 B) — in-.text data block: 5 nop pad + one __stdcall
 * (RET 0xc) function at 0x262F0. Frees three buffers (FUN_006f4230),
 * reallocates 0x100-byte buffers (FUN_006f3c80), initializes string
 * objects (FUN_0040dca0 / FUN_0040ecc0 / FUN_0040edc0), copies strings
 * from the object at g_7dd268+0x40ee8 (repne scasb / rep movsd / rep
 * movsb), and conditionally parses via FUN_00411bf0 + IAT g_76b318.
 * Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_0040edc0(void);
extern int  g_7dd268;
extern void __cdecl FUN_00411bf0(void);
extern int  *g_76b318;   /* IAT fn ptr */
extern void __cdecl FUN_0040e4a0(void);
extern void __cdecl FUN_0040de20(void);

__declspec(naked) void __stdcall FUN_005262EB(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        /* --- fn @ 0x262F0 --- */
        sub     esp, 0x64
        mov     eax, dword ptr [esp + 0x70]
        mov     ecx, dword ptr [eax + 8]
        mov     edx, dword ptr [eax + 0x10]
        push    ebx
        mov     ebx, dword ptr [eax + 4]
        push    ebp
        mov     ebp, dword ptr [eax + 0xc]
        push    esi
        mov     esi, dword ptr [eax]
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [eax + 0x24]
        mov     eax, dword ptr [eax + 0x28]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esi]
        test    eax, eax
        push    edi
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x80], edx
        je      L_33b
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
    L_33b:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        je      L_34d
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0
    L_34d:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        je      L_361
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], 0
    L_361:
        push    0
        push    0x100
        call    FUN_006f3c80
        push    0
        push    0x100
        mov     dword ptr [esi], eax
        call    FUN_006f3c80
        push    0
        push    0x100
        mov     dword ptr [ebx], eax
        call    FUN_006f3c80
        push    1
        push    0
        mov     edi, eax
        push    0x77826c
        lea     ecx, [esp + 0x30]
        mov     dword ptr [ebp], edi
        call    FUN_0040dca0
        push    0x778278
        lea     ecx, [esp + 0x28]
        call    FUN_0040ecc0
        test    eax, eax
        jne     L_3c0
        push    0x778278
        lea     ecx, [esp + 0x28]
        call    FUN_0040edc0
    L_3c0:
        mov     ebp, dword ptr [g_7dd268]
        mov     eax, dword ptr [ebp + 0x40ee8]
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [ebx]
        mov     byte ptr [edi], 0
        mov     edi, dword ptr [eax + 0x60]
        test    edi, edi
        mov     byte ptr [edx], 0
        mov     byte ptr [ecx], 0
        je      L_3fd
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
    L_3fd:
        mov     ecx, dword ptr [ebp + 0x40ee8]
        mov     edi, dword ptr [ecx + 0x64]
        test    edi, edi
        je      L_427
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [ebx]
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
    L_427:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax], 0
        mov     eax, dword ptr [ebp + 0x40ee8]
        mov     ecx, dword ptr [eax + 0x54]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [eax + 0x58]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [eax + 0x7c]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [ecx], eax
        push    0x778288
        lea     ecx, [esp + 0x28]
        call    FUN_0040ecc0
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        je      L_495
        push    0
        lea     edx, [esp + 0x14]
        push    edx
        push    0x7782ec
        mov     ecx, eax
        call    FUN_00411bf0
        test    al, al
        je      L_495
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    dword ptr [g_76b318]
        mov     ecx, dword ptr [esp + 0x74]
        add     esp, 4
        mov     dword ptr [ecx], eax
        jmp     L_49f
    L_495:
        mov     edx, dword ptr [esp + 0x70]
        mov     dword ptr [edx], 0
    L_49f:
        lea     ecx, [esp + 0x14]
        call    FUN_0040e4a0
        lea     ecx, [esp + 0x14]
        call    FUN_0040de20
        xor     eax, eax
        add     esp, 0x64
        ret     0xc
    }
}
