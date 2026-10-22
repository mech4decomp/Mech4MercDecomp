/*
 * FUN_1001c490 (353 B) — __stdcall, RET 0x4.
 * Serialized (InterlockedExchange) string-load helper; reads a string via a
 * virtual call and converts it.
 */

extern void __cdecl FUN_10001d50(void);
extern void __stdcall FUN_10002020(void);
extern void __stdcall FUN_10002080(void);
extern void __cdecl FUN_10001d60(void);
extern int *g_1004908c;   /* InterlockedExchange IAT */
extern int *g_10049090;   /* Sleep IAT */
extern int *g_10049094;   /* GetCurrentThreadId IAT */
extern int g_10055058;
extern int g_1005505c;
extern char g_10055060;
extern short g_1007505e;

__declspec(naked) void __stdcall FUN_1001c490(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [g_1004908c]
        xor     ebp, ebp
        push    0x1
        push    offset g_10055058
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x20], ebp
        mov     dword ptr [esp + 0x1c], ebp
        call    edi
        cmp     eax, 0x1
        jnz     L_1001c4ef
    L_1001c4bd:
        mov     esi, dword ptr [g_10049090]
    L_1001c4c3:
        cmp     dword ptr [esp + 0x14], ebp
        mov     eax, dword ptr [esp + 0x14]
        jl      L_1001c4d2
        push    eax
        call    esi
        jmp     L_1001c4e1
    L_1001c4d2:
        cmp     eax, ebp
        jge     L_1001c4e1
    L_1001c4d6:
        mov     ecx, dword ptr [esp + 0x14]
        inc     ecx
        mov     dword ptr [esp + 0x14], ecx
        js      L_1001c4d6
    L_1001c4e1:
        push    0x1
        push    offset g_10055058
        call    edi
        cmp     eax, 0x1
        jz      L_1001c4c3
    L_1001c4ef:
        call    dword ptr [g_10049094]
        mov     ebx, dword ptr [esp + 0x24]
        mov     dword ptr [g_1005505c], eax
        mov     eax, dword ptr [ebx + 0xc]
        cmp     eax, ebp
        jz      L_1001c51c
        mov     edx, dword ptr [eax]
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0xffff
        push    offset g_10055060
        push    eax
        call    dword ptr [edx + 0x34]
        jmp     L_1001c530
    L_1001c51c:
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x1c]
        push    eax
        push    0xffff
        push    offset g_10055060
        push    ebx
        call    dword ptr [edx]
    L_1001c530:
        cmp     eax, 0xc1120002
        jnz     L_1001c541
        mov     edi, 0xc1120005
        jmp     L_1001c5c2
    L_1001c541:
        mov     ecx, dword ptr [esp + 0x1c]
        lea     esi, [ecx + ecx]
        push    esi
        mov     word ptr [g_1007505e], bp
        call    FUN_10001d50
        add     esp, 0x4
        cmp     eax, ebp
        mov     dword ptr [esp + 0x10], eax
        jnz     L_1001c567
        mov     edi, 0x8007000e
        jmp     L_1001c5c2
    L_1001c567:
        lea     edx, [esp + 0x18]
        push    edx
        push    esi
        push    eax
        push    offset g_10055060
        call    FUN_10002020
        mov     edi, eax
        cmp     edi, 0xc1120002
        jnz     L_1001c5ad
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        push    offset g_10055060
        call    FUN_10002080
        mov     edi, eax
        cmp     edi, ebp
        jl      L_1001c5c2
        mov     esi, dword ptr [esp + 0x18]
    L_1001c5ad:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [ebx + 0x10], eax
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [ebx + 0x18], ecx
        mov     dword ptr [ebx + 0x14], esi
    L_1001c5c2:
        push    ebp
        push    offset g_10055058
        mov     dword ptr [g_1005505c], ebp
        call    dword ptr [g_1004908c]
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        jz      L_1001c5e5
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_1001c5e5:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x4
    }
}
