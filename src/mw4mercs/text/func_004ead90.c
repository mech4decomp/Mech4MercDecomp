/*
 * FUN_004EAD90 (390 B) - MLR/Adept tile constructor (__thiscall, RET 0xc, 3 args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f21b0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_004f29b0(void);
extern void __cdecl FUN_004da840(void);
extern void __cdecl FUN_004eb0a0(void);
extern int   g_7dc868;   /* DAT_007dc868 */

__declspec(naked) void __fastcall FUN_004ead90(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_004f21b0
        xor     eax, eax
        lea     ebp, [esi + 0x3c]
        lea     ebx, [esi + 0x40]
        mov     word ptr [ebp], 0xffff
        mov     word ptr [ebp + 0x2], ax
        lea     ecx, [esi + 0x6c]
        push    eax
        mov     word ptr [ebx], 0xffff
        mov     word ptr [ebx + 0x2], ax
        call    FUN_0041fc80
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0x34]
        mov     dword ptr [esi + 0x6c], 0x774618
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi], 0x774604
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        push    ebp
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        push    ebx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [edi]
        push    0x4
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x44]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x48]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi]
        push    0x4
        lea     ecx, [esi + 0x4c]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esi + 0x38], edx
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x50]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0x54]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0x58]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x5c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x60]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x64]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [g_7dc868]
        push    ebp
        call    FUN_004f29b0
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, -0x1
        mov     ecx, dword ptr [ecx + 0x4c]
        mov     dword ptr [esi + 0x2c], ecx
        jz      LAEC1
        push    eax
        call    FUN_004da840
        mov     dword ptr [esi + 0x30], eax
        jmp     LAEC8
    LAEC1:
        mov     dword ptr [esi + 0x30], 0x0
    LAEC8:
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x68]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     al, byte ptr [esp + 0x1c]
        test    al, al
        jz      LAF0C
        mov     ecx, esi
        call    FUN_004eb0a0
        mov     ecx, dword ptr [esi + 0x30]
        test    ecx, ecx
        jz      LAF0C
        lea     eax, [esp + 0x20]
        push    eax
        mov     eax, dword ptr [esi + 0x2c]
        mov     byte ptr [esp + 0x24], 0x1
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x4]
    LAF0C:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
