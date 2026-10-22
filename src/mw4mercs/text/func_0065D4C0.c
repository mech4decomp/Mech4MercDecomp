/*
 * FUN_0065D4C0 (375 B) — __stdcall, RET 4 (1 param). Walks global pointers
 * [0x7dc6e0] -> +0x4c -> +0x24, copies 0xc dwords from +0x80, and performs
 * a series of vector/FP computations via several helpers. Returns 1 on
 * success, 0 otherwise.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dc6e0;
extern int g_7b220c;

extern void __cdecl FUN_0041C540(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_0040C410(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040C9E0(void);
extern void __cdecl FUN_0054FD90(void);
extern void __cdecl FUN_0040CA10(void);
extern void __cdecl FUN_0040CB00(void);

__declspec(naked) void FUN_0065D4C0(void)
{
    __asm {
        mov     eax, dword ptr [g_7dc6e0]
        sub     esp, 0x94
        test    eax, eax
        push    esi
        je      L_ret0
        mov     eax, dword ptr [eax + 0x4c]
        test    eax, eax
        je      L_ret0
        mov     eax, dword ptr [eax + 0x24]
        test    eax, eax
        je      L_ret0
        push    edi
        lea     esi, [eax + 0x80]
        mov     ecx, 0xc
        lea     edi, [esp + 0x6c]
        rep     movsd
        mov     eax, dword ptr [esp + 0x78]
        mov     ecx, dword ptr [esp + 0x88]
        mov     edx, dword ptr [esp + 0x98]
        mov     esi, dword ptr [esp + 0xa0]
        mov     dword ptr [esp + 8], eax
        mov     eax, dword ptr [g_7b220c]
        mov     dword ptr [esp + 0xc], ecx
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        push    esi
        mov     dword ptr [esp + 0x1c], edx
        call    FUN_0041C540
        add     esp, 0xc
        test    al, al
        pop     edi
        je      L_546
        mov     al, 1
        pop     esi
        add     esp, 0x94
        ret     4
L_546:
        lea     edx, [esp + 0x2c]
        push    edx
        lea     ecx, [esp + 0x6c]
        call    FUN_00428730
        lea     eax, [esp + 0x2c]
        push    eax
        lea     ecx, [esp + 8]
        call    FUN_0040C410
        lea     ecx, [esp + 0x68]
        push    ecx
        lea     ecx, [esp + 0x48]
        call    FUN_00419480
        lea     edx, [esp + 0x44]
        push    edx
        lea     eax, [esp + 8]
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_0040C9E0
        fld     dword ptr [esi]
        fsub    dword ptr [esp + 4]
        lea     ecx, [esp + 0x5c]
        push    ecx
        lea     ecx, [esp + 0x6c]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esi + 4]
        fsub    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esi + 8]
        fsub    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x2c]
        call    FUN_0054FD90
        lea     edx, [esp + 0x5c]
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_0040C410
        lea     eax, [esp + 0x68]
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_00419480
        lea     ecx, [esp + 0x38]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_0040C9E0
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        lea     ecx, [esp + 0x58]
        call    FUN_0040CA10
        lea     ecx, [esp + 0x50]
        call    FUN_0040CB00
        fstp    dword ptr [esp + 0x10]
        lea     ecx, [esp + 0x20]
        call    FUN_0040CB00
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je      L_61f
        mov     eax, 1
        pop     esi
        add     esp, 0x94
        ret     4
L_61f:
        xor     eax, eax
        pop     esi
        add     esp, 0x94
        ret     4
L_ret0:
        xor     al, al
        pop     esi
        add     esp, 0x94
        ret     4
    }
}
