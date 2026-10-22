/*
 * FUN_005ee440 (128 B) — __thiscall method (ECX = this), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004e27b0(void);
extern void __stdcall FUN_004daa20(void);

__declspec(naked) void __stdcall FUN_005ee440(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x3c
        push    ebx
        mov     ebx, ecx
        push    esi
        mov     esi, dword ptr [ebx + 0xd8]
        mov     eax, dword ptr [esi + 0x2c]
        mov     dword ptr [esp + 0x8], eax
        mov     ecx, dword ptr [esi + 0x3c]
        mov eax, dword ptr [DAT_007dab44]
        mov     dword ptr [esp + 0xc], ecx
        mov     edx, dword ptr [esi + 0x4c]
        mov ecx, dword ptr [DAT_007dab40]
        mov     dword ptr [esp + 0x10], edx
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [eax + 0x1c]
        xor     ecx, 0x85739531
        call    FUN_004e27b0
        cmp     eax, -0x1
        jz      LE494
        mov     edx, dword ptr [ebx + 0x10]
        shr     edx, 0x16
        test    dl, 0x1
        jz      LE4BA
LE494:
        push    edi
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [esp + 0x18]
        lea     eax, [esp + 0x18]
        rep     movsd
        push    eax
        mov     ecx, ebx
        call    FUN_004daa20
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x18]
        pop     edi
LE4BA:
        pop     esi
        pop     ebx
        add     esp, 0x3c
        ret
    }


}
