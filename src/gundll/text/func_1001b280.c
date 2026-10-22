/*
 * FUN_1001b280 (332 B) — __thiscall, RET 0x8. Hash-list insert/lookup.
 * CFLAGS: /O1
 */

extern int g_10055050;
extern void __cdecl FUN_1001b200(void);
extern void __cdecl FUN_10001d50(void);
extern void __cdecl FUN_1001b150(void);
extern void __cdecl FUN_1001b180(void);
extern void __cdecl FUN_1000c410(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_1001b280(void)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    dword ptr [esi + 0xc]
        and     ax, word ptr [esi + 0x2]
        mov     ecx, dword ptr [esi + 0x4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 0x4
        mov     ebx, dword ptr [edi + ecx*0x1]
        add     edi, ecx
        xor     ecx, ecx
        cmp     ebx, edi
        mov     dword ptr [esp + 0x14], ecx
        jz      Lb2e9
        nop
    Lb2b0:
        mov     eax, dword ptr [ebx + 0xc]
        test    eax, eax
        js      Lb2cf
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ebx + 0x8]
        push    ecx
        push    eax
        mov     dword ptr [esp + 0x18], eax
        call    dword ptr [esi + 0x8]
        test    al, al
        jnz     Lb2d7
        mov     ecx, dword ptr [esp + 0x14]
    Lb2cf:
        mov     ebx, dword ptr [ebx]
        cmp     ebx, edi
        jnz     Lb2b0
        jmp     Lb2e9
    Lb2d7:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      Lb2e5
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    eax
    Lb2e5:
        mov     ecx, dword ptr [esp + 0x10]
    Lb2e9:
        test    ecx, ecx
        mov     edi, ecx
        jz      Lb30d
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        call    FUN_1001b200
        mov     ebp, eax
        test    ebp, ebp
        jl      Lb3b7
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x8
    Lb30d:
        push    0x184
        call    FUN_10001d50
        add     esp, 0x4
        test    eax, eax
        jz      Lb329
        mov     ecx, eax
        call    FUN_1001b150
        mov     ebx, eax
        jmp     Lb32b
    Lb329:
        xor     ebx, ebx
    Lb32b:
        test    ebx, ebx
        mov     edi, ebx
        mov     dword ptr [esp + 0x14], edi
        jnz     Lb344
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x8007000e
        pop     ebx
        add     esp, 0x8
        ret     0x8
    Lb344:
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    FUN_1001b180
        mov     ebp, eax
        test    ebp, ebp
        jl      Lb3b7
        push    ebx
        call    dword ptr [esi + 0xc]
        and     ax, word ptr [esi + 0x2]
        xor     edi, edi
        mov     di, ax
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [esp + 0x1c], edi
        shl     edi, 0x4
        add     edi, eax
        mov     eax, dword ptr [g_10055050]
        push    eax
        call    FUN_1000c410
        test    eax, eax
        jz      Lb3ae
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax + 0x8], ebx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x4], edi
        mov     edx, dword ptr [edi]
        mov     dword ptr [eax], edx
        mov     dword ptr [edi], eax
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ecx + 0x4], eax
        mov     eax, dword ptr [esi + 0x24]
        inc     eax
        pop     edi
        mov     dword ptr [esi + 0x24], eax
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x8
    Lb3ae:
        mov     edi, dword ptr [esp + 0x14]
        mov     ebp, 0xc1120003
    Lb3b7:
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }
}
