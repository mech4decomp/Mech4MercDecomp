/*
 * FUN_005e16a0 (222 B) — Grid-search collision adjustment. __thiscall
 * (ECX = this), RET 0x8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_005df620(void);
extern int __cdecl FUN_005e14b0(void *a, int b, int c);

__declspec(naked) void __stdcall FUN_005e16a0(void *param_1, int param_2)
{
    

extern int DAT_0076d040;
extern int DAT_0076d598;
__asm {
sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        call    FUN_005df620
        mov     ebp, dword ptr [esp + 0x28]
        mov     esi, dword ptr [esp + 0x24]
        push    eax
        push    ebp
        push    esi
        call    FUN_005e14b0
        add     esp, 0xc
        cmp     al, 0x1
        jz      label_1774
        mov     dword ptr [esp + 0x28], 0x0
    label_16d1:
        fild    dword ptr [esp + 0x28]
        mov     al, byte ptr [esp + 0x28]
        test    al, 0x1
        fmul dword ptr [DAT_0076d040]
        jz      label_16e9
        fmul dword ptr [DAT_0076d598]
    label_16e9:
        fadd    dword ptr [esi]
        xor     ebx, ebx
        mov     dword ptr [esp + 0x24], ebx
        fstp    dword ptr [esp + 0x10]
    label_16f5:
        test    bl, 0x1
        fild    dword ptr [esp + 0x24]
        fmul dword ptr [DAT_0076d040]
        jz      label_170a
        fmul dword ptr [DAT_0076d598]
    label_170a:
        fld     dword ptr [esi + 0x4]
        mov     eax, dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x18]
        mov     ecx, edi
        fadd    dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x14], eax
        fstp    dword ptr [esp + 0x1c]
        call    FUN_005df620
        push    eax
        lea     ecx, [esp + 0x18]
        push    ebp
        push    ecx
        call    FUN_005e14b0
        add     esp, 0xc
        cmp     al, 0x1
        jz      label_1760
        inc     ebx
        cmp     ebx, 0xa
        mov     dword ptr [esp + 0x24], ebx
        jl      label_16f5
        mov     eax, dword ptr [esp + 0x28]
        inc     eax
        cmp     eax, 0xa
        mov     dword ptr [esp + 0x28], eax
        jl      label_16d1
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x8
    label_1760:
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi], edx
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], ecx
    label_1774:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x8
    }


}
