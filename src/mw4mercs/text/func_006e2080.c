/* FUN_006e2080 - 199 bytes, __thiscall, RET */
extern void *g_0076b0f0;
extern void *g_0076b0f4;
extern void *g_0076b0ec;
extern void *g_0076b10c;
extern int g_00840850;
extern void __cdecl FUN_006e29e0(void);
extern void __cdecl FUN_006e1e40(void *);
__declspec(naked) void FUN_006e2080(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x38]
        test    al, al
        jz      L_e213b
        push    ebx
        push    ebp
        push    edi
        mov     edi, dword ptr [esi + 0x30]
        xor     ebx, ebx
        push    ebx
        push    0x1
        push    edi
        mov     dword ptr [g_00840850], ebx
        call    dword ptr [g_0076b0f0]
        mov     ebp, dword ptr [esi + 0xc]
        push    -0x1
        push    ebp
        call    dword ptr [g_0076b0f4]
        push    edi
        mov     edi, dword ptr [g_0076b0ec]
        call    edi
        mov     eax, dword ptr [esi + 0x2c]
        push    eax
        call    edi
        push    ebp
        call    edi
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, ebx
        jz      L_e20ce
        push    eax
        call    edi
    L_e20ce:
        mov     ecx, dword ptr [esi]
        cmp     ecx, ebx
        mov     dword ptr [esi + 0x34], ebx
        jz      L_e2108
        mov     eax, dword ptr [ecx + -0x4]
        lea     ebx, [ecx + -0x4]
        lea     edx, [eax*0x8 + 0x0]
        sub     edx, eax
        lea     edx, [eax + edx*0x4]
        dec     eax
        lea     edi, [ecx + edx*0x4]
        js      L_e20ff
        lea     ebp, [eax + 0x1]
    L_e20f2:
        sub     edi, 0x74
        mov     ecx, edi
        call    FUN_006e29e0
        dec     ebp
        jne     L_e20f2
    L_e20ff:
        push    ebx
        call    FUN_006e1e40
        add     esp, 0x4
    L_e2108:
        mov     ecx, dword ptr [esi + 0x40]
        test    ecx, ecx
        jz      L_e2134
        mov     eax, dword ptr [ecx + -0x4]
        lea     ebx, [ecx + -0x4]
        lea     edi, [ecx + eax*0x8]
        dec     eax
        js      L_e212b
        lea     ebp, [eax + 0x1]
    L_e211e:
        sub     edi, 0x8
        mov     ecx, edi
        call    FUN_006e29e0
        dec     ebp
        jne     L_e211e
    L_e212b:
        push    ebx
        call    FUN_006e1e40
        add     esp, 0x4
    L_e2134:
        pop     edi
        pop     ebp
        mov     byte ptr [esi + 0x38], 0x0
        pop     ebx
    L_e213b:
        add     esi, 0x14
        push    esi
        call    dword ptr [g_0076b10c]
        pop     esi
        ret
    }
}
