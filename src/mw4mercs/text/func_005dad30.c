/*
 * FUN_005dad30 (681 B) — __thiscall (ECX=this, RET 4). Serializes a large
 * set of fields of the object at EDI through a virtual method (vtable+0x24)
 * on the stream object in ESI. Ends with a 0x3c-iteration loop over
 * [EDI+0x1e4] and a conditional call to FUN_0064b2c0.
 *
 * Match: target 100%
 */

extern void __stdcall FUN_0041fd80(void);
extern void __stdcall FUN_0064b2c0(void);

__declspec(naked) void __stdcall FUN_005dad30(void *param)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x4
        lea     ecx, [edi + 0x17c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x180]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x184]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x188]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x18c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x190]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x194]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x198]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x19c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1a0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1a4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1a8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1ac]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1b0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1b4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1b8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1bc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1c0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x1c4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x1d0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1d4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1d8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1dc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x1e0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x2f0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x2f1]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x2f2]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x2f8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x2f9]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x2fa]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x2fc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x300]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x304]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x30a]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ebx, [edi + 0x1c8]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L_af94
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x1c], 0x1
        call    dword ptr [edx + 0x24]
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     edx, dword ptr [esi]
        add     eax, 0x30
        push    0x4
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        jmp     L_afa7
    L_af94:
        mov     eax, dword ptr [esi]
        push    0x1
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x1c], 0x0
        call    dword ptr [eax + 0x24]
    L_afa7:
        lea     ebx, [edi + 0x1e4]
        mov     ebp, 0x3c
    L_afb2:
        mov     edx, dword ptr [esi]
        push    0x4
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     ebx, 0x4
        dec     ebp
        jnz     L_afb2
        mov     ecx, dword ptr [edi + 0x2e4]
        test    ecx, ecx
        jz      L_afd2
        push    esi
        call    FUN_0064b2c0
    L_afd2:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
