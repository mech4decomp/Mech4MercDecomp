/*
 * FUN_005e0960 (431 B) — __thiscall (ECX=this, RET 4) complex check with
 * obfuscated vtable dispatch and FPU distance comparison.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_005df620(void *a);
extern char __stdcall FUN_00415230(void *a);
extern int __stdcall FUN_005dfd80(void *a);
extern char __stdcall FUN_0058b5f0(void *a);
extern int __stdcall FUN_005905c0(void *a);
extern int __stdcall FUN_005e0910(void *a);
extern void __stdcall FUN_00428730(void *a);
extern void __stdcall FUN_0040c410(void *a);
extern void __stdcall FUN_00419480(void *a);
extern void __stdcall FUN_0040c9e0(void *a, void *b);
extern void __stdcall FUN_0040ca10(void *a, void *b);
extern void __stdcall FUN_0054fd90(void *a);
extern float __stdcall FUN_0040cb00(void *a);

__declspec(naked) void __stdcall FUN_005e0960(void)
{
    

extern int DAT_007f1f84;
__asm {
sub     esp, 0x6c
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        call    FUN_005df620
        test    eax, eax
        jnz     L_b04
        mov     esi, dword ptr [esp + 0x7c]
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        and     al, 0x1
        cmp     al, 0x1
        jz      L_b04
        mov eax, dword ptr [DAT_007f1f84]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_b04
        mov     ecx, ebx
        call    FUN_005dfd80
        cmp     eax, 0x8
        jz      L_9be
        mov     ecx, ebx
        call    FUN_005dfd80
        cmp     dword ptr [esi + 0x4cc], eax
        jz      L_b04
L_9be:
        mov     ecx, esi
        call    FUN_0058b5f0
        cmp     al, 0x1
        jz      L_b04
        mov     ecx, esi
        call    FUN_005905c0
        mov     edi, eax
        cmp     edi, 0x1
        jl      L_b04
        push    esi
        mov     ecx, ebx
        call    FUN_005e0910
        cmp     eax, edi
        jge     L_b04
        mov     eax, dword ptr [ebx + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     esi, dword ptr [esi + 0xd8]
        add     eax, 0x80
        mov     dword ptr [esp + 0x18], ecx
        mov     edx, dword ptr [eax + 0x1c]
        lea     ecx, [esp + 0x54]
        mov     dword ptr [esp + 0x1c], edx
        mov     eax, dword ptr [eax + 0x2c]
        add     esi, 0x80
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], eax
        call    FUN_00428730
        lea     edx, [esp + 0x54]
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_0040c410
        push    esi
        lea     ecx, [esp + 0x64]
        call    FUN_00419480
        lea     eax, [esp + 0x60]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_0040c9e0
        lea     edx, [esp + 0x24]
        push    edx
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x74]
        call    FUN_0040ca10
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, esi
        call    FUN_0054fd90
        mov     edx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0xc], edx
        mov     edx, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [esi + 0x1c]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [esi + 0x2c]
        mov     dword ptr [esp + 0x3c], edx
        lea     edx, [esp + 0x3c]
        mov     dword ptr [esp + 0x40], eax
        push    edx
        lea     eax, [esp + 0x10]
        mov     dword ptr [esp + 0x48], ecx
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040c9e0
        fld     dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0xc]
        lea     ecx, [esp + 0x48]
        fstp    dword ptr [esp + 0x48]
        fld     dword ptr [esp + 0x1c]
        fsub    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x4c]
        fld     dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x50]
        call    FUN_0040cb00
        fstp    dword ptr [esp + 0x7c]
        lea     ecx, [esp + 0x6c]
        call    FUN_0040cb00
        fcomp   dword ptr [esp + 0x7c]
        fnstsw  ax
        test    ah, 0x41
        jz      L_b04
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        add     esp, 0x6c
        ret     4
L_b04:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0x6c
        ret     4
    }


}
