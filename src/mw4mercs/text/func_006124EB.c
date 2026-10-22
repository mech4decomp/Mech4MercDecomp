/*
 * FUN_006124EB (459 B) — in-.text data block containing 2 __thiscall
 * functions (this in ecx):
 *   0x124F0  (RET 0): walks an obfuscated object graph rooted at g_7dab44
 *            (XOR g_7dab40, then 0x85739531), calls a vtable method
 *            [ebx+0xc], builds a 2D coord via FUN_004d1f80/FUN_004d2680,
 *            conditionally adjusts a counter via FUN_00614880, then
 *            dispatches through FUN_00615ff0 / FUN_00618a40 and vtable
 *            calls [edx+8] / [eax+0x14]. Returns 1.
 *   0x12660  (RET 0): calls FUN_00618a40, FUN_00615ff0, FUN_0060e3f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7dab44;
extern int  g_7dab40;
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_00614880(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_00615ff0(void);
extern void __cdecl FUN_00618a40(void);
extern void __cdecl FUN_0060e3f0(void);

__declspec(naked) void __stdcall FUN_006124EB(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        /* --- fn @ 0x124F0 --- */
        sub     esp, 0x70
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 4]
        test    esi, esi
        je      L_5fa
        push    ebx
        push    0
        lea     ecx, [esp + 0x14]
        call    FUN_0041ee70
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [eax]
        mov     ebx, dword ptr [esi]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        add     ecx, 0x74
        call    FUN_0041fd80
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [ebx + 0xc]
        mov     edx, dword ptr [esp + 0x10]
        push    0
        lea     ecx, [esp + 0x14]
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [g_7dab44]
        mov     edx, dword ptr [g_7dab40]
        mov     dword ptr [esp + 0x18], 0xffffffec
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        mov     esi, dword ptr [edx + 0x80]
        mov     cx, word ptr [esi + 0x1a]
        mov     ax, word ptr [esi + 0x18]
        push    1
        lea     edx, [esp + 0x10]
        mov     word ptr [esp + 0x12], cx
        push    edx
        lea     ecx, [esp + 0x40]
        mov     word ptr [esp + 0x14], ax
        call    FUN_004d1f80
        push    0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_004d2680
        cmp     dword ptr [esi + 0x2c], 1
        jne     L_5e7
        mov     eax, dword ptr [esi + 0x30]
        test    eax, eax
        jne     L_5e7
        mov     ecx, dword ptr [g_7dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_7dab40]
        mov     edx, dword ptr [eax + 0x44]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x24]
        test    ecx, ecx
        je      L_5e7
        mov     eax, dword ptr [eax + 0x44]
        xor     eax, 0x85739531
        mov     ebx, dword ptr [eax + 0x24]
        mov     ecx, esi
        call    FUN_00614880
        sub     dword ptr [ebx + 0x1c], eax
        mov     dword ptr [esi + 0x30], 1
    L_5e7:
        lea     ecx, [esp + 0x38]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x10]
        call    FUN_0041ef60
        pop     ebx
    L_5fa:
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx + 0x44]
        lea     eax, [edx + 0x44]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x6c]
        mov     ecx, dword ptr [eax]
        push    0
        push    0
        push    edx
        xor     ecx, 0x85739531
        call    FUN_00615ff0
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0x44]
        xor     ecx, 0x85739531
        call    FUN_00618a40
        mov     edx, dword ptr [edi + 0x18]
        lea     ecx, [edi + 0x18]
        call    dword ptr [edx + 8]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x14]
        pop     edi
        mov     eax, 1
        pop     esi
        add     esp, 0x70
        ret
        nop
        /* --- fn @ 0x12660 --- */
        mov     eax, dword ptr [g_7dab44]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0x44]
        xor     ecx, 0x85739531
        call    FUN_00618a40
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0x44]
        add     eax, 0x44
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x6c]
        mov     ecx, dword ptr [eax]
        push    0
        push    0
        push    edx
        xor     ecx, 0x85739531
        call    FUN_00615ff0
        mov     ecx, esi
        call    FUN_0060e3f0
        pop     esi
        ret
    }
}
