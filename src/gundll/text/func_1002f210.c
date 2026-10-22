/*
 * FUN_1002f210 (328 B) — __stdcall, RET 0x8. SEH-guarded lock/queue insert.
 * CFLAGS: /O1
 */

extern int g_1005504c;
extern int (__stdcall *g_1004908c)(void);   /* InterlockedExchange IAT */
extern int (__stdcall *g_10049090)(void);   /* Sleep IAT */
extern int (__stdcall *g_100490a4)(void);   /* SetEvent IAT */
extern int (__stdcall *g_10049120)(void);   /* InterlockedIncrement IAT */
extern int (__stdcall *g_100490a0)(void);   /* InterlockedExchangeAdd IAT */
extern void __cdecl FUN_1002f530(void);
extern void __cdecl FUN_1000c410(void);
extern void __cdecl FUN_1002f5d0(void);

__declspec(naked) void __stdcall FUN_1002f210(void)
{
    __asm {
        push    -0x1
        push    0x100488b8
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        push    ecx
        mov     eax, dword ptr [esp + 0x18]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x0
        call    FUN_1002f530
        lea     ebx, [edi + 0x4]
        push    0x1
        push    ebx
        mov     ebp, eax
        mov     dword ptr [esp + 0x2c], ebx
        mov     esi, 0x32
        call    dword ptr [g_1004908c]
        cmp     eax, 0x1
        jnz     Lf287
        mov     edi, edi
    Lf260:
        test    esi, esi
        jg      Lf271
        mov     ecx, esi
        neg     ecx
        push    ecx
        call    dword ptr [g_10049090]
        jmp     Lf279
    Lf271:
        mov     eax, esi
        xor     esi, esi
    Lf275:
        nop
        dec     eax
        jnz     Lf275
    Lf279:
        push    0x1
        push    ebx
        call    dword ptr [g_1004908c]
        cmp     eax, 0x1
        jz      Lf260
    Lf287:
        test    ebp, ebp
        mov     dword ptr [esp + 0x1c], 0x0
        jnz     Lf2a0
        mov     dword ptr [esp + 0x10], 0x8007000e
        jmp     Lf336
    Lf2a0:
        test    byte ptr [ebp], 0x1
        lea     esi, [edi + 0x18]
        jz      Lf302
        mov     edx, dword ptr [g_1005504c]
        push    edx
        call    FUN_1000c410
        test    eax, eax
        jz      Lf326
        mov     dword ptr [eax + 0x8], ebp
        mov     dword ptr [eax + 0x4], esi
        mov     ecx, dword ptr [esi]
        mov     dword ptr [eax], ecx
        mov     dword ptr [esi], eax
        mov     edx, dword ptr [eax]
        mov     dword ptr [edx + 0x4], eax
    Lf2ca:
        inc     dword ptr [esi + 0x18]
        mov     al, byte ptr [edi + 0x10]
        test    al, al
        jz      Lf2e4
        cmp     dword ptr [edi + 0x30], 0x1
        jnz     Lf2e4
        mov     eax, dword ptr [edi + 0x14]
        push    eax
        call    dword ptr [g_100490a4]
    Lf2e4:
        lea     ecx, [edi + 0x38]
        push    ecx
        call    dword ptr [g_10049120]
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [edx + 0xc]
        push    eax
        add     edi, 0x34
        push    edi
        call    dword ptr [g_100490a0]
        jmp     Lf336
    Lf302:
        mov     eax, dword ptr [g_1005504c]
        push    eax
        call    FUN_1000c410
        test    eax, eax
        jz      Lf326
        mov     dword ptr [eax + 0x8], ebp
        mov     dword ptr [eax], esi
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [esi + 0x4], eax
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [edx], eax
        jmp     Lf2ca
    Lf326:
        push    ebp
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x8007000e
        call    FUN_1002f5d0
    Lf336:
        push    0x0
        push    ebx
        call    dword ptr [g_1004908c]
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x10
        ret     0x8
    }
}
