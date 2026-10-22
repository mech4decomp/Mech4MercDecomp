/*
 * FUN_005F1D70 (465 B) — in-.text data block: one __thiscall (this in
 * ecx) function at 0x1D70 (RET 8) + 2 nop pad + a 1-byte `ret` stub at
 * 0x1F40. Resolves a target via FUN_0041fd80 / object graph at g_7dab44
 * (XOR g_7dab40, then 0x85739531), calls FUN_004daa20, then iterates a
 * 4-byte-strided array (0x1b8..0x1bc), for each entry calling
 * FUN_004fcb30 / FUN_00534630 / FUN_004ea0f0 / FUN_004d5b70, copies the
 * array back, and dispatches via vtable [eax+0x48] + FUN_004dae60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004daa20(void);
extern int  g_7dab44;
extern int  g_7dab40;
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00534630(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_004d5b70(void);
extern void __cdecl FUN_004dae60(void);

__declspec(naked) void __stdcall FUN_005F1D70(void)
{
    __asm {
        sub     esp, 0x50
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x178]
        test    eax, eax
        push    esi
        je      L_1dc0
        mov     cl, byte ptr [eax + 0x5ac]
        test    cl, cl
        je      L_1dab
        lea     esi, [eax + 0x5b0]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je      L_1dab
        mov     ecx, esi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        jmp     L_1dcc
    L_1dab:
        mov     eax, dword ptr [ebx + 0x170]
        mov     ecx, dword ptr [eax + 0xd8]
        add     ecx, 0x80
        push    ecx
        jmp     L_1dd2
    L_1dc0:
        mov     edx, dword ptr [ebx + 0x170]
        mov     eax, dword ptr [edx + 0xd8]
    L_1dcc:
        add     eax, 0x80
        push    eax
    L_1dd2:
        mov     ecx, ebx
        call    FUN_004daa20
        mov     ecx, dword ptr [ebx + 0x1bc]
        mov     edx, dword ptr [ebx + 0x1b8]
        sub     ecx, edx
        sar     ecx, 2
        je      L_1f1c
        mov     eax, dword ptr [ebx + 0x1bc]
        push    ebp
        mov     ebp, edx
        cmp     ebp, eax
        je      L_1ef1
    L_1e01:
        push    edi
    L_1e02:
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        mov     edi, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ebp]
        xor     eax, edi
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     edi, eax
        test    edi, edi
        je      L_1edf
        mov     eax, dword ptr [edi + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        push    0
        push    2
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [eax + 0x2c]
        push    0x44
        mov     dword ptr [esp + 0x20], ecx
        push    4
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x28], edx
        lea     esi, [edi + 0x14]
        call    FUN_00534630
        push    esi
        lea     ecx, [esp + 0x30]
        call    FUN_004ea0f0
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x4c], ecx
        mov     cx, word ptr [esi + 2]
        mov     dword ptr [esp + 0x50], edx
        mov     dword ptr [esp + 0x48], eax
        mov     al, byte ptr [esi]
        lea     edx, [esp + 0x1c]
        mov     word ptr [esp + 0x36], cx
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x40], 0x3f800000
        mov     dword ptr [esp + 0x44], 0
        mov     dword ptr [esp + 0x48], 0
        mov     byte ptr [esp + 0x38], al
        mov     dword ptr [esp + 0x34], 0x47c35000
        mov     byte ptr [esp + 0x3c], 5
        mov     dword ptr [esp + 0x58], 0
        mov     byte ptr [esp + 0x5c], 0
        mov     dword ptr [esp + 0x60], 0xffffffff
        call    FUN_004d5b70
    L_1edf:
        mov     eax, dword ptr [ebx + 0x1bc]
        add     ebp, 4
        cmp     ebp, eax
        jne     L_1e02
        pop     edi
    L_1ef1:
        mov     eax, dword ptr [ebx + 0x1bc]
        mov     edx, dword ptr [ebx + 0x1b8]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 2
        test    ecx, ecx
        pop     ebp
        jle     L_1f16
    L_1f09:
        mov     esi, dword ptr [eax]
        mov     dword ptr [edx], esi
        add     eax, 4
        add     edx, 4
        dec     ecx
        jne     L_1f09
    L_1f16:
        mov     dword ptr [ebx + 0x1bc], edx
    L_1f1c:
        mov     eax, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [eax + 0x48]
        mov     ecx, dword ptr [esp + 0x60]
        mov     edx, dword ptr [esp + 0x5c]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    FUN_004dae60
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret     8
        nop
        nop
        /* --- 1-byte ret stub @ 0x1F40 --- */
        ret
    }
}
